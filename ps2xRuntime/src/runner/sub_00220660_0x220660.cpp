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

// Function: sub_00220660
// Address: 0x220660 - 0x2206d8
void sub_00220660_0x220660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220660_0x220660");
#endif

    switch (ctx->pc) {
        case 0x2206b8u: goto label_2206b8;
        default: break;
    }

    ctx->pc = 0x220660u;

    // 0x220660: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x220660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x220664: 0x24830118  addiu       $v1, $a0, 0x118
    ctx->pc = 0x220664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 280));
    // 0x220668: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x220668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22066c: 0x248400ec  addiu       $a0, $a0, 0xEC
    ctx->pc = 0x22066cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 236));
    // 0x220670: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x220670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x220674: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x220674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x220678: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x220678u;
    {
        const bool branch_taken_0x220678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22067Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220678u;
        // 0x22067c: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220678) {
            ctx->pc = 0x220690u;
            goto label_220690;
        }
    }
    ctx->pc = 0x220680u;
    // 0x220680: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x220680u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x220684: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x220684u;
    {
        const bool branch_taken_0x220684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220684u;
        // 0x220688: 0x8c700024  lw          $s0, 0x24($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220684) {
            ctx->pc = 0x2206B0u;
            goto label_2206b0;
        }
    }
    ctx->pc = 0x22068Cu;
    // 0x22068c: 0x0  nop
    ctx->pc = 0x22068cu;
    // NOP
label_220690:
    // 0x220690: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x220690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x220694: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x220694u;
    {
        const bool branch_taken_0x220694 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x220698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220694u;
        // 0x220698: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220694) {
            ctx->pc = 0x2206A8u;
            goto label_2206a8;
        }
    }
    ctx->pc = 0x22069Cu;
    // 0x22069c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22069Cu;
    {
        const bool branch_taken_0x22069c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2206A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22069Cu;
        // 0x2206a0: 0x8c860028  lw          $a2, 0x28($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22069c) {
            ctx->pc = 0x2206B0u;
            goto label_2206b0;
        }
    }
    ctx->pc = 0x2206A4u;
    // 0x2206a4: 0x0  nop
    ctx->pc = 0x2206a4u;
    // NOP
label_2206a8:
    // 0x2206a8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2206A8u;
    {
        const bool branch_taken_0x2206a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2206ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2206A8u;
        // 0x2206ac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2206a8) {
            ctx->pc = 0x2206C8u;
            goto label_2206c8;
        }
    }
    ctx->pc = 0x2206B0u;
label_2206b0:
    // 0x2206b0: 0xc080568  jal         func_2015A0
    ctx->pc = 0x2206B0u;
    SET_GPR_U32(ctx, 31, 0x2206B8u);
    ctx->pc = 0x2206B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2206B0u;
    // 0x2206b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2015A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2015A0u, 0x2206B0u, 0x2206B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2206B8u;
label_2206b8:
    // 0x2206b8: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x2206b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x2206bc: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x2206bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x2206c0: 0xac70a224  sw          $s0, -0x5DDC($v1)
    ctx->pc = 0x2206c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x4BA224u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BA224u, _value); } while (0);
    // 0x2206c4: 0xac82a228  sw          $v0, -0x5DD8($a0)
    ctx->pc = 0x2206c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4BA228u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BA228u, _value); } while (0);
label_2206c8:
    // 0x2206c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2206c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2206cc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2206ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2206d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2206D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2206D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2206D0u;
        // 0x2206d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2206D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2206D8u;
}
