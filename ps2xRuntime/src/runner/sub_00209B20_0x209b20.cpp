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

// Function: sub_00209B20
// Address: 0x209b20 - 0x209bc0
void sub_00209B20_0x209b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209B20_0x209b20");
#endif

    switch (ctx->pc) {
        case 0x209b40u: goto label_209b40;
        case 0x209b58u: goto label_209b58;
        case 0x209b78u: goto label_209b78;
        case 0x209b88u: goto label_209b88;
        case 0x209b9cu: goto label_209b9c;
        case 0x209ba8u: goto label_209ba8;
        default: break;
    }

    ctx->pc = 0x209b20u;

    // 0x209b20: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x209b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x209b24: 0xffb100a8  sd          $s1, 0xA8($sp)
    ctx->pc = 0x209b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 17));
    // 0x209b28: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x209b28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209b2c: 0xffb200b0  sd          $s2, 0xB0($sp)
    ctx->pc = 0x209b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
    // 0x209b30: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x209b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x209b34: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x209b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
    // 0x209b38: 0xc081d84  jal         func_207610
    ctx->pc = 0x209B38u;
    SET_GPR_U32(ctx, 31, 0x209B40u);
    ctx->pc = 0x209B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209B38u;
    // 0x209b3c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x209B38u, 0x209B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209B40u;
label_209b40:
    // 0x209b40: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x209b40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x209b44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x209b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209b48: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x209B48u;
    {
        const bool branch_taken_0x209b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x209B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B48u;
        // 0x209b4c: 0x248480a0  addiu       $a0, $a0, -0x7F60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209b48) {
            ctx->pc = 0x209B60u;
            goto label_209b60;
        }
    }
    ctx->pc = 0x209B50u;
    // 0x209b50: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x209B50u;
    SET_GPR_U32(ctx, 31, 0x209B58u);
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x209B50u, 0x209B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209B58u;
label_209b58:
    // 0x209b58: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x209B58u;
    {
        const bool branch_taken_0x209b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B58u;
        // 0x209b5c: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209b58) {
            ctx->pc = 0x209BACu;
            goto label_209bac;
        }
    }
    ctx->pc = 0x209B60u;
label_209b60:
    // 0x209b60: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x209b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x209b64: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x209B64u;
    {
        const bool branch_taken_0x209b64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x209b64) {
            ctx->pc = 0x209B80u;
            goto label_209b80;
        }
    }
    ctx->pc = 0x209B6Cu;
    // 0x209b6c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x209b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x209b70: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x209B70u;
    SET_GPR_U32(ctx, 31, 0x209B78u);
    ctx->pc = 0x209B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209B70u;
    // 0x209b74: 0x248480d0  addiu       $a0, $a0, -0x7F30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x209B70u, 0x209B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209B78u;
label_209b78:
    // 0x209b78: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x209B78u;
    {
        const bool branch_taken_0x209b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B78u;
        // 0x209b7c: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209b78) {
            ctx->pc = 0x209BACu;
            goto label_209bac;
        }
    }
    ctx->pc = 0x209B80u;
label_209b80:
    // 0x209b80: 0xc0821e6  jal         func_208798
    ctx->pc = 0x209B80u;
    SET_GPR_U32(ctx, 31, 0x209B88u);
    ctx->pc = 0x209B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209B80u;
    // 0x209b84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208798u, 0x209B80u, 0x209B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209B88u;
label_209b88:
    // 0x209b88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x209b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209b8c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x209b8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209b90: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x209b90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209b94: 0xc0821f0  jal         func_2087C0
    ctx->pc = 0x209B94u;
    SET_GPR_U32(ctx, 31, 0x209B9Cu);
    ctx->pc = 0x209B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209B94u;
    // 0x209b98: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2087C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2087C0u, 0x209B94u, 0x209B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209B9Cu;
label_209b9c:
    // 0x209b9c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x209b9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209ba0: 0xc0895d0  jal         func_225740
    ctx->pc = 0x209BA0u;
    SET_GPR_U32(ctx, 31, 0x209BA8u);
    ctx->pc = 0x209BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209BA0u;
    // 0x209ba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225740u, 0x209BA0u, 0x209BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209BA8u;
label_209ba8:
    // 0x209ba8: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x209ba8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_209bac:
    // 0x209bac: 0xdfb100a8  ld          $s1, 0xA8($sp)
    ctx->pc = 0x209bacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x209bb0: 0xdfb200b0  ld          $s2, 0xB0($sp)
    ctx->pc = 0x209bb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x209bb4: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x209bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x209bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x209BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209BB8u;
        // 0x209bbc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209BC0u;
}
