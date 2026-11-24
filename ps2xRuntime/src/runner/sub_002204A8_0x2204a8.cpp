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

// Function: sub_002204A8
// Address: 0x2204a8 - 0x22053c
void sub_002204A8_0x2204a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002204A8_0x2204a8");
#endif

    switch (ctx->pc) {
        case 0x2204dcu: goto label_2204dc;
        case 0x220500u: goto label_220500;
        default: break;
    }

    ctx->pc = 0x2204a8u;

    // 0x2204a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2204a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2204ac: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2204acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x2204b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2204b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2204b4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2204b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2204b8: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x2204b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x2204bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2204bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2204c0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2204c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2204c4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2204c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2204c8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2204c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2204cc: 0x2453a178  addiu       $s3, $v0, -0x5E88
    ctx->pc = 0x2204ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943096));
    // 0x2204d0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2204d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2204d4: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x2204D4u;
    SET_GPR_U32(ctx, 31, 0x2204DCu);
    ctx->pc = 0x2204D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2204D4u;
    // 0x2204d8: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x2204D4u, 0x2204DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2204DCu;
label_2204dc:
    // 0x2204dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2204dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2204e0: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2204E0u;
    {
        const bool branch_taken_0x2204e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2204e0) {
            ctx->pc = 0x220508u;
            goto label_220508;
        }
    }
    ctx->pc = 0x2204E8u;
    // 0x2204e8: 0x8e0202d0  lw          $v0, 0x2D0($s0)
    ctx->pc = 0x2204e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x2204ec: 0x8e0302a8  lw          $v1, 0x2A8($s0)
    ctx->pc = 0x2204ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 680)));
    // 0x2204f0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2204f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2204f4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2204f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2204f8: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2204f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2204fc: 0x10000008  b           . + 4 + (0x8 << 2)
label_220500:
    if (ctx->pc == 0x220500u) {
        ctx->pc = 0x220500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2204FCu;
        // 0x220500: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220504u;
        goto label_fallthrough_0x2204fc;
    }
    ctx->pc = 0x2204FCu;
    {
        const bool branch_taken_0x2204fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2204FCu;
        // 0x220500: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2204fc) {
            ctx->pc = 0x220520u;
            goto label_220520;
        }
    }
label_fallthrough_0x2204fc:
    ctx->pc = 0x220504u;
    // 0x220504: 0x0  nop
    ctx->pc = 0x220504u;
    // NOP
label_220508:
    // 0x220508: 0x8e0202dc  lw          $v0, 0x2DC($s0)
    ctx->pc = 0x220508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
    // 0x22050c: 0x8e0302d0  lw          $v1, 0x2D0($s0)
    ctx->pc = 0x22050cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x220510: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x220510u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x220514: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x220514u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x220518: 0x8e0302e0  lw          $v1, 0x2E0($s0)
    ctx->pc = 0x220518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 736)));
    // 0x22051c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x22051cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_220520:
    // 0x220520: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x220520u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220524: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x220524u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x220528: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x220528u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22052c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x22052cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x220530: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x220530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x220534: 0x3e00008  jr          $ra
    ctx->pc = 0x220534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220534u;
        // 0x220538: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22053Cu;
}
