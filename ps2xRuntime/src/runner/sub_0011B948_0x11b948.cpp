#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011B948
// Address: 0x11b948 - 0x11c144
void sub_0011B948_0x11b948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B948_0x11b948");
#endif

    switch (ctx->pc) {
        case 0x11b9c8u: goto label_11b9c8;
        case 0x11b9ccu: goto label_11b9cc;
        case 0x11b9f4u: goto label_11b9f4;
        case 0x11b9f8u: goto label_11b9f8;
        case 0x11ba6cu: goto label_11ba6c;
        case 0x11bad4u: goto label_11bad4;
        case 0x11bb3cu: goto label_11bb3c;
        case 0x11bc04u: goto label_11bc04;
        case 0x11bcb0u: goto label_11bcb0;
        case 0x11bcb4u: goto label_11bcb4;
        case 0x11bcc0u: goto label_11bcc0;
        case 0x11bcc4u: goto label_11bcc4;
        case 0x11be6cu: goto label_11be6c;
        default: break;
    }

    ctx->pc = 0x11b948u;

    // 0x11b948: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11b948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11b94c: 0x3c0e7fff  lui         $t6, 0x7FFF
    ctx->pc = 0x11b94cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)32767 << 16));
    // 0x11b950: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11b950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11b954: 0x3c0d0066  lui         $t5, 0x66
    ctx->pc = 0x11b954u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)102 << 16));
    // 0x11b958: 0xe7b50034  swc1        $f21, 0x34($sp)
    ctx->pc = 0x11b958u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x11b95c: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x11b95cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x11b960: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x11b960u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x11b964: 0x3c0f007f  lui         $t7, 0x7F
    ctx->pc = 0x11b964u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)127 << 16));
    // 0x11b968: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x11b968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x11b96c: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x11b96cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x11b970: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11b970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11b974: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x11b974u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x11b978: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x11b978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x11b97c: 0x25ad2eb0  addiu       $t5, $t5, 0x2EB0
    ctx->pc = 0x11b97cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 11952));
    // 0x11b980: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x11b980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x11b984: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11b984u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11b988: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x11b988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x11b98c: 0x44116800  mfc1        $s1, $f13
    ctx->pc = 0x11b98cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x11b990: 0x44126000  mfc1        $s2, $f12
    ctx->pc = 0x11b990u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x11b994: 0x22e8024  and         $s0, $s1, $t6
    ctx->pc = 0x11b994u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & GPR_U64(ctx, 14));
    // 0x11b998: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x11b998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11b99c: 0x1f0782a  slt         $t7, $t7, $s0
    ctx->pc = 0x11b99cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11b9a0: 0x11e00014  beqz        $t7, . + 4 + (0x14 << 2)
    ctx->pc = 0x11B9A0u;
    {
        const bool branch_taken_0x11b9a0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B9A0u;
        // 0x11b9a4: 0x24e9824  and         $s3, $s2, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 18) & GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b9a0) {
            ctx->pc = 0x11B9F4u;
            goto label_11b9f4;
        }
    }
    ctx->pc = 0x11B9A8u;
    // 0x11b9a8: 0x6410007  bgez        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x11B9A8u;
    {
        const bool branch_taken_0x11b9a8 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x11B9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B9A8u;
        // 0x11b9ac: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b9a8) {
            ctx->pc = 0x11B9C8u;
            goto label_11b9c8;
        }
    }
    ctx->pc = 0x11B9B0u;
    // 0x11b9b0: 0x3c0f4b7f  lui         $t7, 0x4B7F
    ctx->pc = 0x11b9b0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)19327 << 16));
    // 0x11b9b4: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11b9b4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11b9b8: 0x1f0782a  slt         $t7, $t7, $s0
    ctx->pc = 0x11b9b8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11b9bc: 0x11e001d3  beqz        $t7, . + 4 + (0x1D3 << 2)
    ctx->pc = 0x11B9BCu;
    {
        const bool branch_taken_0x11b9bc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B9BCu;
        // 0x11b9c0: 0x3c0f3f7f  lui         $t7, 0x3F7F (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b9bc) {
            ctx->pc = 0x11C10Cu;
            goto label_11c10c;
        }
    }
    ctx->pc = 0x11B9C4u;
    // 0x11b9c4: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x11b9c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_11b9c8:
    // 0x11b9c8: 0x3c0f3f80  lui         $t7, 0x3F80
    ctx->pc = 0x11b9c8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16256 << 16));
label_11b9cc:
    // 0x11b9cc: 0x560f0013  bnel        $s0, $t7, . + 4 + (0x13 << 2)
    ctx->pc = 0x11B9CCu;
    {
        const bool branch_taken_0x11b9cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 15));
        if (branch_taken_0x11b9cc) {
            ctx->pc = 0x11B9D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B9CCu;
            // 0x11b9d0: 0x3c0f4000  lui         $t7, 0x4000 (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16384 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11BA1Cu;
            goto label_11ba1c;
        }
    }
    ctx->pc = 0x11B9D4u;
    // 0x11b9d4: 0x6210007  bgez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x11B9D4u;
    {
        const bool branch_taken_0x11b9d4 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x11B9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B9D4u;
        // 0x11b9d8: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b9d4) {
            ctx->pc = 0x11B9F4u;
            goto label_11b9f4;
        }
    }
    ctx->pc = 0x11B9DCu;
    // 0x11b9dc: 0x3c0e0066  lui         $t6, 0x66
    ctx->pc = 0x11b9dcu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)102 << 16));
    // 0x11b9e0: 0x25ce2eb0  addiu       $t6, $t6, 0x2EB0
    ctx->pc = 0x11b9e0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 11952));
    // 0x11b9e4: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x11b9e4u;
    { uint32_t bits = FAST_READ32(0x662EB0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11b9e8: 0x0  nop
    ctx->pc = 0x11b9e8u;
    // NOP
    // 0x11b9ec: 0x0  nop
    ctx->pc = 0x11b9ecu;
    // NOP
    // 0x11b9f0: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x11b9f0u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
label_11b9f4:
    // 0x11b9f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11b9f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11b9f8:
    // 0x11b9f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11b9f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11b9fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x11b9fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ba00: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x11ba00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11ba04: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x11ba04u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11ba08: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x11ba08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x11ba0c: 0xc7b50034  lwc1        $f21, 0x34($sp)
    ctx->pc = 0x11ba0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x11ba10: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x11ba10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11ba14: 0x3e00008  jr          $ra
    ctx->pc = 0x11BA14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BA14u;
        // 0x11ba18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BA14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11BA1Cu;
label_11ba1c:
    // 0x11ba1c: 0x162f0003  bne         $s1, $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x11BA1Cu;
    {
        const bool branch_taken_0x11ba1c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 15));
        ctx->pc = 0x11BA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BA1Cu;
        // 0x11ba20: 0x3c0f3f00  lui         $t7, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ba1c) {
            ctx->pc = 0x11BA2Cu;
            goto label_11ba2c;
        }
    }
    ctx->pc = 0x11BA24u;
    // 0x11ba24: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x11BA24u;
    {
        const bool branch_taken_0x11ba24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BA24u;
        // 0x11ba28: 0x4614a002  mul.s       $f0, $f20, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ba24) {
            ctx->pc = 0x11B9F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b9f4;
        }
    }
    ctx->pc = 0x11BA2Cu;
label_11ba2c:
    // 0x11ba2c: 0x162f000d  bne         $s1, $t7, . + 4 + (0xD << 2)
    ctx->pc = 0x11BA2Cu;
    {
        const bool branch_taken_0x11ba2c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 15));
        if (branch_taken_0x11ba2c) {
            ctx->pc = 0x11BA64u;
            goto label_11ba64;
        }
    }
    ctx->pc = 0x11BA34u;
    // 0x11ba34: 0x640000b  bltz        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x11BA34u;
    {
        const bool branch_taken_0x11ba34 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x11BA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BA34u;
        // 0x11ba38: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ba34) {
            ctx->pc = 0x11BA64u;
            goto label_11ba64;
        }
    }
    ctx->pc = 0x11BA3Cu;
    // 0x11ba3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11ba3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ba40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11ba40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11ba44: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x11ba44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ba48: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x11ba48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11ba4c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x11ba4cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11ba50: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x11ba50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x11ba54: 0xc7b50034  lwc1        $f21, 0x34($sp)
    ctx->pc = 0x11ba54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x11ba58: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x11ba58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11ba5c: 0x8047138  j           func_11C4E0
    ctx->pc = 0x11BA5Cu;
    ctx->pc = 0x11BA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BA5Cu;
    // 0x11ba60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C4E0u;
    sub_0011C4E0_0x11c4e0(rdram, ctx, runtime); return;
    ctx->pc = 0x11BA64u;
