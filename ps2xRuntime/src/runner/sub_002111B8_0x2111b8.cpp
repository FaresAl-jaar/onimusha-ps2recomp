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

// Function: sub_002111B8
// Address: 0x2111b8 - 0x211230
void sub_002111B8_0x2111b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002111B8_0x2111b8");
#endif

    switch (ctx->pc) {
        case 0x2111d4u: goto label_2111d4;
        default: break;
    }

    ctx->pc = 0x2111b8u;

    // 0x2111b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2111b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2111bc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2111bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2111c0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2111c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2111c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2111c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2111c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2111c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2111cc: 0xc0844e4  jal         func_211390
    ctx->pc = 0x2111CCu;
    SET_GPR_U32(ctx, 31, 0x2111D4u);
    ctx->pc = 0x2111D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2111CCu;
    // 0x2111d0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211390u, 0x2111CCu, 0x2111D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2111D4u;
label_2111d4:
    // 0x2111d4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2111D4u;
    {
        const bool branch_taken_0x2111d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2111D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2111D4u;
        // 0x2111d8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2111d4) {
            ctx->pc = 0x2111E8u;
            goto label_2111e8;
        }
    }
    ctx->pc = 0x2111DCu;
    // 0x2111dc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2111DCu;
    {
        const bool branch_taken_0x2111dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2111E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2111DCu;
        // 0x2111e0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2111dc) {
            ctx->pc = 0x211224u;
            goto label_211224;
        }
    }
    ctx->pc = 0x2111E4u;
    // 0x2111e4: 0x0  nop
    ctx->pc = 0x2111e4u;
    // NOP
label_2111e8:
    // 0x2111e8: 0x93a30000  lbu         $v1, 0x0($sp)
    ctx->pc = 0x2111e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2111ec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2111ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2111f0: 0x93a40002  lbu         $a0, 0x2($sp)
    ctx->pc = 0x2111f0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x2111f4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2111f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2111f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2111f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2111fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2111fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x211200: 0x3c010067  lui         $at, 0x67
    ctx->pc = 0x211200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)103 << 16));
    // 0x211204: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x211204u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x211208: 0x8c238800  lw          $v1, -0x7800($at)
    ctx->pc = 0x211208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294936576)));
    // 0x21120c: 0x10650005  beq         $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x21120Cu;
    {
        const bool branch_taken_0x21120c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x211210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21120Cu;
        // 0x211210: 0x32140  sll         $a0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21120c) {
            ctx->pc = 0x211224u;
            goto label_211224;
        }
    }
    ctx->pc = 0x211214u;
    // 0x211214: 0x831023  subu        $v0, $a0, $v1
    ctx->pc = 0x211214u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x211218: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x211218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21121c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21121cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x211220: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x211220u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_211224:
    // 0x211224: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x211224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211228: 0x3e00008  jr          $ra
    ctx->pc = 0x211228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21122Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211228u;
        // 0x21122c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211230u;
}
