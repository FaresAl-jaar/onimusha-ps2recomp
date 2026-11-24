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

// Function: sub_00108640
// Address: 0x108640 - 0x1086d4
void sub_00108640_0x108640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108640_0x108640");
#endif

    switch (ctx->pc) {
        case 0x10865cu: goto label_10865c;
        case 0x1086acu: goto label_1086ac;
        default: break;
    }

    ctx->pc = 0x108640u;

    // 0x108640: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x108640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x108644: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x108644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x108648: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x108648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10864c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10864cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108650: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x108650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x108654: 0xc0421b6  jal         func_1086D8
    ctx->pc = 0x108654u;
    SET_GPR_U32(ctx, 31, 0x10865Cu);
    ctx->pc = 0x108658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108654u;
    // 0x108658: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1086D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1086D8u, 0x108654u, 0x10865Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10865Cu;
label_10865c:
    // 0x10865c: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x10865cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x108660: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x108660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x108664: 0x2048025  or          $s0, $s0, $a0
    ctx->pc = 0x108664u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x108668: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x108668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x10866c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x10866cu;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 16)); // MMIO: 0x10002000
    // 0x108670: 0x3c03f000  lui         $v1, 0xF000
    ctx->pc = 0x108670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61440 << 16));
    // 0x108674: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x108674u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x108678: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x108678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x10867c: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10867Cu;
    {
        const bool branch_taken_0x10867c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x108680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10867Cu;
        // 0x108680: 0xae30082c  sw          $s0, 0x82C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10867c) {
            ctx->pc = 0x108698u;
            goto label_108698;
        }
    }
    ctx->pc = 0x108684u;
    // 0x108684: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x108684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x108688: 0x52020006  beql        $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x108688u;
    {
        const bool branch_taken_0x108688 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x108688) {
            ctx->pc = 0x10868Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108688u;
            // 0x10868c: 0xae200828  sw          $zero, 0x828($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1086A4u;
            goto label_1086a4;
        }
    }
    ctx->pc = 0x108690u;
    // 0x108690: 0x16040003  bne         $s0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x108690u;
    {
        const bool branch_taken_0x108690 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        ctx->pc = 0x108694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108690u;
        // 0x108694: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108690) {
            ctx->pc = 0x1086A0u;
            goto label_1086a0;
        }
    }
    ctx->pc = 0x108698u;
label_108698:
    // 0x108698: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x108698u;
    {
        const bool branch_taken_0x108698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10869Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108698u;
        // 0x10869c: 0xae200828  sw          $zero, 0x828($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108698) {
            ctx->pc = 0x1086A4u;
            goto label_1086a4;
        }
    }
    ctx->pc = 0x1086A0u;
label_1086a0:
    // 0x1086a0: 0xae220828  sw          $v0, 0x828($s1)
    ctx->pc = 0x1086a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 2));
label_1086a4:
    // 0x1086a4: 0xc0420d2  jal         func_108348
    ctx->pc = 0x1086A4u;
    SET_GPR_U32(ctx, 31, 0x1086ACu);
    ctx->pc = 0x1086A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1086A4u;
    // 0x1086a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108348u, 0x1086A4u, 0x1086ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1086ACu;
label_1086ac:
    // 0x1086ac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1086acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1086b0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1086b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1086b4: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1086b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1086b8: 0xae23084c  sw          $v1, 0x84C($s1)
    ctx->pc = 0x1086b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 3));
    // 0x1086bc: 0xae220848  sw          $v0, 0x848($s1)
    ctx->pc = 0x1086bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 2));
    // 0x1086c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1086c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1086c4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1086c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1086c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1086c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1086cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1086CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1086D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1086CCu;
        // 0x1086d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1086CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1086D4u;
}
