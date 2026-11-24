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

// Function: sub_00221630
// Address: 0x221630 - 0x2216b4
void sub_00221630_0x221630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221630_0x221630");
#endif

    switch (ctx->pc) {
        case 0x221654u: goto label_221654;
        default: break;
    }

    ctx->pc = 0x221630u;

    // 0x221630: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x221630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x221634: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x221634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x221638: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x221638u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22163c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22163cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x221640: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x221640u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221644: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x221644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x221648: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x221648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x22164c: 0xc084968  jal         func_2125A0
    ctx->pc = 0x22164Cu;
    SET_GPR_U32(ctx, 31, 0x221654u);
    ctx->pc = 0x221650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22164Cu;
    // 0x221650: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x22164Cu, 0x221654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221654u;
label_221654:
    // 0x221654: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x221654u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x221658: 0x26060d30  addiu       $a2, $s0, 0xD30
    ctx->pc = 0x221658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 3376));
    // 0x22165c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22165cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221660: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x221660u;
    {
        const bool branch_taken_0x221660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221660u;
        // 0x221664: 0x34a50125  ori         $a1, $a1, 0x125 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)293);
        ctx->in_delay_slot = false;
        if (branch_taken_0x221660) {
            ctx->pc = 0x221680u;
            goto label_221680;
        }
    }
    ctx->pc = 0x221668u;
    // 0x221668: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x221668u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22166c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22166cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x221670: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x221670u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221674: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x221674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x221678: 0x80848e0  j           func_212380
    ctx->pc = 0x221678u;
    ctx->pc = 0x22167Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221678u;
    // 0x22167c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x221680u;
label_221680:
    // 0x221680: 0x8cc302b0  lw          $v1, 0x2B0($a2)
    ctx->pc = 0x221680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 688)));
    // 0x221684: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x221684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x221688: 0xacd102b8  sw          $s1, 0x2B8($a2)
    ctx->pc = 0x221688u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 696), GPR_U32(ctx, 17));
    // 0x22168c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x22168cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x221690: 0xacd202b4  sw          $s2, 0x2B4($a2)
    ctx->pc = 0x221690u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 692), GPR_U32(ctx, 18));
    // 0x221694: 0xacc302b0  sw          $v1, 0x2B0($a2)
    ctx->pc = 0x221694u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 688), GPR_U32(ctx, 3));
    // 0x221698: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x221698u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22169c: 0xae040044  sw          $a0, 0x44($s0)
    ctx->pc = 0x22169cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 4));
    // 0x2216a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2216a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2216a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2216a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2216a8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2216a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2216ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2216ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2216B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2216ACu;
        // 0x2216b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2216ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2216B4u;
}