label_11ba64:
    // 0x11ba64: 0xc047ac4  jal         func_11EB10
    ctx->pc = 0x11BA64u;
    SET_GPR_U32(ctx, 31, 0x11BA6Cu);
    ctx->pc = 0x11BA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BA64u;
    // 0x11ba68: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB10u, 0x11BA64u, 0x11BA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BA6Cu;
label_11ba6c:
    // 0x11ba6c: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x11ba6cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
    // 0x11ba70: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x11ba70u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x11ba74: 0x1d3782a  slt         $t7, $t6, $s3
    ctx->pc = 0x11ba74u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x11ba78: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x11BA78u;
    {
        const bool branch_taken_0x11ba78 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BA78u;
        // 0x11ba7c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ba78) {
            ctx->pc = 0x11BA8Cu;
            goto label_11ba8c;
        }
    }
    ctx->pc = 0x11BA80u;
    // 0x11ba80: 0x3c0d3f80  lui         $t5, 0x3F80
    ctx->pc = 0x11ba80u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)16256 << 16));
    // 0x11ba84: 0x166d001a  bne         $s3, $t5, . + 4 + (0x1A << 2)
    ctx->pc = 0x11BA84u;
    {
        const bool branch_taken_0x11ba84 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 13));
        ctx->pc = 0x11BA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BA84u;
        // 0x11ba88: 0x1247c2  srl         $t0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ba84) {
            ctx->pc = 0x11BAF0u;
            goto label_11baf0;
        }
    }
    ctx->pc = 0x11BA8Cu;
label_11ba8c:
    // 0x11ba8c: 0x6210006  bgez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x11BA8Cu;
    {
        const bool branch_taken_0x11ba8c = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x11BA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BA8Cu;
        // 0x11ba90: 0x3c0f0066  lui         $t7, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ba8c) {
            ctx->pc = 0x11BAA8u;
            goto label_11baa8;
        }
    }
    ctx->pc = 0x11BA94u;
    // 0x11ba94: 0x25ef2eb0  addiu       $t7, $t7, 0x2EB0
    ctx->pc = 0x11ba94u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11952));
    // 0x11ba98: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11ba98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11ba9c: 0x0  nop
    ctx->pc = 0x11ba9cu;
    // NOP
    // 0x11baa0: 0x0  nop
    ctx->pc = 0x11baa0u;
    // NOP
    // 0x11baa4: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x11baa4u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
label_11baa8:
    // 0x11baa8: 0x641ffd2  bgez        $s2, . + 4 + (-0x2E << 2)
    ctx->pc = 0x11BAA8u;
    {
        const bool branch_taken_0x11baa8 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x11BAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BAA8u;
        // 0x11baac: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11baa8) {
            ctx->pc = 0x11B9F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b9f4;
        }
    }
    ctx->pc = 0x11BAB0u;
    // 0x11bab0: 0x3c0fc080  lui         $t7, 0xC080
    ctx->pc = 0x11bab0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)49280 << 16));
    // 0x11bab4: 0x26f7821  addu        $t7, $s3, $t7
    ctx->pc = 0x11bab4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 15)));
    // 0x11bab8: 0x1f47825  or          $t7, $t7, $s4
    ctx->pc = 0x11bab8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 20));
    // 0x11babc: 0x15e00007  bnez        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x11BABCu;
    {
        const bool branch_taken_0x11babc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BABCu;
        // 0x11bac0: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11babc) {
            ctx->pc = 0x11BADCu;
            goto label_11badc;
        }
    }
    ctx->pc = 0x11BAC4u;
    // 0x11bac4: 0x460c6001  sub.s       $f0, $f12, $f12
    ctx->pc = 0x11bac4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
    // 0x11bac8: 0x0  nop
    ctx->pc = 0x11bac8u;
    // NOP
    // 0x11bacc: 0x0  nop
    ctx->pc = 0x11baccu;
    // NOP
    // 0x11bad0: 0x46000303  div.s       $f12, $f0, $f0
    ctx->pc = 0x11bad0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[0]); }
label_11bad4:
    // 0x11bad4: 0x1000ffc7  b           . + 4 + (-0x39 << 2)
    ctx->pc = 0x11BAD4u;
    {
        const bool branch_taken_0x11bad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BAD4u;
        // 0x11bad8: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bad4) {
            ctx->pc = 0x11B9F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b9f4;
        }
    }
    ctx->pc = 0x11BADCu;
label_11badc:
    // 0x11badc: 0x528ffffd  beql        $s4, $t7, . + 4 + (-0x3 << 2)
    ctx->pc = 0x11BADCu;
    {
        const bool branch_taken_0x11badc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 15));
        if (branch_taken_0x11badc) {
            ctx->pc = 0x11BAE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11BADCu;
            // 0x11bae0: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
            ctx->f[12] = FPU_NEG_S(ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11BAD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11bad4;
        }
    }
    ctx->pc = 0x11BAE4u;
    // 0x11bae4: 0x1000ffc3  b           . + 4 + (-0x3D << 2)
    ctx->pc = 0x11BAE4u;
    {
        const bool branch_taken_0x11bae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BAE4u;
        // 0x11bae8: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bae4) {
            ctx->pc = 0x11B9F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b9f4;
        }
    }
    ctx->pc = 0x11BAECu;
    // 0x11baec: 0x0  nop
    ctx->pc = 0x11baecu;
    // NOP
label_11baf0:
    // 0x11baf0: 0x250fffff  addiu       $t7, $t0, -0x1
    ctx->pc = 0x11baf0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x11baf4: 0x1f47825  or          $t7, $t7, $s4
    ctx->pc = 0x11baf4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 20));
    // 0x11baf8: 0x15e00007  bnez        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x11BAF8u;
    {
        const bool branch_taken_0x11baf8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BAF8u;
        // 0x11bafc: 0x3c0f4d00  lui         $t7, 0x4D00 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)19712 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11baf8) {
            ctx->pc = 0x11BB18u;
            goto label_11bb18;
        }
    }
    ctx->pc = 0x11BB00u;
    // 0x11bb00: 0x4614a001  sub.s       $f0, $f20, $f20
    ctx->pc = 0x11bb00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[20]);
    // 0x11bb04: 0x0  nop
    ctx->pc = 0x11bb04u;
    // NOP
    // 0x11bb08: 0x0  nop
    ctx->pc = 0x11bb08u;
    // NOP
    // 0x11bb0c: 0x46000003  div.s       $f0, $f0, $f0
    ctx->pc = 0x11bb0cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[0]); }
    // 0x11bb10: 0x1000ffb9  b           . + 4 + (-0x47 << 2)
    ctx->pc = 0x11BB10u;
    {
        const bool branch_taken_0x11bb10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB10u;
        // 0x11bb14: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bb10) {
            ctx->pc = 0x11B9F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b9f8;
        }
    }
    ctx->pc = 0x11BB18u;
label_11bb18:
    // 0x11bb18: 0x1f0782a  slt         $t7, $t7, $s0
    ctx->pc = 0x11bb18u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11bb1c: 0x11e000e8  beqz        $t7, . + 4 + (0xE8 << 2)
    ctx->pc = 0x11BB1Cu;
    {
        const bool branch_taken_0x11bb1c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB1Cu;
        // 0x11bb20: 0x3c0f3f7f  lui         $t7, 0x3F7F (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bb1c) {
            ctx->pc = 0x11BEC0u;
            goto label_11bec0;
        }
    }
    ctx->pc = 0x11BB24u;
    // 0x11bb24: 0x35effff7  ori         $t7, $t7, 0xFFF7
    ctx->pc = 0x11bb24u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65527);
    // 0x11bb28: 0x1f3782a  slt         $t7, $t7, $s3
    ctx->pc = 0x11bb28u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x11bb2c: 0x55e00007  bnel        $t7, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x11BB2Cu;
    {
        const bool branch_taken_0x11bb2c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x11bb2c) {
            ctx->pc = 0x11BB30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11BB2Cu;
            // 0x11bb30: 0x3c0f3f80  lui         $t7, 0x3F80 (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16256 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11BB4Cu;
            goto label_11bb4c;
        }
    }
    ctx->pc = 0x11BB34u;
    // 0x11bb34: 0x6200003  bltz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11BB34u;
    {
        const bool branch_taken_0x11bb34 = (GPR_S64(ctx, 17) < 0);
        ctx->pc = 0x11BB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB34u;
        // 0x11bb38: 0x3c0f0066  lui         $t7, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bb34) {
            ctx->pc = 0x11BB44u;
            goto label_11bb44;
        }
    }
    ctx->pc = 0x11BB3Cu;
