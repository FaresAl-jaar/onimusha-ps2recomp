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

// Function: sub_00221F78
// Address: 0x221f78 - 0x222064
void sub_00221F78_0x221f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221F78_0x221f78");
#endif

    switch (ctx->pc) {
        case 0x221f9cu: goto label_221f9c;
        case 0x221fbcu: goto label_221fbc;
        case 0x221fc8u: goto label_221fc8;
        case 0x221fd8u: goto label_221fd8;
        case 0x221ff4u: goto label_221ff4;
        case 0x222000u: goto label_222000;
        case 0x222014u: goto label_222014;
        case 0x222030u: goto label_222030;
        default: break;
    }

    ctx->pc = 0x221f78u;

    // 0x221f78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x221f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x221f7c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x221f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x221f80: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x221f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x221f84: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x221f84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221f88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x221f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221f8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x221f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x221f90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x221f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x221f94: 0xc0888a2  jal         func_222288
    ctx->pc = 0x221F94u;
    SET_GPR_U32(ctx, 31, 0x221F9Cu);
    ctx->pc = 0x221F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221F94u;
    // 0x221f98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222288u, 0x221F94u, 0x221F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221F9Cu;
label_221f9c:
    // 0x221f9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221fa0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x221fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x221fa4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x221fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x221fa8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x221FA8u;
    {
        const bool branch_taken_0x221fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221FA8u;
        // 0x221fac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221fa8) {
            ctx->pc = 0x221FD0u;
            goto label_221fd0;
        }
    }
    ctx->pc = 0x221FB0u;
    // 0x221fb0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x221fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x221fb4: 0xc08887a  jal         func_2221E8
    ctx->pc = 0x221FB4u;
    SET_GPR_U32(ctx, 31, 0x221FBCu);
    ctx->pc = 0x221FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221FB4u;
    // 0x221fb8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2221E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2221E8u, 0x221FB4u, 0x221FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221FBCu;
label_221fbc:
    // 0x221fbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221fc0: 0xc08881a  jal         func_222068
    ctx->pc = 0x221FC0u;
    SET_GPR_U32(ctx, 31, 0x221FC8u);
    ctx->pc = 0x221FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221FC0u;
    // 0x221fc4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222068u, 0x221FC0u, 0x221FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221FC8u;
label_221fc8:
    // 0x221fc8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x221FC8u;
    {
        const bool branch_taken_0x221fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221FC8u;
        // 0x221fcc: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221fc8) {
            ctx->pc = 0x221FE0u;
            goto label_221fe0;
        }
    }
    ctx->pc = 0x221FD0u;
label_221fd0:
    // 0x221fd0: 0xc087e5e  jal         func_21F978
    ctx->pc = 0x221FD0u;
    SET_GPR_U32(ctx, 31, 0x221FD8u);
    ctx->pc = 0x21F978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F978u, 0x221FD0u, 0x221FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221FD8u;
label_221fd8:
    // 0x221fd8: 0xae000bb0  sw          $zero, 0xBB0($s0)
    ctx->pc = 0x221fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2992), GPR_U32(ctx, 0));
    // 0x221fdc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x221fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_221fe0:
    // 0x221fe0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x221FE0u;
    {
        const bool branch_taken_0x221fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221FE0u;
        // 0x221fe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221fe0) {
            ctx->pc = 0x222008u;
            goto label_222008;
        }
    }
    ctx->pc = 0x221FE8u;
    // 0x221fe8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x221fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x221fec: 0xc088882  jal         func_222208
    ctx->pc = 0x221FECu;
    SET_GPR_U32(ctx, 31, 0x221FF4u);
    ctx->pc = 0x221FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221FECu;
    // 0x221ff0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222208u, 0x221FECu, 0x221FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221FF4u;
label_221ff4:
    // 0x221ff4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221ff8: 0xc088842  jal         func_222108
    ctx->pc = 0x221FF8u;
    SET_GPR_U32(ctx, 31, 0x222000u);
    ctx->pc = 0x221FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221FF8u;
    // 0x221ffc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222108u, 0x221FF8u, 0x222000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222000u;
label_222000:
    // 0x222000: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x222000u;
    {
        const bool branch_taken_0x222000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222000u;
        // 0x222004: 0x8e220020  lw          $v0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222000) {
            ctx->pc = 0x22201Cu;
            goto label_22201c;
        }
    }
    ctx->pc = 0x222008u;
label_222008:
    // 0x222008: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x222008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x22200c: 0xc087e5e  jal         func_21F978
    ctx->pc = 0x22200Cu;
    SET_GPR_U32(ctx, 31, 0x222014u);
    ctx->pc = 0x222010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22200Cu;
    // 0x222010: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F978u, 0x22200Cu, 0x222014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222014u;
label_222014:
    // 0x222014: 0xae000bb4  sw          $zero, 0xBB4($s0)
    ctx->pc = 0x222014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2996), GPR_U32(ctx, 0));
    // 0x222018: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x222018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_22201c:
    // 0x22201c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x22201Cu;
    {
        const bool branch_taken_0x22201c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22201Cu;
        // 0x222020: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22201c) {
            ctx->pc = 0x222050u;
            goto label_222050;
        }
    }
    ctx->pc = 0x222024u;
    // 0x222024: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x222024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x222028: 0xc08888a  jal         func_222228
    ctx->pc = 0x222028u;
    SET_GPR_U32(ctx, 31, 0x222030u);
    ctx->pc = 0x22202Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222028u;
    // 0x22202c: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222228u, 0x222028u, 0x222030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222030u;
label_222030:
    // 0x222030: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x222030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222034: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x222034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222038: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x222038u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22203c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22203cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222040: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x222040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222044: 0x808886a  j           func_2221A8
    ctx->pc = 0x222044u;
    ctx->pc = 0x222048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222044u;
    // 0x222048: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2221A8u;
    sub_002221A8_0x2221a8(rdram, ctx, runtime); return;
    ctx->pc = 0x22204Cu;
    // 0x22204c: 0x0  nop
    ctx->pc = 0x22204cu;
    // NOP
label_222050:
    // 0x222050: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x222050u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222054: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x222054u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x222058: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x222058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22205c: 0x3e00008  jr          $ra
    ctx->pc = 0x22205Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22205Cu;
        // 0x222060: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22205Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222064u;
}
