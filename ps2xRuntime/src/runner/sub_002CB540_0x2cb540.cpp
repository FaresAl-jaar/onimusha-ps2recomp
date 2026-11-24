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

// Function: sub_002CB540
// Address: 0x2cb540 - 0x2cb5b4
void sub_002CB540_0x2cb540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB540_0x2cb540");
#endif

    switch (ctx->pc) {
        case 0x2cb5a8u: goto label_2cb5a8;
        default: break;
    }

    ctx->pc = 0x2cb540u;

    // 0x2cb540: 0x2486ffff  addiu       $a2, $a0, -0x1
    ctx->pc = 0x2cb540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2cb544: 0x3c03008d  lui         $v1, 0x8D
    ctx->pc = 0x2cb544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)141 << 16));
    // 0x2cb548: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x2cb548u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2cb54c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cb54cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cb550: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2cb550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2cb554: 0x24636590  addiu       $v1, $v1, 0x6590
    ctx->pc = 0x2cb554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26000));
    // 0x2cb558: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2cb558u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2cb55c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cb55cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cb560: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2cb560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2cb564: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x2cb564u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2cb568: 0x1466000f  bne         $v1, $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x2CB568u;
    {
        const bool branch_taken_0x2cb568 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x2CB56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB568u;
        // 0x2cb56c: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb568) {
            ctx->pc = 0x2CB5A8u;
            goto label_2cb5a8;
        }
    }
    ctx->pc = 0x2CB570u;
    // 0x2cb570: 0x9025657f  lbu         $a1, 0x657F($at)
    ctx->pc = 0x2cb570u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 25983)));
    // 0x2cb574: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2cb574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2cb578: 0x90226580  lbu         $v0, 0x6580($at)
    ctx->pc = 0x2cb578u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x8D6580u));
    // 0x2cb57c: 0xa2082a  slt         $at, $a1, $v0
    ctx->pc = 0x2cb57cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2cb580: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CB580u;
    {
        const bool branch_taken_0x2cb580 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB580u;
        // 0x2cb584: 0x3c02008d  lui         $v0, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb580) {
            ctx->pc = 0x2CB5A0u;
            goto label_2cb5a0;
        }
    }
    ctx->pc = 0x2CB588u;
    // 0x2cb588: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x2cb588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2cb58c: 0x24426480  addiu       $v0, $v0, 0x6480
    ctx->pc = 0x2cb58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25728));
    // 0x2cb590: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2cb590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2cb594: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2cb594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2cb598: 0xa023657f  sb          $v1, 0x657F($at)
    ctx->pc = 0x2cb598u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8D657Fu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8D657Fu, _value); } while (0);
    // 0x2cb59c: 0xa0460000  sb          $a2, 0x0($v0)
    ctx->pc = 0x2cb59cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 6));
label_2cb5a0:
    // 0x2cb5a0: 0xc0b2cb0  jal         func_2CB2C0
    ctx->pc = 0x2CB5A0u;
    SET_GPR_U32(ctx, 31, 0x2CB5A8u);
    ctx->pc = 0x2CB2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB2C0u, 0x2CB5A0u, 0x2CB5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB5A8u;
label_2cb5a8:
    // 0x2cb5a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cb5a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb5ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB5ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB5ACu;
        // 0x2cb5b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB5ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB5B4u;
}