label_11bb3c:
    // 0x11bb3c: 0x1000ffad  b           . + 4 + (-0x53 << 2)
    ctx->pc = 0x11BB3Cu;
    {
        const bool branch_taken_0x11bb3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB3Cu;
        // 0x11bb40: 0x44800000  mtc1        $zero, $f0 (Delay Slot)
        { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bb3c) {
            ctx->pc = 0x11B9F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b9f4;
        }
    }
    ctx->pc = 0x11BB44u;
label_11bb44:
    // 0x11bb44: 0x1000ffab  b           . + 4 + (-0x55 << 2)
    ctx->pc = 0x11BB44u;
    {
        const bool branch_taken_0x11bb44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB44u;
        // 0x11bb48: 0xc5e02eac  lwc1        $f0, 0x2EAC($t7) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 11948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bb44) {
            ctx->pc = 0x11B9F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b9f4;
        }
    }
    ctx->pc = 0x11BB4Cu;
label_11bb4c:
    // 0x11bb4c: 0x35ef0007  ori         $t7, $t7, 0x7
    ctx->pc = 0x11bb4cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)7);
    // 0x11bb50: 0x1f3782a  slt         $t7, $t7, $s3
    ctx->pc = 0x11bb50u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x11bb54: 0x11e00006  beqz        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x11BB54u;
    {
        const bool branch_taken_0x11bb54 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB54u;
        // 0x11bb58: 0x3c0d0066  lui         $t5, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bb54) {
            ctx->pc = 0x11BB70u;
            goto label_11bb70;
        }
    }
    ctx->pc = 0x11BB5Cu;
    // 0x11bb5c: 0x1a20fff7  blez        $s1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x11BB5Cu;
    {
        const bool branch_taken_0x11bb5c = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x11BB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB5Cu;
        // 0x11bb60: 0x3c0f0066  lui         $t7, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bb5c) {
            ctx->pc = 0x11BB3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11bb3c;
        }
    }
    ctx->pc = 0x11BB64u;
    // 0x11bb64: 0x1000ffa3  b           . + 4 + (-0x5D << 2)
    ctx->pc = 0x11BB64u;
    {
        const bool branch_taken_0x11bb64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB64u;
        // 0x11bb68: 0xc5e02eac  lwc1        $f0, 0x2EAC($t7) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 11948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bb64) {
            ctx->pc = 0x11B9F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b9f4;
        }
    }
    ctx->pc = 0x11BB6Cu;
    // 0x11bb6c: 0x0  nop
    ctx->pc = 0x11bb6cu;
    // NOP
label_11bb70:
    // 0x11bb70: 0x3c0e0066  lui         $t6, 0x66
    ctx->pc = 0x11bb70u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)102 << 16));
    // 0x11bb74: 0x25ad2eb0  addiu       $t5, $t5, 0x2EB0
    ctx->pc = 0x11bb74u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 11952));
    // 0x11bb78: 0x25ce2eb4  addiu       $t6, $t6, 0x2EB4
    ctx->pc = 0x11bb78u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 11956));
    // 0x11bb7c: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x11bb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11bb80: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11bb80u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11bb84: 0xc5c30000  lwc1        $f3, 0x0($t6)
    ctx->pc = 0x11bb84u;
    { uint32_t bits = FAST_READ32(0x662EB4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11bb88: 0x25ef2eb8  addiu       $t7, $t7, 0x2EB8
    ctx->pc = 0x11bb88u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11960));
    // 0x11bb8c: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x11bb8cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x11bb90: 0x3c0d0066  lui         $t5, 0x66
    ctx->pc = 0x11bb90u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)102 << 16));
    // 0x11bb94: 0x3c0e0066  lui         $t6, 0x66
    ctx->pc = 0x11bb94u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)102 << 16));
    // 0x11bb98: 0x25ad2ebc  addiu       $t5, $t5, 0x2EBC
    ctx->pc = 0x11bb98u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 11964));
    // 0x11bb9c: 0x25ce2ec0  addiu       $t6, $t6, 0x2EC0
    ctx->pc = 0x11bb9cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 11968));
    // 0x11bba0: 0xc5a20000  lwc1        $f2, 0x0($t5)
    ctx->pc = 0x11bba0u;
    { uint32_t bits = FAST_READ32(0x662EBCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11bba4: 0xc5c10000  lwc1        $f1, 0x0($t6)
    ctx->pc = 0x11bba4u;
    { uint32_t bits = FAST_READ32(0x662EC0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11bba8: 0x4603a0c2  mul.s       $f3, $f20, $f3
    ctx->pc = 0x11bba8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x11bbac: 0x3c0d0066  lui         $t5, 0x66
    ctx->pc = 0x11bbacu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)102 << 16));
    // 0x11bbb0: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11bbb0u;
    { uint32_t bits = FAST_READ32(0x662EB8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11bbb4: 0x25ad2ec8  addiu       $t5, $t5, 0x2EC8
    ctx->pc = 0x11bbb4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 11976));
    // 0x11bbb8: 0x4614a102  mul.s       $f4, $f20, $f20
    ctx->pc = 0x11bbb8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x11bbbc: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11bbbcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11bbc0: 0x4600a01a  mula.s      $f20, $f0
    ctx->pc = 0x11bbc0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[20], ctx->f[0]));
    // 0x11bbc4: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x11bbc4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x11bbc8: 0x25ef2ec4  addiu       $t7, $t7, 0x2EC4
    ctx->pc = 0x11bbc8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11972));
    // 0x11bbcc: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11bbccu;
    { uint32_t bits = FAST_READ32(0x662EC4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11bbd0: 0x4602a2c2  mul.s       $f11, $f20, $f2
    ctx->pc = 0x11bbd0u;
    ctx->f[11] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x11bbd4: 0x240ff000  addiu       $t7, $zero, -0x1000
    ctx->pc = 0x11bbd4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x11bbd8: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x11bbd8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x11bbdc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x11bbdcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x11bbe0: 0x460020c2  mul.s       $f3, $f4, $f0
    ctx->pc = 0x11bbe0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x11bbe4: 0xc5a10000  lwc1        $f1, 0x0($t5)
    ctx->pc = 0x11bbe4u;
    { uint32_t bits = FAST_READ32(0x662EC8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11bbe8: 0x46011a9d  msub.s      $f10, $f3, $f1
    ctx->pc = 0x11bbe8u;
    ctx->f[10] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x11bbec: 0x460a5800  add.s       $f0, $f11, $f10
    ctx->pc = 0x11bbecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[11], ctx->f[10]);
    // 0x11bbf0: 0x440e0000  mfc1        $t6, $f0
    ctx->pc = 0x11bbf0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
    // 0x11bbf4: 0x1cf5824  and         $t3, $t6, $t7
    ctx->pc = 0x11bbf4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 14) & GPR_U64(ctx, 15));
    // 0x11bbf8: 0x448b0800  mtc1        $t3, $f1
    ctx->pc = 0x11bbf8u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11bbfc: 0x460b0801  sub.s       $f0, $f1, $f11
    ctx->pc = 0x11bbfcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[11]);
    // 0x11bc00: 0x46005041  sub.s       $f1, $f10, $f0
    ctx->pc = 0x11bc00u;
    ctx->f[1] = FPU_SUB_S(ctx->f[10], ctx->f[0]);
