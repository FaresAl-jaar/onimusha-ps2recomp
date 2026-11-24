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

// Function: sub_0039A570
// Address: 0x39a570 - 0x39a5e0
void sub_0039A570_0x39a570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039A570_0x39a570");
#endif

    switch (ctx->pc) {
        case 0x39a5a4u: goto label_39a5a4;
        case 0x39a5acu: goto label_39a5ac;
        default: break;
    }

    ctx->pc = 0x39a570u;

    // 0x39a570: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39a570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39a574: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39a574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39a578: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39a578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x39a57c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39a57cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a580: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x39A580u;
    {
        const bool branch_taken_0x39a580 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A580u;
        // 0x39a584: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a580) {
            ctx->pc = 0x39A5D0u;
            goto label_39a5d0;
        }
    }
    ctx->pc = 0x39A588u;
    // 0x39a588: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x39a588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x39a58c: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x39a58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x39a590: 0x24427750  addiu       $v0, $v0, 0x7750
    ctx->pc = 0x39a590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30544));
    // 0x39a594: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x39a594u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x39a598: 0x26040650  addiu       $a0, $s0, 0x650
    ctx->pc = 0x39a598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    // 0x39a59c: 0xc09d2c0  jal         func_274B00
    ctx->pc = 0x39A59Cu;
    SET_GPR_U32(ctx, 31, 0x39A5A4u);
    ctx->pc = 0x39A5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A59Cu;
    // 0x39a5a0: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274B00u, 0x39A59Cu, 0x39A5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A5A4u;
label_39a5a4:
    // 0x39a5a4: 0xc09d694  jal         func_275A50
    ctx->pc = 0x39A5A4u;
    SET_GPR_U32(ctx, 31, 0x39A5ACu);
    ctx->pc = 0x39A5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A5A4u;
    // 0x39a5a8: 0x26042930  addiu       $a0, $s0, 0x2930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x39A5A4u, 0x39A5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A5ACu;
label_39a5ac:
    // 0x39a5ac: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x39a5acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x39a5b0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x39a5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x39a5b4: 0x246376c0  addiu       $v1, $v1, 0x76C0
    ctx->pc = 0x39a5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30400));
    // 0x39a5b8: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x39a5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x39a5bc: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x39a5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x39a5c0: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x39a5c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x39a5c4: 0x24639f40  addiu       $v1, $v1, -0x60C0
    ctx->pc = 0x39a5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942528));
    // 0x39a5c8: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x39a5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x39a5cc: 0x0  nop
    ctx->pc = 0x39a5ccu;
    // NOP
label_39a5d0:
    // 0x39a5d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39a5d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39a5d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39a5d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39a5d8: 0x3e00008  jr          $ra
    ctx->pc = 0x39A5D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39A5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A5D8u;
        // 0x39a5dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A5D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39A5E0u;
}
