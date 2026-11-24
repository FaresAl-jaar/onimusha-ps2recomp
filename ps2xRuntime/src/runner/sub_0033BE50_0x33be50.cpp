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

// Function: sub_0033BE50
// Address: 0x33be50 - 0x33bf98
void sub_0033BE50_0x33be50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033BE50_0x33be50");
#endif

    switch (ctx->pc) {
        case 0x33beb8u: goto label_33beb8;
        case 0x33bee0u: goto label_33bee0;
        case 0x33bf04u: goto label_33bf04;
        case 0x33bf28u: goto label_33bf28;
        case 0x33bf58u: goto label_33bf58;
        default: break;
    }

    ctx->pc = 0x33be50u;

    // 0x33be50: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x33be50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x33be54: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x33be54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x33be58: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x33be58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x33be5c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x33be5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x33be60: 0x160f02d  daddu       $fp, $t3, $zero
    ctx->pc = 0x33be60u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33be64: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x33be64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x33be68: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x33be68u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33be6c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x33be6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x33be70: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x33be70u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33be74: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x33be74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x33be78: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x33be78u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33be7c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x33be7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x33be80: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x33be80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33be84: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33be84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x33be88: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x33be88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33be8c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x33be8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33be90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33be90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33be94: 0x3c080034  lui         $t0, 0x34
    ctx->pc = 0x33be94u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)52 << 16));
    // 0x33be98: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x33be98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33be9c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x33be9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bea0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33bea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bea4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x33bea4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bea8: 0x24070560  addiu       $a3, $zero, 0x560
    ctx->pc = 0x33bea8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1376));
    // 0x33beac: 0x2508bde0  addiu       $t0, $t0, -0x4220
    ctx->pc = 0x33beacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294950368));
    // 0x33beb0: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x33BEB0u;
    SET_GPR_U32(ctx, 31, 0x33BEB8u);
    ctx->pc = 0x33BEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BEB0u;
    // 0x33beb4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x33BEB0u, 0x33BEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BEB8u;
label_33beb8:
    // 0x33beb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x33beb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bebc: 0x12000028  beqz        $s0, . + 4 + (0x28 << 2)
    ctx->pc = 0x33BEBCu;
    {
        const bool branch_taken_0x33bebc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BEBCu;
        // 0x33bec0: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bebc) {
            ctx->pc = 0x33BF60u;
            goto label_33bf60;
        }
    }
    ctx->pc = 0x33BEC4u;
    // 0x33bec4: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x33bec4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bec8: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x33bec8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33becc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33beccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bed0: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x33bed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x33bed4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x33bed4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33bed8: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x33BED8u;
    SET_GPR_U32(ctx, 31, 0x33BEE0u);
    ctx->pc = 0x33BEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BED8u;
    // 0x33bedc: 0x260502d  daddu       $t2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x33BED8u, 0x33BEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BEE0u;
label_33bee0:
    // 0x33bee0: 0xa6110526  sh          $s1, 0x526($s0)
    ctx->pc = 0x33bee0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 17));
    // 0x33bee4: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x33bee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x33bee8: 0xa6030528  sh          $v1, 0x528($s0)
    ctx->pc = 0x33bee8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 3));
    // 0x33beec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33beecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33bef0: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x33bef0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x33bef4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33bef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bef8: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x33bef8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x33befc: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x33BEFCu;
    SET_GPR_U32(ctx, 31, 0x33BF04u);
    ctx->pc = 0x33BF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BEFCu;
    // 0x33bf00: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x33BEFCu, 0x33BF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BF04u;
label_33bf04:
    // 0x33bf04: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x33bf04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x33bf08: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x33bf08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bf0c: 0xae020550  sw          $v0, 0x550($s0)
    ctx->pc = 0x33bf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 2));
    // 0x33bf10: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x33bf10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bf14: 0xa21e0556  sb          $fp, 0x556($s0)
    ctx->pc = 0x33bf14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1366), (uint8_t)GPR_U32(ctx, 30));
    // 0x33bf18: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x33bf18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x33bf1c: 0xa2000557  sb          $zero, 0x557($s0)
    ctx->pc = 0x33bf1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1367), (uint8_t)GPR_U32(ctx, 0));
    // 0x33bf20: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x33BF20u;
    SET_GPR_U32(ctx, 31, 0x33BF28u);
    ctx->pc = 0x33BF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BF20u;
    // 0x33bf24: 0xa6170554  sh          $s7, 0x554($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1364), (uint16_t)GPR_U32(ctx, 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x33BF20u, 0x33BF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BF28u;
label_33bf28:
    // 0x33bf28: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x33bf28u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33bf2c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x33bf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x33bf30: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x33bf30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x33bf34: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33bf34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x33bf38: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x33bf38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bf3c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x33bf3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33bf40: 0x0  nop
    ctx->pc = 0x33bf40u;
    // NOP
    // 0x33bf44: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x33bf44u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x33bf48: 0x0  nop
    ctx->pc = 0x33bf48u;
    // NOP
    // 0x33bf4c: 0x0  nop
    ctx->pc = 0x33bf4cu;
    // NOP
    // 0x33bf50: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x33BF50u;
    SET_GPR_U32(ctx, 31, 0x33BF58u);
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x33BF50u, 0x33BF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BF58u;
label_33bf58:
    // 0x33bf58: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x33BF58u;
    {
        const bool branch_taken_0x33bf58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BF58u;
        // 0x33bf5c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bf58) {
            ctx->pc = 0x33BF68u;
            goto label_33bf68;
        }
    }
    ctx->pc = 0x33BF60u;
label_33bf60:
    // 0x33bf60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33bf60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bf64: 0x0  nop
    ctx->pc = 0x33bf64u;
    // NOP
label_33bf68:
    // 0x33bf68: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x33bf68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x33bf6c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x33bf6cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x33bf70: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x33bf70u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x33bf74: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x33bf74u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x33bf78: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x33bf78u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x33bf7c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x33bf7cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33bf80: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x33bf80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33bf84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33bf84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33bf88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33bf88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33bf8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33bf8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33bf90: 0x3e00008  jr          $ra
    ctx->pc = 0x33BF90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33BF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BF90u;
        // 0x33bf94: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33BF90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33BF98u;
}
