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

// Function: sub_002B4170
// Address: 0x2b4170 - 0x2b4214
void sub_002B4170_0x2b4170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B4170_0x2b4170");
#endif

    switch (ctx->pc) {
        case 0x2b41bcu: goto label_2b41bc;
        case 0x2b41ccu: goto label_2b41cc;
        case 0x2b41ecu: goto label_2b41ec;
        default: break;
    }

    ctx->pc = 0x2b4170u;

    // 0x2b4170: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b4170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b4174: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b4174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b4178: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b4178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b417c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b417cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b4180: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b4180u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4184: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x2b4184u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x2b4188: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2b4188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2b418c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2B418Cu;
    {
        const bool branch_taken_0x2b418c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B418Cu;
        // 0x2b4190: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b418c) {
            ctx->pc = 0x2B41D8u;
            goto label_2b41d8;
        }
    }
    ctx->pc = 0x2B4194u;
    // 0x2b4194: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2b4194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2b4198: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x2b4198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2b419c: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x2b419cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2b41a0: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2B41A0u;
    {
        const bool branch_taken_0x2b41a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b41a0) {
            ctx->pc = 0x2B41D8u;
            goto label_2b41d8;
        }
    }
    ctx->pc = 0x2B41A8u;
    // 0x2b41a8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2b41a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2b41ac: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B41ACu;
    {
        const bool branch_taken_0x2b41ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B41B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B41ACu;
        // 0x2b41b0: 0x3c040085  lui         $a0, 0x85 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)133 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b41ac) {
            ctx->pc = 0x2B41C0u;
            goto label_2b41c0;
        }
    }
    ctx->pc = 0x2B41B4u;
    // 0x2b41b4: 0xc069324  jal         func_1A4C90
    ctx->pc = 0x2B41B4u;
    SET_GPR_U32(ctx, 31, 0x2B41BCu);
    ctx->pc = 0x2B41B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B41B4u;
    // 0x2b41b8: 0x2484f280  addiu       $a0, $a0, -0xD80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4C90u, 0x2B41B4u, 0x2B41BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B41BCu;
label_2b41bc:
    // 0x2b41bc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2b41bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2b41c0:
    // 0x2b41c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b41c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b41c4: 0xc0ad0ec  jal         func_2B43B0
    ctx->pc = 0x2B41C4u;
    SET_GPR_U32(ctx, 31, 0x2B41CCu);
    ctx->pc = 0x2B41C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B41C4u;
    // 0x2b41c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B43B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B43B0u, 0x2B41C4u, 0x2B41CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B41CCu;
label_2b41cc:
    // 0x2b41cc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2B41CCu;
    {
        const bool branch_taken_0x2b41cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b41cc) {
            ctx->pc = 0x2B4200u;
            goto label_2b4200;
        }
    }
    ctx->pc = 0x2B41D4u;
    // 0x2b41d4: 0x0  nop
    ctx->pc = 0x2b41d4u;
    // NOP
label_2b41d8:
    // 0x2b41d8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2b41d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2b41dc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B41DCu;
    {
        const bool branch_taken_0x2b41dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B41E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B41DCu;
        // 0x2b41e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b41dc) {
            ctx->pc = 0x2B41F0u;
            goto label_2b41f0;
        }
    }
    ctx->pc = 0x2B41E4u;
    // 0x2b41e4: 0xc0ad04c  jal         func_2B4130
    ctx->pc = 0x2B41E4u;
    SET_GPR_U32(ctx, 31, 0x2B41ECu);
    ctx->pc = 0x2B41E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B41E4u;
    // 0x2b41e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4130u, 0x2B41E4u, 0x2B41ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B41ECu;
label_2b41ec:
    // 0x2b41ec: 0x0  nop
    ctx->pc = 0x2b41ecu;
    // NOP
label_2b41f0:
    // 0x2b41f0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2b41f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2b41f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2b41f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2b41f8: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2b41f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x2b41fc: 0x0  nop
    ctx->pc = 0x2b41fcu;
    // NOP
label_2b4200:
    // 0x2b4200: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b4200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b4204: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b4204u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b4208: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b4208u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b420c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B420Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B420Cu;
        // 0x2b4210: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B420Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4214u;
}