label_11bc04:
    // 0x11bc04: 0x3c0d0066  lui         $t5, 0x66
    ctx->pc = 0x11bc04u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)102 << 16));
    // 0x11bc08: 0x250fffff  addiu       $t7, $t0, -0x1
    ctx->pc = 0x11bc08u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x11bc0c: 0x25ad2eb0  addiu       $t5, $t5, 0x2EB0
    ctx->pc = 0x11bc0cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 11952));
    // 0x11bc10: 0x268effff  addiu       $t6, $s4, -0x1
    ctx->pc = 0x11bc10u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x11bc14: 0x1ee7825  or          $t7, $t7, $t6
    ctx->pc = 0x11bc14u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x11bc18: 0x15e00004  bnez        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x11BC18u;
    {
        const bool branch_taken_0x11bc18 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BC18u;
        // 0x11bc1c: 0xc5b40000  lwc1        $f20, 0x0($t5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bc18) {
            ctx->pc = 0x11BC2Cu;
            goto label_11bc2c;
        }
    }
    ctx->pc = 0x11BC20u;
    // 0x11bc20: 0x3c0e0066  lui         $t6, 0x66
    ctx->pc = 0x11bc20u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)102 << 16));
    // 0x11bc24: 0x25ce2ef4  addiu       $t6, $t6, 0x2EF4
    ctx->pc = 0x11bc24u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 12020));
    // 0x11bc28: 0xc5d40000  lwc1        $f20, 0x0($t6)
    ctx->pc = 0x11bc28u;
    { uint32_t bits = FAST_READ32(0x662EF4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_11bc2c:
    // 0x11bc2c: 0x440ca800  mfc1        $t4, $f21
    ctx->pc = 0x11bc2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 12, bits); }
    // 0x11bc30: 0x240ff000  addiu       $t7, $zero, -0x1000
    ctx->pc = 0x11bc30u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x11bc34: 0x448b1800  mtc1        $t3, $f3
    ctx->pc = 0x11bc34u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x11bc38: 0x3c0d7fff  lui         $t5, 0x7FFF
    ctx->pc = 0x11bc38u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)32767 << 16));
    // 0x11bc3c: 0x18f7024  and         $t6, $t4, $t7
    ctx->pc = 0x11bc3cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 12) & GPR_U64(ctx, 15));
    // 0x11bc40: 0x35adffff  ori         $t5, $t5, 0xFFFF
    ctx->pc = 0x11bc40u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)65535);
    // 0x11bc44: 0x448e1000  mtc1        $t6, $f2
    ctx->pc = 0x11bc44u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11bc48: 0x4602a801  sub.s       $f0, $f21, $f2
    ctx->pc = 0x11bc48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[2]);
    // 0x11bc4c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x11bc4cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x11bc50: 0x4603001a  mula.s      $f0, $f3
    ctx->pc = 0x11bc50u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[3]));
    // 0x11bc54: 0x4601a8dc  madd.s      $f3, $f21, $f1
    ctx->pc = 0x11bc54u;
    ctx->f[3] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[21], ctx->f[1]));
    // 0x11bc58: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x11bc58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x11bc5c: 0x46021b00  add.s       $f12, $f3, $f2
    ctx->pc = 0x11bc5cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x11bc60: 0x440b6000  mfc1        $t3, $f12
    ctx->pc = 0x11bc60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
    // 0x11bc64: 0x440e6000  mfc1        $t6, $f12
    ctx->pc = 0x11bc64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
    // 0x11bc68: 0x19600083  blez        $t3, . + 4 + (0x83 << 2)
    ctx->pc = 0x11BC68u;
    {
        const bool branch_taken_0x11bc68 = (GPR_S64(ctx, 11) <= 0);
        ctx->pc = 0x11BC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BC68u;
        // 0x11bc6c: 0x16d6824  and         $t5, $t3, $t5 (Delay Slot)
        SET_GPR_U64(ctx, 13, GPR_U64(ctx, 11) & GPR_U64(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bc68) {
            ctx->pc = 0x11BE78u;
            goto label_11be78;
        }
    }
    ctx->pc = 0x11BC70u;
    // 0x11bc70: 0x3c0c4301  lui         $t4, 0x4301
    ctx->pc = 0x11bc70u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)17153 << 16));
    // 0x11bc74: 0x18d782a  slt         $t7, $t4, $t5
    ctx->pc = 0x11bc74u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x11bc78: 0x55e0000c  bnel        $t7, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x11BC78u;
    {
        const bool branch_taken_0x11bc78 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x11bc78) {
            ctx->pc = 0x11BC7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11BC78u;
            // 0x11bc7c: 0x3c0d0066  lui         $t5, 0x66 (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)102 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11BCACu;
            goto label_11bcac;
        }
    }
    ctx->pc = 0x11BC80u;
    // 0x11bc80: 0x15ac000f  bne         $t5, $t4, . + 4 + (0xF << 2)
    ctx->pc = 0x11BC80u;
    {
        const bool branch_taken_0x11bc80 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 12));
        ctx->pc = 0x11BC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BC80u;
        // 0x11bc84: 0x3c0f3f00  lui         $t7, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bc80) {
            ctx->pc = 0x11BCC0u;
            goto label_11bcc0;
        }
    }
    ctx->pc = 0x11BC88u;
    // 0x11bc88: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11bc88u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11bc8c: 0x46026041  sub.s       $f1, $f12, $f2
    ctx->pc = 0x11bc8cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x11bc90: 0x25ef2efc  addiu       $t7, $t7, 0x2EFC
    ctx->pc = 0x11bc90u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 12028));
    // 0x11bc94: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11bc94u;
    { uint32_t bits = FAST_READ32(0x662EFCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11bc98: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x11bc98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x11bc9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x11bc9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11bca0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x11BCA0u;
    {
        const bool branch_taken_0x11bca0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11BCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BCA0u;
        // 0x11bca4: 0x3c0f3f00  lui         $t7, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bca0) {
            ctx->pc = 0x11BCC0u;
            goto label_11bcc0;
        }
    }
    ctx->pc = 0x11BCA8u;
    // 0x11bca8: 0x3c0d0066  lui         $t5, 0x66
    ctx->pc = 0x11bca8u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)102 << 16));
label_11bcac:
    // 0x11bcac: 0x25ad2ef8  addiu       $t5, $t5, 0x2EF8
    ctx->pc = 0x11bcacu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 12024));
label_11bcb0:
    // 0x11bcb0: 0xc5a10000  lwc1        $f1, 0x0($t5)
    ctx->pc = 0x11bcb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11bcb4:
    // 0x11bcb4: 0x4601a002  mul.s       $f0, $f20, $f1
    ctx->pc = 0x11bcb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x11bcb8: 0x1000ff4e  b           . + 4 + (-0xB2 << 2)
    ctx->pc = 0x11BCB8u;
    {
        const bool branch_taken_0x11bcb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BCB8u;
        // 0x11bcbc: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bcb8) {
            ctx->pc = 0x11B9F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b9f4;
        }
    }
    ctx->pc = 0x11BCC0u;
label_11bcc0:
    // 0x11bcc0: 0xd65c3  sra         $t4, $t5, 23
    ctx->pc = 0x11bcc0u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 13), 23));
