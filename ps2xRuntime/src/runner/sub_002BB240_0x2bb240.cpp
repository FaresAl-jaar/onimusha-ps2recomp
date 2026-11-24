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

// Function: sub_002BB240
// Address: 0x2bb240 - 0x2bb2e8
void sub_002BB240_0x2bb240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BB240_0x2bb240");
#endif

    switch (ctx->pc) {
        case 0x2bb28cu: goto label_2bb28c;
        case 0x2bb2a0u: goto label_2bb2a0;
        case 0x2bb2b8u: goto label_2bb2b8;
        default: break;
    }

    ctx->pc = 0x2bb240u;

    // 0x2bb240: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bb240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2bb244: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bb244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2bb248: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bb248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bb24c: 0x94830022  lhu         $v1, 0x22($a0)
    ctx->pc = 0x2bb24cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 34)));
    // 0x2bb250: 0x9086005e  lbu         $a2, 0x5E($a0)
    ctx->pc = 0x2bb250u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 94)));
    // 0x2bb254: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2BB254u;
    {
        const bool branch_taken_0x2bb254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB254u;
        // 0x2bb258: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb254) {
            ctx->pc = 0x2BB280u;
            goto label_2bb280;
        }
    }
    ctx->pc = 0x2BB25Cu;
    // 0x2bb25c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2bb25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2bb260: 0xa4830022  sh          $v1, 0x22($a0)
    ctx->pc = 0x2bb260u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x2bb264: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2bb264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2bb268: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BB268u;
    {
        const bool branch_taken_0x2bb268 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bb268) {
            ctx->pc = 0x2BB280u;
            goto label_2bb280;
        }
    }
    ctx->pc = 0x2BB270u;
    // 0x2bb270: 0x6182b  sltu        $v1, $zero, $a2
    ctx->pc = 0x2bb270u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2bb274: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2bb274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2bb278: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2BB278u;
    {
        const bool branch_taken_0x2bb278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB278u;
        // 0x2bb27c: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb278) {
            ctx->pc = 0x2BB2A8u;
            goto label_2bb2a8;
        }
    }
    ctx->pc = 0x2BB280u;
label_2bb280:
    // 0x2bb280: 0x80860082  lb          $a2, 0x82($a0)
    ctx->pc = 0x2bb280u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 130)));
    // 0x2bb284: 0xc0b22ac  jal         func_2C8AB0
    ctx->pc = 0x2BB284u;
    SET_GPR_U32(ctx, 31, 0x2BB28Cu);
    ctx->pc = 0x2BB288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB284u;
    // 0x2bb288: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8AB0u, 0x2BB284u, 0x2BB28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB28Cu;
label_2bb28c:
    // 0x2bb28c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bb28cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb290: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BB290u;
    {
        const bool branch_taken_0x2bb290 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB290u;
        // 0x2bb294: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb290) {
            ctx->pc = 0x2BB2A0u;
            goto label_2bb2a0;
        }
    }
    ctx->pc = 0x2BB298u;
    // 0x2bb298: 0xc0aec0c  jal         func_2BB030
    ctx->pc = 0x2BB298u;
    SET_GPR_U32(ctx, 31, 0x2BB2A0u);
    ctx->pc = 0x2BB29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB298u;
    // 0x2bb29c: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB030u, 0x2BB298u, 0x2BB2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB2A0u;
label_2bb2a0:
    // 0x2bb2a0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2BB2A0u;
    {
        const bool branch_taken_0x2bb2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb2a0) {
            ctx->pc = 0x2BB2D8u;
            goto label_2bb2d8;
        }
    }
    ctx->pc = 0x2BB2A8u;
label_2bb2a8:
    // 0x2bb2a8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BB2A8u;
    {
        const bool branch_taken_0x2bb2a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb2a8) {
            ctx->pc = 0x2BB2C0u;
            goto label_2bb2c0;
        }
    }
    ctx->pc = 0x2BB2B0u;
    // 0x2bb2b0: 0xc0b21a8  jal         func_2C86A0
    ctx->pc = 0x2BB2B0u;
    SET_GPR_U32(ctx, 31, 0x2BB2B8u);
    ctx->pc = 0x2BB2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB2B0u;
    // 0x2bb2b4: 0x90860046  lbu         $a2, 0x46($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 70)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C86A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C86A0u, 0x2BB2B0u, 0x2BB2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB2B8u;
label_2bb2b8:
    // 0x2bb2b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BB2B8u;
    {
        const bool branch_taken_0x2bb2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb2b8) {
            ctx->pc = 0x2BB2D8u;
            goto label_2bb2d8;
        }
    }
    ctx->pc = 0x2BB2C0u;
label_2bb2c0:
    // 0x2bb2c0: 0xc4820014  lwc1        $f2, 0x14($a0)
    ctx->pc = 0x2bb2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bb2c4: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x2bb2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bb2c8: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x2bb2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb2cc: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x2bb2ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2bb2d0: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x2bb2d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2bb2d4: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x2bb2d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
label_2bb2d8:
    // 0x2bb2d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bb2d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bb2dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bb2dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bb2e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB2E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB2E0u;
        // 0x2bb2e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB2E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB2E8u;
}
