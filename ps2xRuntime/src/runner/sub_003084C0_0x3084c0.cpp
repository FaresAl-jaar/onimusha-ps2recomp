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

// Function: sub_003084C0
// Address: 0x3084c0 - 0x308578
void sub_003084C0_0x3084c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003084C0_0x3084c0");
#endif

    switch (ctx->pc) {
        case 0x3084d8u: goto label_3084d8;
        case 0x308500u: goto label_308500;
        case 0x308568u: goto label_308568;
        default: break;
    }

    ctx->pc = 0x3084c0u;

    // 0x3084c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3084c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3084c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3084c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3084c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3084c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3084cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3084ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3084d0: 0xc0743c0  jal         func_1D0F00
    ctx->pc = 0x3084D0u;
    SET_GPR_U32(ctx, 31, 0x3084D8u);
    ctx->pc = 0x3084D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3084D0u;
    // 0x3084d4: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F00u, 0x3084D0u, 0x3084D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3084D8u;
label_3084d8:
    // 0x3084d8: 0x878382b8  lh          $v1, -0x7D48($gp)
    ctx->pc = 0x3084d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x3084dc: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x3084dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x3084e0: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x3084e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x3084e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3084e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3084e8: 0xae0200a0  sw          $v0, 0xA0($s0)
    ctx->pc = 0x3084e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
    // 0x3084ec: 0x878382ba  lh          $v1, -0x7D46($gp)
    ctx->pc = 0x3084ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935226)));
    // 0x3084f0: 0x8e0200a4  lw          $v0, 0xA4($s0)
    ctx->pc = 0x3084f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x3084f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3084f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3084f8: 0xc0743e0  jal         func_1D0F80
    ctx->pc = 0x3084F8u;
    SET_GPR_U32(ctx, 31, 0x308500u);
    ctx->pc = 0x3084FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3084F8u;
    // 0x3084fc: 0xae0200a4  sw          $v0, 0xA4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F80u, 0x3084F8u, 0x308500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308500u;
label_308500:
    // 0x308500: 0x84450008  lh          $a1, 0x8($v0)
    ctx->pc = 0x308500u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x308504: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x308504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x308508: 0x85182b  sltu        $v1, $a0, $a1
    ctx->pc = 0x308508u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x30850c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x30850Cu;
    {
        const bool branch_taken_0x30850c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x308510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30850Cu;
        // 0x308510: 0x8446000a  lh          $a2, 0xA($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30850c) {
            ctx->pc = 0x308528u;
            goto label_308528;
        }
    }
    ctx->pc = 0x308514u;
    // 0x308514: 0x85001a  div         $zero, $a0, $a1
    ctx->pc = 0x308514u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x308518: 0x0  nop
    ctx->pc = 0x308518u;
    // NOP
    // 0x30851c: 0x0  nop
    ctx->pc = 0x30851cu;
    // NOP
    // 0x308520: 0x1810  mfhi        $v1
    ctx->pc = 0x308520u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x308524: 0xae0300a0  sw          $v1, 0xA0($s0)
    ctx->pc = 0x308524u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
label_308528:
    // 0x308528: 0x8e0400a4  lw          $a0, 0xA4($s0)
    ctx->pc = 0x308528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x30852c: 0x86182b  sltu        $v1, $a0, $a2
    ctx->pc = 0x30852cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x308530: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x308530u;
    {
        const bool branch_taken_0x308530 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x308530) {
            ctx->pc = 0x308550u;
            goto label_308550;
        }
    }
    ctx->pc = 0x308538u;
    // 0x308538: 0x86001a  div         $zero, $a0, $a2
    ctx->pc = 0x308538u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x30853c: 0x0  nop
    ctx->pc = 0x30853cu;
    // NOP
    // 0x308540: 0x0  nop
    ctx->pc = 0x308540u;
    // NOP
    // 0x308544: 0x1810  mfhi        $v1
    ctx->pc = 0x308544u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x308548: 0xae0300a4  sw          $v1, 0xA4($s0)
    ctx->pc = 0x308548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
    // 0x30854c: 0x0  nop
    ctx->pc = 0x30854cu;
    // NOP
label_308550:
    // 0x308550: 0x92030050  lbu         $v1, 0x50($s0)
    ctx->pc = 0x308550u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x308554: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x308554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x308558: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x308558u;
    {
        const bool branch_taken_0x308558 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30855Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308558u;
        // 0x30855c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308558) {
            ctx->pc = 0x308568u;
            goto label_308568;
        }
    }
    ctx->pc = 0x308560u;
    // 0x308560: 0xc096b58  jal         func_25AD60
    ctx->pc = 0x308560u;
    SET_GPR_U32(ctx, 31, 0x308568u);
    ctx->pc = 0x308564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308560u;
    // 0x308564: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD60u, 0x308560u, 0x308568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308568u;
label_308568:
    // 0x308568: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x308568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30856c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30856cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x308570: 0x3e00008  jr          $ra
    ctx->pc = 0x308570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308570u;
        // 0x308574: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308578u;
}