label_11bcc4:
    // 0x11bcc4: 0x1ed782a  slt         $t7, $t7, $t5
    ctx->pc = 0x11bcc4u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x11bcc8: 0x11e0001b  beqz        $t7, . + 4 + (0x1B << 2)
    ctx->pc = 0x11BCC8u;
    {
        const bool branch_taken_0x11bcc8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BCC8u;
        // 0x11bccc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bcc8) {
            ctx->pc = 0x11BD38u;
            goto label_11bd38;
        }
    }
    ctx->pc = 0x11BCD0u;
    // 0x11bcd0: 0x3c0d0080  lui         $t5, 0x80
    ctx->pc = 0x11bcd0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)128 << 16));
    // 0x11bcd4: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x11bcd4u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11bcd8: 0x258fff82  addiu       $t7, $t4, -0x7E
    ctx->pc = 0x11bcd8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967170));
    // 0x11bcdc: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x11bcdcu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
    // 0x11bce0: 0x1ed7807  srav        $t7, $t5, $t7
    ctx->pc = 0x11bce0u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 13), GPR_U32(ctx, 15) & 0x1F));
    // 0x11bce4: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x11bce4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x11bce8: 0x16f2021  addu        $a0, $t3, $t7
    ctx->pc = 0x11bce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 15)));
    // 0x11bcec: 0x47dc2  srl         $t7, $a0, 23
    ctx->pc = 0x11bcecu;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 4), 23));
    // 0x11bcf0: 0x8e6024  and         $t4, $a0, $t6
    ctx->pc = 0x11bcf0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 4) & GPR_U64(ctx, 14));
    // 0x11bcf4: 0x31ef00ff  andi        $t7, $t7, 0xFF
    ctx->pc = 0x11bcf4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)255);
    // 0x11bcf8: 0x18d6025  or          $t4, $t4, $t5
    ctx->pc = 0x11bcf8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 13));
    // 0x11bcfc: 0x25eaff81  addiu       $t2, $t7, -0x7F
    ctx->pc = 0x11bcfcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967169));
    // 0x11bd00: 0x240d0017  addiu       $t5, $zero, 0x17
    ctx->pc = 0x11bd00u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x11bd04: 0x14e7007  srav        $t6, $t6, $t2
    ctx->pc = 0x11bd04u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), GPR_U32(ctx, 10) & 0x1F));
    // 0x11bd08: 0x1aa6823  subu        $t5, $t5, $t2
    ctx->pc = 0x11bd08u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 10)));
    // 0x11bd0c: 0xe7027  nor         $t6, $zero, $t6
    ctx->pc = 0x11bd0cu;
    SET_GPR_U64(ctx, 14, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 14)));
    // 0x11bd10: 0x296b0000  slti        $t3, $t3, 0x0
    ctx->pc = 0x11bd10u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x11bd14: 0x8e5024  and         $t2, $a0, $t6
    ctx->pc = 0x11bd14u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) & GPR_U64(ctx, 14));
    // 0x11bd18: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x11bd18u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11bd1c: 0x1ac2007  srav        $a0, $t4, $t5
    ctx->pc = 0x11bd1cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    // 0x11bd20: 0x47823  negu        $t7, $a0
    ctx->pc = 0x11bd20u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x11bd24: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x11bd24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x11bd28: 0x1eb200b  movn        $a0, $t7, $t3
    ctx->pc = 0x11bd28u;
    if (GPR_U64(ctx, 11) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 15));
    // 0x11bd2c: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x11bd2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x11bd30: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x11bd30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x11bd34: 0x440e0000  mfc1        $t6, $f0
    ctx->pc = 0x11bd34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
label_11bd38:
    // 0x11bd38: 0x240ff000  addiu       $t7, $zero, -0x1000
    ctx->pc = 0x11bd38u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x11bd3c: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x11bd3cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11bd40: 0x1cf5024  and         $t2, $t6, $t7
    ctx->pc = 0x11bd40u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 14) & GPR_U64(ctx, 15));
    // 0x11bd44: 0x46dc0  sll         $t5, $a0, 23
    ctx->pc = 0x11bd44u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 4), 23));
    // 0x11bd48: 0x448a2000  mtc1        $t2, $f4
    ctx->pc = 0x11bd48u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x11bd4c: 0x3c0e0066  lui         $t6, 0x66
    ctx->pc = 0x11bd4cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)102 << 16));
    // 0x11bd50: 0x25ce2f04  addiu       $t6, $t6, 0x2F04
    ctx->pc = 0x11bd50u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 12036));
    // 0x11bd54: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11bd54u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11bd58: 0x46002081  sub.s       $f2, $f4, $f0
    ctx->pc = 0x11bd58u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x11bd5c: 0x25ef2f08  addiu       $t7, $t7, 0x2F08
    ctx->pc = 0x11bd5cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 12040));
    // 0x11bd60: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x11bd60u;
    { uint32_t bits = FAST_READ32(0x662F04u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11bd64: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x11bd64u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x11bd68: 0x460022c2  mul.s       $f11, $f4, $f0
    ctx->pc = 0x11bd68u;
    ctx->f[11] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x11bd6c: 0x3c0e0066  lui         $t6, 0x66
    ctx->pc = 0x11bd6cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)102 << 16));
    // 0x11bd70: 0x25ce2f0c  addiu       $t6, $t6, 0x2F0C
    ctx->pc = 0x11bd70u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 12044));
    // 0x11bd74: 0xc5c10000  lwc1        $f1, 0x0($t6)
    ctx->pc = 0x11bd74u;
    { uint32_t bits = FAST_READ32(0x662F0Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11bd78: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11bd78u;
    { uint32_t bits = FAST_READ32(0x662F08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11bd7c: 0x3c0e0066  lui         $t6, 0x66
    ctx->pc = 0x11bd7cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)102 << 16));
    // 0x11bd80: 0x25ce2f10  addiu       $t6, $t6, 0x2F10
    ctx->pc = 0x11bd80u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 12048));
    // 0x11bd84: 0x4600101a  mula.s      $f2, $f0
    ctx->pc = 0x11bd84u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[0]));
    // 0x11bd88: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11bd88u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11bd8c: 0x4601229c  madd.s      $f10, $f4, $f1
    ctx->pc = 0x11bd8cu;
    ctx->f[10] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[1]));
    // 0x11bd90: 0x25ef2eb0  addiu       $t7, $t7, 0x2EB0
    ctx->pc = 0x11bd90u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11952));
    // 0x11bd94: 0x460a5b00  add.s       $f12, $f11, $f10
    ctx->pc = 0x11bd94u;
    ctx->f[12] = FPU_ADD_S(ctx->f[11], ctx->f[10]);
    // 0x11bd98: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x11bd98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x11bd9c: 0x460b6081  sub.s       $f2, $f12, $f11
    ctx->pc = 0x11bd9cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[12], ctx->f[11]);
    // 0x11bda0: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x11bda0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x11bda4: 0x460250c1  sub.s       $f3, $f10, $f2
    ctx->pc = 0x11bda4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[10], ctx->f[2]);
    // 0x11bda8: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x11bda8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11bdac: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x11bdacu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11bdb0: 0x3c0e0066  lui         $t6, 0x66
    ctx->pc = 0x11bdb0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)102 << 16));
    // 0x11bdb4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x11bdb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x11bdb8: 0x25ce2f14  addiu       $t6, $t6, 0x2F14
    ctx->pc = 0x11bdb8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 12052));
    // 0x11bdbc: 0x46036082  mul.s       $f2, $f12, $f3
    ctx->pc = 0x11bdbcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
    // 0x11bdc0: 0xc5c10000  lwc1        $f1, 0x0($t6)
    ctx->pc = 0x11bdc0u;
    { uint32_t bits = FAST_READ32(0x662F14u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11bdc4: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x11bdc4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x11bdc8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11bdc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11bdcc: 0x3c0e0066  lui         $t6, 0x66
    ctx->pc = 0x11bdccu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)102 << 16));
    // 0x11bdd0: 0x25ce2f18  addiu       $t6, $t6, 0x2F18
    ctx->pc = 0x11bdd0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 12056));
    // 0x11bdd4: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x11bdd4u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11bdd8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x11bdd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x11bddc: 0xc5c10000  lwc1        $f1, 0x0($t6)
    ctx->pc = 0x11bddcu;
    { uint32_t bits = FAST_READ32(0x662F18u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11bde0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11bde0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11bde4: 0x3c0e0066  lui         $t6, 0x66
    ctx->pc = 0x11bde4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)102 << 16));
    // 0x11bde8: 0x25ce2f1c  addiu       $t6, $t6, 0x2F1C
    ctx->pc = 0x11bde8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 12060));
    // 0x11bdec: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x11bdecu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11bdf0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x11bdf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x11bdf4: 0xc5c10000  lwc1        $f1, 0x0($t6)
    ctx->pc = 0x11bdf4u;
    { uint32_t bits = FAST_READ32(0x662F1Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11bdf8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11bdf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11bdfc: 0x3c0e0066  lui         $t6, 0x66
    ctx->pc = 0x11bdfcu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)102 << 16));
    // 0x11be00: 0x25ce2f20  addiu       $t6, $t6, 0x2F20
    ctx->pc = 0x11be00u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 12064));
    // 0x11be04: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x11be04u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11be08: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x11be08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x11be0c: 0xc5c10000  lwc1        $f1, 0x0($t6)
    ctx->pc = 0x11be0cu;
    { uint32_t bits = FAST_READ32(0x662F20u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11be10: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11be10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11be14: 0x3c0e0066  lui         $t6, 0x66
    ctx->pc = 0x11be14u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)102 << 16));
    // 0x11be18: 0x25ce2f24  addiu       $t6, $t6, 0x2F24
    ctx->pc = 0x11be18u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 12068));
    // 0x11be1c: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x11be1cu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11be20: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x11be20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x11be24: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x11be24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x11be28: 0xc5c10000  lwc1        $f1, 0x0($t6)
    ctx->pc = 0x11be28u;
    { uint32_t bits = FAST_READ32(0x662F24u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11be2c: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x11be2cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x11be30: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x11be30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x11be34: 0x0  nop
    ctx->pc = 0x11be34u;
    // NOP
    // 0x11be38: 0x0  nop
    ctx->pc = 0x11be38u;
    // NOP
    // 0x11be3c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x11be3cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x11be40: 0x46020041  sub.s       $f1, $f0, $f2
    ctx->pc = 0x11be40u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x11be44: 0x460c0841  sub.s       $f1, $f1, $f12
    ctx->pc = 0x11be44u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
    // 0x11be48: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11be48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11be4c: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x11be4cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x11be50: 0x440f6000  mfc1        $t7, $f12
    ctx->pc = 0x11be50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x11be54: 0x1ed6021  addu        $t4, $t7, $t5
    ctx->pc = 0x11be54u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
    // 0x11be58: 0xc75c3  sra         $t6, $t4, 23
    ctx->pc = 0x11be58u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 12), 23));
    // 0x11be5c: 0x5dc00004  bgtzl       $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x11BE5Cu;
    {
        const bool branch_taken_0x11be5c = (GPR_S64(ctx, 14) > 0);
        if (branch_taken_0x11be5c) {
            ctx->pc = 0x11BE60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11BE5Cu;
            // 0x11be60: 0x448c6000  mtc1        $t4, $f12 (Delay Slot)
            { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x11BE70u;
            goto label_11be70;
        }
    }
    ctx->pc = 0x11BE64u;
    // 0x11be64: 0xc047b00  jal         func_11EC00
    ctx->pc = 0x11BE64u;
    SET_GPR_U32(ctx, 31, 0x11BE6Cu);
    ctx->pc = 0x11EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EC00u, 0x11BE64u, 0x11BE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BE6Cu;
label_11be6c:
    // 0x11be6c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x11be6cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_11be70:
    // 0x11be70: 0x1000fee0  b           . + 4 + (-0x120 << 2)
    ctx->pc = 0x11BE70u;
    {
        const bool branch_taken_0x11be70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BE70u;
        // 0x11be74: 0x460ca002  mul.s       $f0, $f20, $f12 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11be70) {
            ctx->pc = 0x11B9F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b9f4;
        }
    }
    ctx->pc = 0x11BE78u;
