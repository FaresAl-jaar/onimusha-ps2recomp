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

// Function: sub_00209A80
// Address: 0x209a80 - 0x209b20
void sub_00209A80_0x209a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209A80_0x209a80");
#endif

    switch (ctx->pc) {
        case 0x209aa0u: goto label_209aa0;
        case 0x209ab8u: goto label_209ab8;
        case 0x209ad8u: goto label_209ad8;
        case 0x209ae8u: goto label_209ae8;
        case 0x209afcu: goto label_209afc;
        case 0x209b08u: goto label_209b08;
        default: break;
    }

    ctx->pc = 0x209a80u;

    // 0x209a80: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x209a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x209a84: 0xffb100a8  sd          $s1, 0xA8($sp)
    ctx->pc = 0x209a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 17));
    // 0x209a88: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x209a88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209a8c: 0xffb200b0  sd          $s2, 0xB0($sp)
    ctx->pc = 0x209a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
    // 0x209a90: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x209a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x209a94: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x209a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
    // 0x209a98: 0xc081d84  jal         func_207610
    ctx->pc = 0x209A98u;
    SET_GPR_U32(ctx, 31, 0x209AA0u);
    ctx->pc = 0x209A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209A98u;
    // 0x209a9c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x209A98u, 0x209AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209AA0u;
label_209aa0:
    // 0x209aa0: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x209aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x209aa4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x209aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209aa8: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x209AA8u;
    {
        const bool branch_taken_0x209aa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x209AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209AA8u;
        // 0x209aac: 0x24848040  addiu       $a0, $a0, -0x7FC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209aa8) {
            ctx->pc = 0x209AC0u;
            goto label_209ac0;
        }
    }
    ctx->pc = 0x209AB0u;
    // 0x209ab0: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x209AB0u;
    SET_GPR_U32(ctx, 31, 0x209AB8u);
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x209AB0u, 0x209AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209AB8u;
label_209ab8:
    // 0x209ab8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x209AB8u;
    {
        const bool branch_taken_0x209ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209AB8u;
        // 0x209abc: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209ab8) {
            ctx->pc = 0x209B0Cu;
            goto label_209b0c;
        }
    }
    ctx->pc = 0x209AC0u;
label_209ac0:
    // 0x209ac0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x209ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x209ac4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x209AC4u;
    {
        const bool branch_taken_0x209ac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x209ac4) {
            ctx->pc = 0x209AE0u;
            goto label_209ae0;
        }
    }
    ctx->pc = 0x209ACCu;
    // 0x209acc: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x209accu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x209ad0: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x209AD0u;
    SET_GPR_U32(ctx, 31, 0x209AD8u);
    ctx->pc = 0x209AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209AD0u;
    // 0x209ad4: 0x24848070  addiu       $a0, $a0, -0x7F90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x209AD0u, 0x209AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209AD8u;
label_209ad8:
    // 0x209ad8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x209AD8u;
    {
        const bool branch_taken_0x209ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209AD8u;
        // 0x209adc: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209ad8) {
            ctx->pc = 0x209B0Cu;
            goto label_209b0c;
        }
    }
    ctx->pc = 0x209AE0u;
label_209ae0:
    // 0x209ae0: 0xc0821e6  jal         func_208798
    ctx->pc = 0x209AE0u;
    SET_GPR_U32(ctx, 31, 0x209AE8u);
    ctx->pc = 0x209AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209AE0u;
    // 0x209ae4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208798u, 0x209AE0u, 0x209AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209AE8u;
label_209ae8:
    // 0x209ae8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x209ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209aec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x209aecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209af0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x209af0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209af4: 0xc0821f0  jal         func_2087C0
    ctx->pc = 0x209AF4u;
    SET_GPR_U32(ctx, 31, 0x209AFCu);
    ctx->pc = 0x209AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209AF4u;
    // 0x209af8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2087C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2087C0u, 0x209AF4u, 0x209AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209AFCu;
label_209afc:
    // 0x209afc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x209afcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209b00: 0xc0895b2  jal         func_2256C8
    ctx->pc = 0x209B00u;
    SET_GPR_U32(ctx, 31, 0x209B08u);
    ctx->pc = 0x209B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209B00u;
    // 0x209b04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2256C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2256C8u, 0x209B00u, 0x209B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209B08u;
label_209b08:
    // 0x209b08: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x209b08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_209b0c:
    // 0x209b0c: 0xdfb100a8  ld          $s1, 0xA8($sp)
    ctx->pc = 0x209b0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x209b10: 0xdfb200b0  ld          $s2, 0xB0($sp)
    ctx->pc = 0x209b10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x209b14: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x209b14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x209b18: 0x3e00008  jr          $ra
    ctx->pc = 0x209B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B18u;
        // 0x209b1c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209B18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209B20u;
}
