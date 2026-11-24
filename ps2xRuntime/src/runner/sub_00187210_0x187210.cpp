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

// Function: sub_00187210
// Address: 0x187210 - 0x1872a4
void sub_00187210_0x187210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187210_0x187210");
#endif

    switch (ctx->pc) {
        case 0x187238u: goto label_187238;
        case 0x187248u: goto label_187248;
        case 0x18725cu: goto label_18725c;
        case 0x18726cu: goto label_18726c;
        default: break;
    }

    ctx->pc = 0x187210u;

    // 0x187210: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x187210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x187214: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x187214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x187218: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x187218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18721c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18721cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x187220: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x187220u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187224: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x187224u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187228: 0x3c040087  lui         $a0, 0x87
    ctx->pc = 0x187228u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)135 << 16));
    // 0x18722c: 0x24849600  addiu       $a0, $a0, -0x6A00
    ctx->pc = 0x18722cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940160));
    // 0x187230: 0xc0740a8  jal         func_1D02A0
    ctx->pc = 0x187230u;
    SET_GPR_U32(ctx, 31, 0x187238u);
    ctx->pc = 0x187234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187230u;
    // 0x187234: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02A0u, 0x187230u, 0x187238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187238u;
label_187238:
    // 0x187238: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x187238u;
    {
        const bool branch_taken_0x187238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18723Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187238u;
        // 0x18723c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187238) {
            ctx->pc = 0x187290u;
            goto label_187290;
        }
    }
    ctx->pc = 0x187240u;
    // 0x187240: 0xc043898  jal         func_10E260
    ctx->pc = 0x187240u;
    SET_GPR_U32(ctx, 31, 0x187248u);
    ctx->pc = 0x10E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E260u, 0x187240u, 0x187248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187248u;
label_187248:
    // 0x187248: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x187248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x18724c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18724cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187250: 0x34449000  ori         $a0, $v0, 0x9000
    ctx->pc = 0x187250u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x187254: 0xc04121a  jal         func_104868
    ctx->pc = 0x187254u;
    SET_GPR_U32(ctx, 31, 0x18725Cu);
    ctx->pc = 0x187258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187254u;
    // 0x187258: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104868u, 0x187254u, 0x18725Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18725Cu;
label_18725c:
    // 0x18725c: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x18725cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x187260: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x187260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x187264: 0xc061c74  jal         func_1871D0
    ctx->pc = 0x187264u;
    SET_GPR_U32(ctx, 31, 0x18726Cu);
    ctx->pc = 0x187268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187264u;
    // 0x187268: 0xac209020  sw          $zero, -0x6FE0($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938656), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1871D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1871D0u, 0x187264u, 0x18726Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18726Cu;
label_18726c:
    // 0x18726c: 0x102140  sll         $a0, $s0, 5
    ctx->pc = 0x18726cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x187270: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x187270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x187274: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x187274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x187278: 0x240301c5  addiu       $v1, $zero, 0x1C5
    ctx->pc = 0x187278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 453));
    // 0x18727c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x18727cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x187280: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x187280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x187284: 0xac249030  sw          $a0, -0x6FD0($at)
    ctx->pc = 0x187284u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938672), GPR_U32(ctx, 4));
    // 0x187288: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x187288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x18728c: 0xac239000  sw          $v1, -0x7000($at)
    ctx->pc = 0x18728cu;
    runtime->Store32(rdram, ctx, 0x10009000u, GPR_U32(ctx, 3)); // MMIO: 0x10009000
label_187290:
    // 0x187290: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x187290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x187294: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x187294u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187298: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x187298u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18729c: 0x3e00008  jr          $ra
    ctx->pc = 0x18729Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1872A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18729Cu;
        // 0x1872a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18729Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1872A4u;
}
