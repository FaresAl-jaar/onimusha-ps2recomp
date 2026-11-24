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

// Function: sub_0014E310
// Address: 0x14e310 - 0x14e37c
void sub_0014E310_0x14e310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014E310_0x14e310");
#endif

    switch (ctx->pc) {
        case 0x14e36cu: goto label_14e36c;
        default: break;
    }

    ctx->pc = 0x14e310u;

    // 0x14e310: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14e310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14e314: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14e314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14e318: 0x90a300e4  lbu         $v1, 0xE4($a1)
    ctx->pc = 0x14e318u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 228)));
    // 0x14e31c: 0xc3082b  sltu        $at, $a2, $v1
    ctx->pc = 0x14e31cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x14e320: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x14E320u;
    {
        const bool branch_taken_0x14e320 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e320) {
            ctx->pc = 0x14E370u;
            goto label_14e370;
        }
    }
    ctx->pc = 0x14E328u;
    // 0x14e328: 0x8ca200ec  lw          $v0, 0xEC($a1)
    ctx->pc = 0x14e328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 236)));
    // 0x14e32c: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x14e32cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x14e330: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x14e330u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x14e334: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x14e334u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x14e338: 0x434821  addu        $t1, $v0, $v1
    ctx->pc = 0x14e338u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14e33c: 0x9122001c  lbu         $v0, 0x1C($t1)
    ctx->pc = 0x14e33cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 28)));
    // 0x14e340: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14E340u;
    {
        const bool branch_taken_0x14e340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E340u;
        // 0x14e344: 0x25230020  addiu       $v1, $t1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e340) {
            ctx->pc = 0x14E358u;
            goto label_14e358;
        }
    }
    ctx->pc = 0x14E348u;
    // 0x14e348: 0x25220060  addiu       $v0, $t1, 0x60
    ctx->pc = 0x14e348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 96));
    // 0x14e34c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x14e34cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e350: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x14e350u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x14e354: 0x0  nop
    ctx->pc = 0x14e354u;
    // NOP
label_14e358:
    // 0x14e358: 0xa5200018  sh          $zero, 0x18($t1)
    ctx->pc = 0x14e358u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 24), (uint16_t)GPR_U32(ctx, 0));
    // 0x14e35c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14e35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14e360: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x14e360u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e364: 0xc0538a4  jal         func_14E290
    ctx->pc = 0x14E364u;
    SET_GPR_U32(ctx, 31, 0x14E36Cu);
    ctx->pc = 0x14E368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E364u;
    // 0x14e368: 0xa122001c  sb          $v0, 0x1C($t1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 9), 28), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E290u, 0x14E364u, 0x14E36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E36Cu;
label_14e36c:
    // 0x14e36c: 0x0  nop
    ctx->pc = 0x14e36cu;
    // NOP
label_14e370:
    // 0x14e370: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14e370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14e374: 0x3e00008  jr          $ra
    ctx->pc = 0x14E374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E374u;
        // 0x14e378: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14E37Cu;
}
