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

// Function: sub_001FB2E8
// Address: 0x1fb2e8 - 0x1fb340
void sub_001FB2E8_0x1fb2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB2E8_0x1fb2e8");
#endif

    switch (ctx->pc) {
        case 0x1fb304u: goto label_1fb304;
        default: break;
    }

    ctx->pc = 0x1fb2e8u;

    // 0x1fb2e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fb2e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fb2ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fb2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fb2f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fb2f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb2f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fb2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fb2f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fb2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1fb2fc: 0xc07f5d0  jal         func_1FD740
    ctx->pc = 0x1FB2FCu;
    SET_GPR_U32(ctx, 31, 0x1FB304u);
    ctx->pc = 0x1FB300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB2FCu;
    // 0x1fb300: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD740u, 0x1FB2FCu, 0x1FB304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB304u;
label_1fb304:
    // 0x1fb304: 0x3c05ff02  lui         $a1, 0xFF02
    ctx->pc = 0x1fb304u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65282 << 16));
    // 0x1fb308: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FB308u;
    {
        const bool branch_taken_0x1fb308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB308u;
        // 0x1fb30c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb308) {
            ctx->pc = 0x1FB328u;
            goto label_1fb328;
        }
    }
    ctx->pc = 0x1FB310u;
    // 0x1fb310: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fb310u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fb314: 0x34a50302  ori         $a1, $a1, 0x302
    ctx->pc = 0x1fb314u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)770);
    // 0x1fb318: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fb318u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fb31c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fb31cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fb320: 0x807f55c  j           func_1FD570
    ctx->pc = 0x1FB320u;
    ctx->pc = 0x1FB324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB320u;
    // 0x1fb324: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD570u;
    sub_001FD570_0x1fd570(rdram, ctx, runtime); return;
    ctx->pc = 0x1FB328u;
label_1fb328:
    // 0x1fb328: 0xae110010  sw          $s1, 0x10($s0)
    ctx->pc = 0x1fb328u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
    // 0x1fb32c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fb32cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fb330: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fb330u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fb334: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fb334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fb338: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB338u;
        // 0x1fb33c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB340u;
}
