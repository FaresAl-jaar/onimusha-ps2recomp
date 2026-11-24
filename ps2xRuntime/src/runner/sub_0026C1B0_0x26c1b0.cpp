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

// Function: sub_0026C1B0
// Address: 0x26c1b0 - 0x26c290
void sub_0026C1B0_0x26c1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C1B0_0x26c1b0");
#endif

    switch (ctx->pc) {
        case 0x26c1c8u: goto label_26c1c8;
        case 0x26c224u: goto label_26c224;
        case 0x26c240u: goto label_26c240;
        case 0x26c280u: goto label_26c280;
        default: break;
    }

    ctx->pc = 0x26c1b0u;

    // 0x26c1b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26c1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26c1b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26c1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26c1b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26c1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26c1bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26c1bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c1c0: 0xc0957bc  jal         func_255EF0
    ctx->pc = 0x26C1C0u;
    SET_GPR_U32(ctx, 31, 0x26C1C8u);
    ctx->pc = 0x26C1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C1C0u;
    // 0x26c1c4: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255EF0u, 0x26C1C0u, 0x26C1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C1C8u;
label_26c1c8:
    // 0x26c1c8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x26c1c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x26c1cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26c1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26c1d0: 0x9023fc8d  lbu         $v1, -0x373($at)
    ctx->pc = 0x26c1d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81FC8Du));
    // 0x26c1d4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26C1D4u;
    {
        const bool branch_taken_0x26c1d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26C1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C1D4u;
        // 0x26c1d8: 0xa3a00029  sb          $zero, 0x29($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 41), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c1d4) {
            ctx->pc = 0x26C1E8u;
            goto label_26c1e8;
        }
    }
    ctx->pc = 0x26C1DCu;
    // 0x26c1dc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x26C1DCu;
    {
        const bool branch_taken_0x26c1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c1dc) {
            ctx->pc = 0x26C208u;
            goto label_26c208;
        }
    }
    ctx->pc = 0x26C1E4u;
    // 0x26c1e4: 0x0  nop
    ctx->pc = 0x26c1e4u;
    // NOP
label_26c1e8:
    // 0x26c1e8: 0x24020175  addiu       $v0, $zero, 0x175
    ctx->pc = 0x26c1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 373));
    // 0x26c1ec: 0xa7a20022  sh          $v0, 0x22($sp)
    ctx->pc = 0x26c1ecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x26c1f0: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x26c1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x26c1f4: 0xa3a20027  sb          $v0, 0x27($sp)
    ctx->pc = 0x26c1f4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 39), (uint8_t)GPR_U32(ctx, 2));
    // 0x26c1f8: 0x24020184  addiu       $v0, $zero, 0x184
    ctx->pc = 0x26c1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 388));
    // 0x26c1fc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x26C1FCu;
    {
        const bool branch_taken_0x26c1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C1FCu;
        // 0x26c200: 0xa7a2002e  sh          $v0, 0x2E($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 46), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c1fc) {
            ctx->pc = 0x26C258u;
            goto label_26c258;
        }
    }
    ctx->pc = 0x26C204u;
    // 0x26c204: 0x0  nop
    ctx->pc = 0x26c204u;
    // NOP
label_26c208:
    // 0x26c208: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x26c208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x26c20c: 0x9023fc8c  lbu         $v1, -0x374($at)
    ctx->pc = 0x26c20cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81FC8Cu));
    // 0x26c210: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x26c210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26c214: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26C214u;
    {
        const bool branch_taken_0x26c214 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26C218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C214u;
        // 0x26c218: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c214) {
            ctx->pc = 0x26C238u;
            goto label_26c238;
        }
    }
    ctx->pc = 0x26C21Cu;
    // 0x26c21c: 0xc0957bc  jal         func_255EF0
    ctx->pc = 0x26C21Cu;
    SET_GPR_U32(ctx, 31, 0x26C224u);
    ctx->pc = 0x255EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255EF0u, 0x26C21Cu, 0x26C224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C224u;
label_26c224:
    // 0x26c224: 0x24020194  addiu       $v0, $zero, 0x194
    ctx->pc = 0x26c224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 404));
    // 0x26c228: 0xa3a00024  sb          $zero, 0x24($sp)
    ctx->pc = 0x26c228u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 36), (uint8_t)GPR_U32(ctx, 0));
    // 0x26c22c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x26C22Cu;
    {
        const bool branch_taken_0x26c22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C22Cu;
        // 0x26c230: 0xa7a20022  sh          $v0, 0x22($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 34), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c22c) {
            ctx->pc = 0x26C258u;
            goto label_26c258;
        }
    }
    ctx->pc = 0x26C234u;
    // 0x26c234: 0x0  nop
    ctx->pc = 0x26c234u;
    // NOP
label_26c238:
    // 0x26c238: 0xc0957bc  jal         func_255EF0
    ctx->pc = 0x26C238u;
    SET_GPR_U32(ctx, 31, 0x26C240u);
    ctx->pc = 0x26C23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C238u;
    // 0x26c23c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255EF0u, 0x26C238u, 0x26C240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C240u;
label_26c240:
    // 0x26c240: 0x24020184  addiu       $v0, $zero, 0x184
    ctx->pc = 0x26c240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 388));
    // 0x26c244: 0xa3a00024  sb          $zero, 0x24($sp)
    ctx->pc = 0x26c244u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 36), (uint8_t)GPR_U32(ctx, 0));
    // 0x26c248: 0xa7a20022  sh          $v0, 0x22($sp)
    ctx->pc = 0x26c248u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x26c24c: 0x87a2002e  lh          $v0, 0x2E($sp)
    ctx->pc = 0x26c24cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 46)));
    // 0x26c250: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x26c250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
    // 0x26c254: 0xa7a2002e  sh          $v0, 0x2E($sp)
    ctx->pc = 0x26c254u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 46), (uint16_t)GPR_U32(ctx, 2));
label_26c258:
    // 0x26c258: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x26c258u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x26c25c: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x26c25cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x26c260: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x26c260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x26c264: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x26c264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x26c268: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x26c268u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x26c26c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x26c26cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26c270: 0x24070400  addiu       $a3, $zero, 0x400
    ctx->pc = 0x26c270u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x26c274: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26c274u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c278: 0xc09565c  jal         func_255970
    ctx->pc = 0x26C278u;
    SET_GPR_U32(ctx, 31, 0x26C280u);
    ctx->pc = 0x26C27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C278u;
    // 0x26c27c: 0x27a90020  addiu       $t1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255970u, 0x26C278u, 0x26C280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C280u;
label_26c280:
    // 0x26c280: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26c280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26c284: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26c284u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26c288: 0x3e00008  jr          $ra
    ctx->pc = 0x26C288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C288u;
        // 0x26c28c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26C290u;
}
