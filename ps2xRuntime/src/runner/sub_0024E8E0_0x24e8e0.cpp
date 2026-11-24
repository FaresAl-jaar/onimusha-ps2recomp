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

// Function: sub_0024E8E0
// Address: 0x24e8e0 - 0x24e968
void sub_0024E8E0_0x24e8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024E8E0_0x24e8e0");
#endif

    switch (ctx->pc) {
        case 0x24e938u: goto label_24e938;
        default: break;
    }

    ctx->pc = 0x24e8e0u;

    // 0x24e8e0: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x24e8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x24e8e4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24e8e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24e8e8: 0x8c6274d8  lw          $v0, 0x74D8($v1)
    ctx->pc = 0x24e8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4D74D8u));
    // 0x24e8ec: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x24e8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x24e8f0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x24e8f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24e8f4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x24e8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x24e8f8: 0x14500005  bne         $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24E8F8u;
    {
        const bool branch_taken_0x24e8f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x24E8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E8F8u;
        // 0x24e8fc: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e8f8) {
            ctx->pc = 0x24E910u;
            goto label_24e910;
        }
    }
    ctx->pc = 0x24E900u;
    // 0x24e900: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24e900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24e904: 0x8c4374d0  lw          $v1, 0x74D0($v0)
    ctx->pc = 0x24e904u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D0u));
    // 0x24e908: 0x58600013  blezl       $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x24E908u;
    {
        const bool branch_taken_0x24e908 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x24e908) {
            ctx->pc = 0x24E90Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E908u;
            // 0x24e90c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E958u;
            goto label_24e958;
        }
    }
    ctx->pc = 0x24E910u;
label_24e910:
    // 0x24e910: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24e910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24e914: 0x24517500  addiu       $s1, $v0, 0x7500
    ctx->pc = 0x24e914u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 29952));
    // 0x24e918: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x24e918u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D7500u));
    // 0x24e91c: 0x1070000d  beq         $v1, $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x24E91Cu;
    {
        const bool branch_taken_0x24e91c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x24E920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E91Cu;
        // 0x24e920: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e91c) {
            ctx->pc = 0x24E954u;
            goto label_24e954;
        }
    }
    ctx->pc = 0x24E924u;
    // 0x24e924: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24e924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e928: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24e928u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e92c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x24e92cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e930: 0xc091ee6  jal         func_247B98
    ctx->pc = 0x24E930u;
    SET_GPR_U32(ctx, 31, 0x24E938u);
    ctx->pc = 0x24E934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E930u;
    // 0x24e934: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247B98u, 0x24E930u, 0x24E938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E938u;
label_24e938:
    // 0x24e938: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x24e938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x24e93c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x24e93cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24e940: 0x24637510  addiu       $v1, $v1, 0x7510
    ctx->pc = 0x24e940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29968));
    // 0x24e944: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x24e944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x24e948: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x24e948u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x24e94c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x24e94cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4D7514u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4D7514u, _value); } while (0);
    // 0x24e950: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x24e950u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x4D7510u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4D7510u, _value); } while (0);
label_24e954:
    // 0x24e954: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x24e954u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_24e958:
    // 0x24e958: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x24e958u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24e95c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x24e95cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24e960: 0x3e00008  jr          $ra
    ctx->pc = 0x24E960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24E964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E960u;
        // 0x24e964: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24E968u;
}