label_11be78:
    // 0x11be78: 0x3c0c42fc  lui         $t4, 0x42FC
    ctx->pc = 0x11be78u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)17148 << 16));
    // 0x11be7c: 0x18d782a  slt         $t7, $t4, $t5
    ctx->pc = 0x11be7cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x11be80: 0x11e00005  beqz        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x11BE80u;
    {
        const bool branch_taken_0x11be80 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x11be80) {
            ctx->pc = 0x11BE98u;
            goto label_11be98;
        }
    }
    ctx->pc = 0x11BE88u;
    // 0x11be88: 0x3c0e0066  lui         $t6, 0x66
    ctx->pc = 0x11be88u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)102 << 16));
    // 0x11be8c: 0x25ce2f00  addiu       $t6, $t6, 0x2F00
    ctx->pc = 0x11be8cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 12032));
    // 0x11be90: 0x1000ff88  b           . + 4 + (-0x78 << 2)
    ctx->pc = 0x11BE90u;
    {
        const bool branch_taken_0x11be90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BE90u;
        // 0x11be94: 0xc5c10000  lwc1        $f1, 0x0($t6) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11be90) {
            ctx->pc = 0x11BCB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11bcb4;
        }
    }
    ctx->pc = 0x11BE98u;
label_11be98:
    // 0x11be98: 0x15acff89  bne         $t5, $t4, . + 4 + (-0x77 << 2)
    ctx->pc = 0x11BE98u;
    {
        const bool branch_taken_0x11be98 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 12));
        ctx->pc = 0x11BE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BE98u;
        // 0x11be9c: 0x3c0f3f00  lui         $t7, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11be98) {
            ctx->pc = 0x11BCC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11bcc0;
        }
    }
    ctx->pc = 0x11BEA0u;
    // 0x11bea0: 0x46026001  sub.s       $f0, $f12, $f2
    ctx->pc = 0x11bea0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x11bea4: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x11bea4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11bea8: 0x4500ff86  bc1f        . + 4 + (-0x7A << 2)
    ctx->pc = 0x11BEA8u;
    {
        const bool branch_taken_0x11bea8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11BEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BEA8u;
        // 0x11beac: 0xd65c3  sra         $t4, $t5, 23 (Delay Slot)
        SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 13), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bea8) {
            ctx->pc = 0x11BCC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11bcc4;
        }
    }
    ctx->pc = 0x11BEB0u;
    // 0x11beb0: 0x3c0d0066  lui         $t5, 0x66
    ctx->pc = 0x11beb0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)102 << 16));
    // 0x11beb4: 0x1000ff7e  b           . + 4 + (-0x82 << 2)
    ctx->pc = 0x11BEB4u;
    {
        const bool branch_taken_0x11beb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BEB4u;
        // 0x11beb8: 0x25ad2f00  addiu       $t5, $t5, 0x2F00 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 12032));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11beb4) {
            ctx->pc = 0x11BCB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11bcb0;
        }
    }
    ctx->pc = 0x11BEBCu;
    // 0x11bebc: 0x0  nop
    ctx->pc = 0x11bebcu;
    // NOP
