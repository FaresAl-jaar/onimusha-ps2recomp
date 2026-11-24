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

// Function: sub_00208D48
// Address: 0x208d48 - 0x208df8
void sub_00208D48_0x208d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208D48_0x208d48");
#endif

    switch (ctx->pc) {
        case 0x208d70u: goto label_208d70;
        case 0x208d88u: goto label_208d88;
        case 0x208da4u: goto label_208da4;
        case 0x208db8u: goto label_208db8;
        case 0x208dccu: goto label_208dcc;
        case 0x208ddcu: goto label_208ddc;
        default: break;
    }

    ctx->pc = 0x208d48u;

    // 0x208d48: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x208d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x208d4c: 0xffb100a8  sd          $s1, 0xA8($sp)
    ctx->pc = 0x208d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 17));
    // 0x208d50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x208d50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208d54: 0xffb200b0  sd          $s2, 0xB0($sp)
    ctx->pc = 0x208d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
    // 0x208d58: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x208d58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208d5c: 0xffb300b8  sd          $s3, 0xB8($sp)
    ctx->pc = 0x208d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 19));
    // 0x208d60: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x208d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x208d64: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x208d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x208d68: 0xc081d84  jal         func_207610
    ctx->pc = 0x208D68u;
    SET_GPR_U32(ctx, 31, 0x208D70u);
    ctx->pc = 0x208D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208D68u;
    // 0x208d6c: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x208D68u, 0x208D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208D70u;
label_208d70:
    // 0x208d70: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x208d70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x208d74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x208d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208d78: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x208D78u;
    {
        const bool branch_taken_0x208d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x208D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208D78u;
        // 0x208d7c: 0x24847c98  addiu       $a0, $a0, 0x7C98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208d78) {
            ctx->pc = 0x208D90u;
            goto label_208d90;
        }
    }
    ctx->pc = 0x208D80u;
    // 0x208d80: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x208D80u;
    SET_GPR_U32(ctx, 31, 0x208D88u);
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x208D80u, 0x208D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208D88u;
label_208d88:
    // 0x208d88: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x208D88u;
    {
        const bool branch_taken_0x208d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208D88u;
        // 0x208d8c: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208d88) {
            ctx->pc = 0x208DE0u;
            goto label_208de0;
        }
    }
    ctx->pc = 0x208D90u;
label_208d90:
    // 0x208d90: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x208d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x208d94: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x208D94u;
    {
        const bool branch_taken_0x208d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208D94u;
        // 0x208d98: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208d94) {
            ctx->pc = 0x208DB0u;
            goto label_208db0;
        }
    }
    ctx->pc = 0x208D9Cu;
    // 0x208d9c: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x208D9Cu;
    SET_GPR_U32(ctx, 31, 0x208DA4u);
    ctx->pc = 0x208DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208D9Cu;
    // 0x208da0: 0x24847cc8  addiu       $a0, $a0, 0x7CC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x208D9Cu, 0x208DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208DA4u;
label_208da4:
    // 0x208da4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x208DA4u;
    {
        const bool branch_taken_0x208da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208DA4u;
        // 0x208da8: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208da4) {
            ctx->pc = 0x208DE0u;
            goto label_208de0;
        }
    }
    ctx->pc = 0x208DACu;
    // 0x208dac: 0x0  nop
    ctx->pc = 0x208dacu;
    // NOP
label_208db0:
    // 0x208db0: 0xc0821e6  jal         func_208798
    ctx->pc = 0x208DB0u;
    SET_GPR_U32(ctx, 31, 0x208DB8u);
    ctx->pc = 0x208DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208DB0u;
    // 0x208db4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208798u, 0x208DB0u, 0x208DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208DB8u;
label_208db8:
    // 0x208db8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x208db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208dbc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x208dbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208dc0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x208dc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208dc4: 0xc0821f0  jal         func_2087C0
    ctx->pc = 0x208DC4u;
    SET_GPR_U32(ctx, 31, 0x208DCCu);
    ctx->pc = 0x208DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208DC4u;
    // 0x208dc8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2087C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2087C0u, 0x208DC4u, 0x208DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208DCCu;
label_208dcc:
    // 0x208dcc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x208dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208dd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x208dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208dd4: 0xc089c6e  jal         func_2271B8
    ctx->pc = 0x208DD4u;
    SET_GPR_U32(ctx, 31, 0x208DDCu);
    ctx->pc = 0x208DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208DD4u;
    // 0x208dd8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2271B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2271B8u, 0x208DD4u, 0x208DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208DDCu;
label_208ddc:
    // 0x208ddc: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x208ddcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_208de0:
    // 0x208de0: 0xdfb100a8  ld          $s1, 0xA8($sp)
    ctx->pc = 0x208de0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x208de4: 0xdfb200b0  ld          $s2, 0xB0($sp)
    ctx->pc = 0x208de4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x208de8: 0xdfb300b8  ld          $s3, 0xB8($sp)
    ctx->pc = 0x208de8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x208dec: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x208decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x208df0: 0x3e00008  jr          $ra
    ctx->pc = 0x208DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208DF0u;
        // 0x208df4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208DF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208DF8u;
}
