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

// Function: sub_0021F2C8
// Address: 0x21f2c8 - 0x21f360
void sub_0021F2C8_0x21f2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F2C8_0x21f2c8");
#endif

    switch (ctx->pc) {
        case 0x21f32cu: goto label_21f32c;
        default: break;
    }

    ctx->pc = 0x21f2c8u;

    // 0x21f2c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21f2c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21f2cc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x21f2ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f2d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21f2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21f2d4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x21f2d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f2d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21f2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21f2dc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x21f2dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f2e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21f2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21f2e4: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x21f2e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f2e8: 0x8c620dc0  lw          $v0, 0xDC0($v1)
    ctx->pc = 0x21f2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3520)));
    // 0x21f2ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21F2ECu;
    {
        const bool branch_taken_0x21f2ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F2ECu;
        // 0x21f2f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f2ec) {
            ctx->pc = 0x21F308u;
            goto label_21f308;
        }
    }
    ctx->pc = 0x21F2F4u;
    // 0x21f2f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21f2f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f2f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21f2f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21f2fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21f2fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21f300: 0x8087cd4  j           func_21F350
    ctx->pc = 0x21F300u;
    ctx->pc = 0x21F304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F300u;
    // 0x21f304: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F350u;
    goto label_21f350;
    ctx->pc = 0x21F308u;
label_21f308:
    // 0x21f308: 0x8c620da8  lw          $v0, 0xDA8($v1)
    ctx->pc = 0x21f308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3496)));
    // 0x21f30c: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21F30Cu;
    {
        const bool branch_taken_0x21f30c = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x21F310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F30Cu;
        // 0x21f310: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f30c) {
            ctx->pc = 0x21F320u;
            goto label_21f320;
        }
    }
    ctx->pc = 0x21F314u;
    // 0x21f314: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x21F314u;
    {
        const bool branch_taken_0x21f314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F314u;
        // 0x21f318: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f314) {
            ctx->pc = 0x21F330u;
            goto label_21f330;
        }
    }
    ctx->pc = 0x21F31Cu;
    // 0x21f31c: 0x0  nop
    ctx->pc = 0x21f31cu;
    // NOP
label_21f320:
    // 0x21f320: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x21f320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f324: 0xc080568  jal         func_2015A0
    ctx->pc = 0x21F324u;
    SET_GPR_U32(ctx, 31, 0x21F32Cu);
    ctx->pc = 0x21F328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F324u;
    // 0x21f328: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2015A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2015A0u, 0x21F324u, 0x21F32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F32Cu;
label_21f32c:
    // 0x21f32c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x21f32cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_21f330:
    // 0x21f330: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x21f330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x21f334: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21f334u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f338: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x21f338u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x21f33c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21f33cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21f340: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21f340u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21f344: 0x3e00008  jr          $ra
    ctx->pc = 0x21F344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F344u;
        // 0x21f348: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F34Cu;
    // 0x21f34c: 0x0  nop
    ctx->pc = 0x21f34cu;
    // NOP
label_21f350:
    // 0x21f350: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x21f350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x21f354: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x21f354u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x21f358: 0x3e00008  jr          $ra
    ctx->pc = 0x21F358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F358u;
        // 0x21f35c: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F360u;
}