label_11bec0:
    // 0x11bec0: 0x26e6024  and         $t4, $s3, $t6
    ctx->pc = 0x11bec0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 19) & GPR_U64(ctx, 14));
    // 0x11bec4: 0x3c0f001c  lui         $t7, 0x1C
    ctx->pc = 0x11bec4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)28 << 16));
    // 0x11bec8: 0x1375c3  sra         $t6, $s3, 23
    ctx->pc = 0x11bec8u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 19), 23));
    // 0x11becc: 0x35efc471  ori         $t7, $t7, 0xC471
    ctx->pc = 0x11beccu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)50289);
    // 0x11bed0: 0x18d9825  or          $s3, $t4, $t5
    ctx->pc = 0x11bed0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 12) | GPR_U64(ctx, 13));
    // 0x11bed4: 0x1ec782a  slt         $t7, $t7, $t4
    ctx->pc = 0x11bed4u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x11bed8: 0x25c4ff81  addiu       $a0, $t6, -0x7F
    ctx->pc = 0x11bed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967169));
    // 0x11bedc: 0x11e0000a  beqz        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x11BEDCu;
    {
        const bool branch_taken_0x11bedc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BEDCu;
        // 0x11bee0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bedc) {
            ctx->pc = 0x11BF08u;
            goto label_11bf08;
        }
    }
    ctx->pc = 0x11BEE4u;
    // 0x11bee4: 0x3c0f005d  lui         $t7, 0x5D
    ctx->pc = 0x11bee4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)93 << 16));
    // 0x11bee8: 0x35efb3d6  ori         $t7, $t7, 0xB3D6
    ctx->pc = 0x11bee8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)46038);
    // 0x11beec: 0x1ec782a  slt         $t7, $t7, $t4
    ctx->pc = 0x11beecu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x11bef0: 0x11e00005  beqz        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x11BEF0u;
    {
        const bool branch_taken_0x11bef0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BEF0u;
        // 0x11bef4: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bef0) {
            ctx->pc = 0x11BF08u;
            goto label_11bf08;
        }
    }
    ctx->pc = 0x11BEF8u;
    // 0x11bef8: 0x3c0fff80  lui         $t7, 0xFF80
    ctx->pc = 0x11bef8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)65408 << 16));
    // 0x11befc: 0x25c4ff82  addiu       $a0, $t6, -0x7E
    ctx->pc = 0x11befcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967170));
    // 0x11bf00: 0x26f9821  addu        $s3, $s3, $t7
    ctx->pc = 0x11bf00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 15)));
    // 0x11bf04: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11bf04u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11bf08:
    // 0x11bf08: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11bf08u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11bf0c: 0x44936000  mtc1        $s3, $f12
    ctx->pc = 0x11bf0cu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11bf10: 0xa6080  sll         $t4, $t2, 2
    ctx->pc = 0x11bf10u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x11bf14: 0x25ef2e28  addiu       $t7, $t7, 0x2E28
    ctx->pc = 0x11bf14u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11816));
    // 0x11bf18: 0x18f7821  addu        $t7, $t4, $t7
    ctx->pc = 0x11bf18u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
    // 0x11bf1c: 0x137043  sra         $t6, $s3, 1
    ctx->pc = 0x11bf1cu;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 19), 1));
    // 0x11bf20: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11bf20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11bf24: 0xa6d40  sll         $t5, $t2, 21
    ctx->pc = 0x11bf24u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 10), 21));
    // 0x11bf28: 0x3c0f2000  lui         $t7, 0x2000
    ctx->pc = 0x11bf28u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)8192 << 16));
    // 0x11bf2c: 0x46016080  add.s       $f2, $f12, $f1
    ctx->pc = 0x11bf2cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x11bf30: 0x1cf7025  or          $t6, $t6, $t7
    ctx->pc = 0x11bf30u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
    // 0x11bf34: 0x460162c1  sub.s       $f11, $f12, $f1
    ctx->pc = 0x11bf34u;
    ctx->f[11] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x11bf38: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11bf38u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11bf3c: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x11bf3cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x11bf40: 0x25ef2eb0  addiu       $t7, $t7, 0x2EB0
    ctx->pc = 0x11bf40u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11952));
    // 0x11bf44: 0x240df000  addiu       $t5, $zero, -0x1000
    ctx->pc = 0x11bf44u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x11bf48: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11bf48u;
    { uint32_t bits = FAST_READ32(0x662EB0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11bf4c: 0x0  nop
    ctx->pc = 0x11bf4cu;
    // NOP
    // 0x11bf50: 0x0  nop
    ctx->pc = 0x11bf50u;
    // NOP
    // 0x11bf54: 0x46020283  div.s       $f10, $f0, $f2
    ctx->pc = 0x11bf54u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[10] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x11bf58: 0x3c0f0004  lui         $t7, 0x4
    ctx->pc = 0x11bf58u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)4 << 16));
    // 0x11bf5c: 0x1cf5821  addu        $t3, $t6, $t7
    ctx->pc = 0x11bf5cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x11bf60: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11bf60u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11bf64: 0x448b1800  mtc1        $t3, $f3
    ctx->pc = 0x11bf64u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x11bf68: 0x25ef2e38  addiu       $t7, $t7, 0x2E38
    ctx->pc = 0x11bf68u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11832));
    // 0x11bf6c: 0x3c0e0066  lui         $t6, 0x66
    ctx->pc = 0x11bf6cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)102 << 16));
    // 0x11bf70: 0x18f7821  addu        $t7, $t4, $t7
    ctx->pc = 0x11bf70u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
    // 0x11bf74: 0x25ce2ecc  addiu       $t6, $t6, 0x2ECC
    ctx->pc = 0x11bf74u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 11980));
    // 0x11bf78: 0xc5e80000  lwc1        $f8, 0x0($t7)
    ctx->pc = 0x11bf78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x11bf7c: 0xc5c40000  lwc1        $f4, 0x0($t6)
    ctx->pc = 0x11bf7cu;
    { uint32_t bits = FAST_READ32(0x662ECCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x11bf80: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11bf80u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11bf84: 0x448b0000  mtc1        $t3, $f0
    ctx->pc = 0x11bf84u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11bf88: 0x25ef2e30  addiu       $t7, $t7, 0x2E30
    ctx->pc = 0x11bf88u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11824));
    // 0x11bf8c: 0x460a5d02  mul.s       $f20, $f11, $f10
    ctx->pc = 0x11bf8cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[11], ctx->f[10]);
    // 0x11bf90: 0x3c0e0066  lui         $t6, 0x66
    ctx->pc = 0x11bf90u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)102 << 16));
    // 0x11bf94: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x11bf94u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x11bf98: 0x18f6021  addu        $t4, $t4, $t7
    ctx->pc = 0x11bf98u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
    // 0x11bf9c: 0x25ce2ed0  addiu       $t6, $t6, 0x2ED0
    ctx->pc = 0x11bf9cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 11984));
    // 0x11bfa0: 0xc5870000  lwc1        $f7, 0x0($t4)
    ctx->pc = 0x11bfa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x11bfa4: 0x440fa000  mfc1        $t7, $f20
    ctx->pc = 0x11bfa4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x11bfa8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x11bfa8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11bfac: 0x46016301  sub.s       $f12, $f12, $f1
    ctx->pc = 0x11bfacu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x11bfb0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11bfb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11bfb4: 0x4614a242  mul.s       $f9, $f20, $f20
    ctx->pc = 0x11bfb4u;
    ctx->f[9] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x11bfb8: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x11bfb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x11bfbc: 0x46094982  mul.s       $f6, $f9, $f9
    ctx->pc = 0x11bfbcu;
    ctx->f[6] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
    // 0x11bfc0: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x11bfc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11bfc4: 0x1ed7024  and         $t6, $t7, $t5
    ctx->pc = 0x11bfc4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 15) & GPR_U64(ctx, 13));
    // 0x11bfc8: 0x46004802  mul.s       $f0, $f9, $f0
    ctx->pc = 0x11bfc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x11bfcc: 0x448e0800  mtc1        $t6, $f1
    ctx->pc = 0x11bfccu;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11bfd0: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11bfd0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11bfd4: 0x25ef2ed4  addiu       $t7, $t7, 0x2ED4
    ctx->pc = 0x11bfd4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11988));
    // 0x11bfd8: 0x46030882  mul.s       $f2, $f1, $f3
    ctx->pc = 0x11bfd8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x11bfdc: 0x46140940  add.s       $f5, $f1, $f20
    ctx->pc = 0x11bfdcu;
    ctx->f[5] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x11bfe0: 0x46025819  suba.s      $f11, $f2
    ctx->pc = 0x11bfe0u;
    FPU_SET_ACC(ctx, FPU_SUB_S(ctx->f[11], ctx->f[2]));
    // 0x11bfe4: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11bfe4u;
    { uint32_t bits = FAST_READ32(0x662ED4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11bfe8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11bfe8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11bfec: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11bfecu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11bff0: 0x25ef2ed8  addiu       $t7, $t7, 0x2ED8
    ctx->pc = 0x11bff0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11992));
    // 0x11bff4: 0x448e0800  mtc1        $t6, $f1
    ctx->pc = 0x11bff4u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11bff8: 0x46004802  mul.s       $f0, $f9, $f0
    ctx->pc = 0x11bff8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x11bffc: 0x460c08dd  msub.s      $f3, $f1, $f12
    ctx->pc = 0x11bffcu;
    ctx->f[3] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[12]));
    // 0x11c000: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11c000u;
    { uint32_t bits = FAST_READ32(0x662ED8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11c004: 0x460350c2  mul.s       $f3, $f10, $f3
    ctx->pc = 0x11c004u;
    ctx->f[3] = FPU_MUL_S(ctx->f[10], ctx->f[3]);
    // 0x11c008: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11c008u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11c00c: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11c00cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11c010: 0x25ef2edc  addiu       $t7, $t7, 0x2EDC
    ctx->pc = 0x11c010u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11996));
    // 0x11c014: 0x46004802  mul.s       $f0, $f9, $f0
    ctx->pc = 0x11c014u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x11c018: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11c018u;
    { uint32_t bits = FAST_READ32(0x662EDCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11c01c: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11c01cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11c020: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11c020u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11c024: 0x25ef2ee0  addiu       $t7, $t7, 0x2EE0
    ctx->pc = 0x11c024u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 12000));
    // 0x11c028: 0x46004802  mul.s       $f0, $f9, $f0
    ctx->pc = 0x11c028u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x11c02c: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11c02cu;
    { uint32_t bits = FAST_READ32(0x662EE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11c030: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11c030u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11c034: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11c034u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11c038: 0x25ef2ee4  addiu       $t7, $t7, 0x2EE4
    ctx->pc = 0x11c038u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 12004));
    // 0x11c03c: 0x46004802  mul.s       $f0, $f9, $f0
    ctx->pc = 0x11c03cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x11c040: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11c040u;
    { uint32_t bits = FAST_READ32(0x662EE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11c044: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11c044u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11c048: 0x448e0800  mtc1        $t6, $f1
    ctx->pc = 0x11c048u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11c04c: 0x4600301a  mula.s      $f6, $f0
    ctx->pc = 0x11c04cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[6], ctx->f[0]));
    // 0x11c050: 0x46010a42  mul.s       $f9, $f1, $f1
    ctx->pc = 0x11c050u;
    ctx->f[9] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x11c054: 0x4605185c  madd.s      $f1, $f3, $f5
    ctx->pc = 0x11c054u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[5]));
    // 0x11c058: 0x46044800  add.s       $f0, $f9, $f4
    ctx->pc = 0x11c058u;
    ctx->f[0] = FPU_ADD_S(ctx->f[9], ctx->f[4]);
    // 0x11c05c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11c05cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11c060: 0x440f0000  mfc1        $t7, $f0
    ctx->pc = 0x11c060u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x11c064: 0x1ed5824  and         $t3, $t7, $t5
    ctx->pc = 0x11c064u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 15) & GPR_U64(ctx, 13));
    // 0x11c068: 0x448b1000  mtc1        $t3, $f2
    ctx->pc = 0x11c068u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11c06c: 0x46041101  sub.s       $f4, $f2, $f4
    ctx->pc = 0x11c06cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x11c070: 0x4602181a  mula.s      $f3, $f2
    ctx->pc = 0x11c070u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x11c074: 0x448e1800  mtc1        $t6, $f3
    ctx->pc = 0x11c074u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x11c078: 0x46092101  sub.s       $f4, $f4, $f9
    ctx->pc = 0x11c078u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[9]);
    // 0x11c07c: 0x3c0e0066  lui         $t6, 0x66
    ctx->pc = 0x11c07cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)102 << 16));
    // 0x11c080: 0x46021ac2  mul.s       $f11, $f3, $f2
    ctx->pc = 0x11c080u;
    ctx->f[11] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x11c084: 0x25ce2ee8  addiu       $t6, $t6, 0x2EE8
    ctx->pc = 0x11c084u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 12008));
    // 0x11c088: 0x46040b01  sub.s       $f12, $f1, $f4
    ctx->pc = 0x11c088u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x11c08c: 0x4614629c  madd.s      $f10, $f12, $f20
    ctx->pc = 0x11c08cu;
    ctx->f[10] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[12], ctx->f[20]));
    // 0x11c090: 0x460a5900  add.s       $f4, $f11, $f10
    ctx->pc = 0x11c090u;
    ctx->f[4] = FPU_ADD_S(ctx->f[11], ctx->f[10]);
    // 0x11c094: 0x440f2000  mfc1        $t7, $f4
    ctx->pc = 0x11c094u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x11c098: 0x1ed4824  and         $t1, $t7, $t5
    ctx->pc = 0x11c098u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 15) & GPR_U64(ctx, 13));
    // 0x11c09c: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x11c09cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11c0a0: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11c0a0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11c0a4: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x11c0a4u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11c0a8: 0x25ef2ef0  addiu       $t7, $t7, 0x2EF0
    ctx->pc = 0x11c0a8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 12016));
    // 0x11c0ac: 0x460b00c1  sub.s       $f3, $f0, $f11
    ctx->pc = 0x11c0acu;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[11]);
    // 0x11c0b0: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x11c0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11c0b4: 0x460350c1  sub.s       $f3, $f10, $f3
    ctx->pc = 0x11c0b4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[10], ctx->f[3]);
    // 0x11c0b8: 0x3c0e0066  lui         $t6, 0x66
    ctx->pc = 0x11c0b8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)102 << 16));
    // 0x11c0bc: 0x4600081a  mula.s      $f1, $f0
    ctx->pc = 0x11c0bcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x11c0c0: 0x25ce2eec  addiu       $t6, $t6, 0x2EEC
    ctx->pc = 0x11c0c0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 12012));
    // 0x11c0c4: 0xc5c20000  lwc1        $f2, 0x0($t6)
    ctx->pc = 0x11c0c4u;
    { uint32_t bits = FAST_READ32(0x662EECu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11c0c8: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x11c0c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x11c0cc: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11c0ccu;
    { uint32_t bits = FAST_READ32(0x662EF0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11c0d0: 0x4601185c  madd.s      $f1, $f3, $f1
    ctx->pc = 0x11c0d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x11c0d4: 0x46080840  add.s       $f1, $f1, $f8
    ctx->pc = 0x11c0d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[8]);
    // 0x11c0d8: 0x448a1800  mtc1        $t2, $f3
    ctx->pc = 0x11c0d8u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x11c0dc: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x11c0dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x11c0e0: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x11c0e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x11c0e4: 0x460300c0  add.s       $f3, $f0, $f3
    ctx->pc = 0x11c0e4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x11c0e8: 0x440f1800  mfc1        $t7, $f3
    ctx->pc = 0x11c0e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x11c0ec: 0x1ed5824  and         $t3, $t7, $t5
    ctx->pc = 0x11c0ecu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 15) & GPR_U64(ctx, 13));
    // 0x11c0f0: 0x448a1800  mtc1        $t2, $f3
    ctx->pc = 0x11c0f0u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x11c0f4: 0x448b2000  mtc1        $t3, $f4
    ctx->pc = 0x11c0f4u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x11c0f8: 0x46032001  sub.s       $f0, $f4, $f3
    ctx->pc = 0x11c0f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x11c0fc: 0x46070001  sub.s       $f0, $f0, $f7
    ctx->pc = 0x11c0fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
    // 0x11c100: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x11c100u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x11c104: 0x1000febf  b           . + 4 + (-0x141 << 2)
    ctx->pc = 0x11C104u;
    {
        const bool branch_taken_0x11c104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C104u;
        // 0x11c108: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c104) {
            ctx->pc = 0x11BC04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11bc04;
        }
    }
    ctx->pc = 0x11C10Cu;
