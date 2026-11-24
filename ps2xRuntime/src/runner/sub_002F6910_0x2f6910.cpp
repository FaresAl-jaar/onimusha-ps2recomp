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

// Function: sub_002F6910
// Address: 0x2f6910 - 0x2f69dc
void sub_002F6910_0x2f6910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6910_0x2f6910");
#endif

    switch (ctx->pc) {
        case 0x2f692cu: goto label_2f692c;
        case 0x2f695cu: goto label_2f695c;
        case 0x2f697cu: goto label_2f697c;
        case 0x2f69a4u: goto label_2f69a4;
        case 0x2f69c4u: goto label_2f69c4;
        default: break;
    }

    ctx->pc = 0x2f6910u;

    // 0x2f6910: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f6910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f6914: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f6914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f6918: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f6918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f691c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f691cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6920: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x2f6920u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x2f6924: 0xc0e9ab4  jal         func_3A6AD0
    ctx->pc = 0x2F6924u;
    SET_GPR_U32(ctx, 31, 0x2F692Cu);
    ctx->pc = 0x2F6928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6924u;
    // 0x2f6928: 0x24843340  addiu       $a0, $a0, 0x3340 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6AD0u, 0x2F6924u, 0x2F692Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F692Cu;
label_2f692c:
    // 0x2f692c: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2F692Cu;
    {
        const bool branch_taken_0x2f692c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f692c) {
            ctx->pc = 0x2F69C8u;
            goto label_2f69c8;
        }
    }
    ctx->pc = 0x2F6934u;
    // 0x2f6934: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2f6934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2f6938: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f6938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f693c: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2F693Cu;
    {
        const bool branch_taken_0x2f693c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f693c) {
            ctx->pc = 0x2F6988u;
            goto label_2f6988;
        }
    }
    ctx->pc = 0x2F6944u;
    // 0x2f6944: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f6944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f6948: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F6948u;
    {
        const bool branch_taken_0x2f6948 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f6948) {
            ctx->pc = 0x2F6968u;
            goto label_2f6968;
        }
    }
    ctx->pc = 0x2F6950u;
    // 0x2f6950: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f6950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6954: 0xc0bd418  jal         func_2F5060
    ctx->pc = 0x2F6954u;
    SET_GPR_U32(ctx, 31, 0x2F695Cu);
    ctx->pc = 0x2F6958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6954u;
    // 0x2f6958: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5060u, 0x2F6954u, 0x2F695Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F695Cu;
label_2f695c:
    // 0x2f695c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2F695Cu;
    {
        const bool branch_taken_0x2f695c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f695c) {
            ctx->pc = 0x2F69C8u;
            goto label_2f69c8;
        }
    }
    ctx->pc = 0x2F6964u;
    // 0x2f6964: 0x0  nop
    ctx->pc = 0x2f6964u;
    // NOP
label_2f6968:
    // 0x2f6968: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f6968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f696c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2f696cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f6970: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2f6970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f6974: 0xc0bd390  jal         func_2F4E40
    ctx->pc = 0x2F6974u;
    SET_GPR_U32(ctx, 31, 0x2F697Cu);
    ctx->pc = 0x2F6978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6974u;
    // 0x2f6978: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4E40u, 0x2F6974u, 0x2F697Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F697Cu;
label_2f697c:
    // 0x2f697c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2F697Cu;
    {
        const bool branch_taken_0x2f697c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f697c) {
            ctx->pc = 0x2F69C8u;
            goto label_2f69c8;
        }
    }
    ctx->pc = 0x2F6984u;
    // 0x2f6984: 0x0  nop
    ctx->pc = 0x2f6984u;
    // NOP
label_2f6988:
    // 0x2f6988: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x2f6988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x2f698c: 0x8022339b  lb          $v0, 0x339B($at)
    ctx->pc = 0x2f698cu;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x92339Bu));
    // 0x2f6990: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F6990u;
    {
        const bool branch_taken_0x2f6990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6990) {
            ctx->pc = 0x2F69B0u;
            goto label_2f69b0;
        }
    }
    ctx->pc = 0x2F6998u;
    // 0x2f6998: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f6998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f699c: 0xc0bd418  jal         func_2F5060
    ctx->pc = 0x2F699Cu;
    SET_GPR_U32(ctx, 31, 0x2F69A4u);
    ctx->pc = 0x2F69A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F699Cu;
    // 0x2f69a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5060u, 0x2F699Cu, 0x2F69A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F69A4u;
label_2f69a4:
    // 0x2f69a4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F69A4u;
    {
        const bool branch_taken_0x2f69a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f69a4) {
            ctx->pc = 0x2F69C8u;
            goto label_2f69c8;
        }
    }
    ctx->pc = 0x2F69ACu;
    // 0x2f69ac: 0x0  nop
    ctx->pc = 0x2f69acu;
    // NOP
label_2f69b0:
    // 0x2f69b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f69b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f69b4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2f69b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2f69b8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2f69b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f69bc: 0xc0bd390  jal         func_2F4E40
    ctx->pc = 0x2F69BCu;
    SET_GPR_U32(ctx, 31, 0x2F69C4u);
    ctx->pc = 0x2F69C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F69BCu;
    // 0x2f69c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4E40u, 0x2F69BCu, 0x2F69C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F69C4u;
label_2f69c4:
    // 0x2f69c4: 0x0  nop
    ctx->pc = 0x2f69c4u;
    // NOP
label_2f69c8:
    // 0x2f69c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f69c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f69cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f69ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f69d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f69d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f69d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F69D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F69D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F69D4u;
        // 0x2f69d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F69D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F69DCu;
}
