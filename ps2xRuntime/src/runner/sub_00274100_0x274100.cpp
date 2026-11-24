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

// Function: sub_00274100
// Address: 0x274100 - 0x274194
void sub_00274100_0x274100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274100_0x274100");
#endif

    switch (ctx->pc) {
        case 0x274128u: goto label_274128;
        case 0x27413cu: goto label_27413c;
        case 0x274170u: goto label_274170;
        default: break;
    }

    ctx->pc = 0x274100u;

    // 0x274100: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x274100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x274104: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x274104u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274108: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x274108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27410c: 0x3c04008c  lui         $a0, 0x8C
    ctx->pc = 0x27410cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
    // 0x274110: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x274110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x274114: 0x248408d0  addiu       $a0, $a0, 0x8D0
    ctx->pc = 0x274114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2256));
    // 0x274118: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x274118u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27411c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x27411cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x274120: 0xc049522  jal         func_125488
    ctx->pc = 0x274120u;
    SET_GPR_U32(ctx, 31, 0x274128u);
    ctx->pc = 0x274124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274120u;
    // 0x274124: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x274120u, 0x274128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274128u;
label_274128:
    // 0x274128: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x274128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x27412c: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x27412cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x274130: 0xa43008e0  sh          $s0, 0x8E0($at)
    ctx->pc = 0x274130u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x8C08E0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8C08E0u, _value); } while (0);
    // 0x274134: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x274134u;
    {
        const bool branch_taken_0x274134 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x274138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274134u;
        // 0x274138: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274134) {
            ctx->pc = 0x274158u;
            goto label_274158;
        }
    }
    ctx->pc = 0x27413Cu;
label_27413c:
    // 0x27413c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x27413cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x274140: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x274140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x274144: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x274144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x274148: 0x0  nop
    ctx->pc = 0x274148u;
    // NOP
    // 0x27414c: 0x0  nop
    ctx->pc = 0x27414cu;
    // NOP
    // 0x274150: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x274150u;
    {
        const bool branch_taken_0x274150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x274150) {
            ctx->pc = 0x27413Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27413c;
        }
    }
    ctx->pc = 0x274158u;
label_274158:
    // 0x274158: 0x3c06008c  lui         $a2, 0x8C
    ctx->pc = 0x274158u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)140 << 16));
    // 0x27415c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x27415cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x274160: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x274160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x274164: 0x24c608d0  addiu       $a2, $a2, 0x8D0
    ctx->pc = 0x274164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2256));
    // 0x274168: 0xc0a9470  jal         func_2A51C0
    ctx->pc = 0x274168u;
    SET_GPR_U32(ctx, 31, 0x274170u);
    ctx->pc = 0x27416Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274168u;
    // 0x27416c: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A51C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A51C0u, 0x274168u, 0x274170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274170u;
label_274170:
    // 0x274170: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x274170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274174: 0xaf8288f8  sw          $v0, -0x7708($gp)
    ctx->pc = 0x274174u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936824), GPR_U32(ctx, 2));
    // 0x274178: 0xa38388a4  sb          $v1, -0x775C($gp)
    ctx->pc = 0x274178u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936740), (uint8_t)GPR_U32(ctx, 3));
    // 0x27417c: 0xa38088fc  sb          $zero, -0x7704($gp)
    ctx->pc = 0x27417cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936828), (uint8_t)GPR_U32(ctx, 0));
    // 0x274180: 0xa38088fd  sb          $zero, -0x7703($gp)
    ctx->pc = 0x274180u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936829), (uint8_t)GPR_U32(ctx, 0));
    // 0x274184: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x274184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274188: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x274188u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27418c: 0x3e00008  jr          $ra
    ctx->pc = 0x27418Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27418Cu;
        // 0x274190: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27418Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274194u;
}