label_11c10c:
    // 0x11c10c: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11c10cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11c110: 0x1f0782a  slt         $t7, $t7, $s0
    ctx->pc = 0x11c110u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11c114: 0x11e0fe2c  beqz        $t7, . + 4 + (-0x1D4 << 2)
    ctx->pc = 0x11C114u;
    {
        const bool branch_taken_0x11c114 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C114u;
        // 0x11c118: 0x240f0096  addiu       $t7, $zero, 0x96 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c114) {
            ctx->pc = 0x11B9C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b9c8;
        }
    }
    ctx->pc = 0x11C11Cu;
    // 0x11c11c: 0x1075c3  sra         $t6, $s0, 23
    ctx->pc = 0x11c11cu;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 16), 23));
    // 0x11c120: 0x1ee7823  subu        $t7, $t7, $t6
    ctx->pc = 0x11c120u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x11c124: 0x1f06007  srav        $t4, $s0, $t7
    ctx->pc = 0x11c124u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 16), GPR_U32(ctx, 15) & 0x1F));
    // 0x11c128: 0x1ec7804  sllv        $t7, $t4, $t7
    ctx->pc = 0x11c128u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 15) & 0x1F));
    // 0x11c12c: 0x15f0fe27  bne         $t7, $s0, . + 4 + (-0x1D9 << 2)
    ctx->pc = 0x11C12Cu;
    {
        const bool branch_taken_0x11c12c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 16));
        ctx->pc = 0x11C130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C12Cu;
        // 0x11c130: 0x3c0f3f80  lui         $t7, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c12c) {
            ctx->pc = 0x11B9CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b9cc;
        }
    }
    ctx->pc = 0x11C134u;
    // 0x11c134: 0x318e0001  andi        $t6, $t4, 0x1
    ctx->pc = 0x11c134u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)1);
    // 0x11c138: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x11c138u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11c13c: 0x1000fe22  b           . + 4 + (-0x1DE << 2)
    ctx->pc = 0x11C13Cu;
    {
        const bool branch_taken_0x11c13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C13Cu;
        // 0x11c140: 0x1eea023  subu        $s4, $t7, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c13c) {
            ctx->pc = 0x11B9C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b9c8;
        }
    }
    ctx->pc = 0x11C144u;
}
