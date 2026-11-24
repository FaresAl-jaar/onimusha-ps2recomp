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

// Function: sub_00254610
// Address: 0x254610 - 0x2546bc
void sub_00254610_0x254610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254610_0x254610");
#endif

    switch (ctx->pc) {
        case 0x254638u: goto label_254638;
        case 0x254680u: goto label_254680;
        case 0x25469cu: goto label_25469c;
        default: break;
    }

    ctx->pc = 0x254610u;

    // 0x254610: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x254610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x254614: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x254614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x254618: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x254618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25461c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25461cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x254620: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x254620u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254624: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x254624u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254628: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x254628u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x25462c: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x25462cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x254630: 0xc05e360  jal         func_178D80
    ctx->pc = 0x254630u;
    SET_GPR_U32(ctx, 31, 0x254638u);
    ctx->pc = 0x254634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254630u;
    // 0x254634: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x254630u, 0x254638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254638u;
label_254638:
    // 0x254638: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x254638u;
    {
        const bool branch_taken_0x254638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x254638) {
            ctx->pc = 0x254648u;
            goto label_254648;
        }
    }
    ctx->pc = 0x254640u;
    // 0x254640: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x254640u;
    {
        const bool branch_taken_0x254640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254640u;
        // 0x254644: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254640) {
            ctx->pc = 0x2546A8u;
            goto label_2546a8;
        }
    }
    ctx->pc = 0x254648u;
label_254648:
    // 0x254648: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x254648u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x25464c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x25464cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x254650: 0x3c030410  lui         $v1, 0x410
    ctx->pc = 0x254650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1040 << 16));
    // 0x254654: 0x34640014  ori         $a0, $v1, 0x14
    ctx->pc = 0x254654u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20);
    // 0x254658: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x254658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x25465c: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x25465cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x254660: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x254660u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x254664: 0x92231110  lbu         $v1, 0x1110($s1)
    ctx->pc = 0x254664u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4368)));
    // 0x254668: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x254668u;
    {
        const bool branch_taken_0x254668 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25466Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254668u;
        // 0x25466c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254668) {
            ctx->pc = 0x254688u;
            goto label_254688;
        }
    }
    ctx->pc = 0x254670u;
    // 0x254670: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x254670u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254674: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x254674u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254678: 0xc0954bc  jal         func_2552F0
    ctx->pc = 0x254678u;
    SET_GPR_U32(ctx, 31, 0x254680u);
    ctx->pc = 0x25467Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254678u;
    // 0x25467c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2552F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2552F0u, 0x254678u, 0x254680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254680u;
label_254680:
    // 0x254680: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x254680u;
    {
        const bool branch_taken_0x254680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x254680) {
            ctx->pc = 0x2546A0u;
            goto label_2546a0;
        }
    }
    ctx->pc = 0x254688u;
label_254688:
    // 0x254688: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x254688u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x25468c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x25468cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254690: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x254690u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254694: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x254694u;
    SET_GPR_U32(ctx, 31, 0x25469Cu);
    ctx->pc = 0x254698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254694u;
    // 0x254698: 0x2484cc60  addiu       $a0, $a0, -0x33A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x254694u, 0x25469Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25469Cu;
label_25469c:
    // 0x25469c: 0x0  nop
    ctx->pc = 0x25469cu;
    // NOP
label_2546a0:
    // 0x2546a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2546a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2546a4: 0x0  nop
    ctx->pc = 0x2546a4u;
    // NOP
label_2546a8:
    // 0x2546a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2546a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2546ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2546acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2546b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2546b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2546b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2546B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2546B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2546B4u;
        // 0x2546b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2546B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2546BCu;
}
