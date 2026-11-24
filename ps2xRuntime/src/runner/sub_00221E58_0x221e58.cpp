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

// Function: sub_00221E58
// Address: 0x221e58 - 0x221f78
void sub_00221E58_0x221e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221E58_0x221e58");
#endif

    switch (ctx->pc) {
        case 0x221e84u: goto label_221e84;
        case 0x221e90u: goto label_221e90;
        case 0x221eacu: goto label_221eac;
        case 0x221eb8u: goto label_221eb8;
        case 0x221ec8u: goto label_221ec8;
        case 0x221ee4u: goto label_221ee4;
        case 0x221ef0u: goto label_221ef0;
        case 0x221f00u: goto label_221f00;
        case 0x221f1cu: goto label_221f1c;
        case 0x221f28u: goto label_221f28;
        case 0x221f38u: goto label_221f38;
        case 0x221f48u: goto label_221f48;
        default: break;
    }

    ctx->pc = 0x221e58u;

    // 0x221e58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x221e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x221e5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x221e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x221e60: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x221e60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221e64: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x221e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x221e68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x221e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x221e6c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x221e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x221e70: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x221E70u;
    {
        const bool branch_taken_0x221e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221E70u;
        // 0x221e74: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221e70) {
            ctx->pc = 0x221E98u;
            goto label_221e98;
        }
    }
    ctx->pc = 0x221E78u;
    // 0x221e78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x221e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221e7c: 0xc088872  jal         func_2221C8
    ctx->pc = 0x221E7Cu;
    SET_GPR_U32(ctx, 31, 0x221E84u);
    ctx->pc = 0x221E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221E7Cu;
    // 0x221e80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2221C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2221C8u, 0x221E7Cu, 0x221E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221E84u;
label_221e84:
    // 0x221e84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x221e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221e88: 0xc0887de  jal         func_221F78
    ctx->pc = 0x221E88u;
    SET_GPR_U32(ctx, 31, 0x221E90u);
    ctx->pc = 0x221E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221E88u;
    // 0x221e8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221F78u, 0x221E88u, 0x221E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221E90u;
label_221e90:
    // 0x221e90: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x221E90u;
    {
        const bool branch_taken_0x221e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221E90u;
        // 0x221e94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221e90) {
            ctx->pc = 0x221F64u;
            goto label_221f64;
        }
    }
    ctx->pc = 0x221E98u;
label_221e98:
    // 0x221e98: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x221e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x221e9c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x221E9Cu;
    {
        const bool branch_taken_0x221e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221E9Cu;
        // 0x221ea0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221e9c) {
            ctx->pc = 0x221ED0u;
            goto label_221ed0;
        }
    }
    ctx->pc = 0x221EA4u;
    // 0x221ea4: 0xc088872  jal         func_2221C8
    ctx->pc = 0x221EA4u;
    SET_GPR_U32(ctx, 31, 0x221EACu);
    ctx->pc = 0x221EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221EA4u;
    // 0x221ea8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2221C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2221C8u, 0x221EA4u, 0x221EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221EACu;
label_221eac:
    // 0x221eac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x221eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221eb0: 0xc08881a  jal         func_222068
    ctx->pc = 0x221EB0u;
    SET_GPR_U32(ctx, 31, 0x221EB8u);
    ctx->pc = 0x221EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221EB0u;
    // 0x221eb4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222068u, 0x221EB0u, 0x221EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221EB8u;
label_221eb8:
    // 0x221eb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x221eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221ebc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x221ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x221ec0: 0xc087e5e  jal         func_21F978
    ctx->pc = 0x221EC0u;
    SET_GPR_U32(ctx, 31, 0x221EC8u);
    ctx->pc = 0x221EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221EC0u;
    // 0x221ec4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F978u, 0x221EC0u, 0x221EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221EC8u;
label_221ec8:
    // 0x221ec8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x221EC8u;
    {
        const bool branch_taken_0x221ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221EC8u;
        // 0x221ecc: 0xae200bb4  sw          $zero, 0xBB4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2996), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221ec8) {
            ctx->pc = 0x221F60u;
            goto label_221f60;
        }
    }
    ctx->pc = 0x221ED0u;
label_221ed0:
    // 0x221ed0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x221ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x221ed4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x221ED4u;
    {
        const bool branch_taken_0x221ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221ED4u;
        // 0x221ed8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221ed4) {
            ctx->pc = 0x221F08u;
            goto label_221f08;
        }
    }
    ctx->pc = 0x221EDCu;
    // 0x221edc: 0xc088872  jal         func_2221C8
    ctx->pc = 0x221EDCu;
    SET_GPR_U32(ctx, 31, 0x221EE4u);
    ctx->pc = 0x221EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221EDCu;
    // 0x221ee0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2221C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2221C8u, 0x221EDCu, 0x221EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221EE4u;
label_221ee4:
    // 0x221ee4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x221ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221ee8: 0xc088842  jal         func_222108
    ctx->pc = 0x221EE8u;
    SET_GPR_U32(ctx, 31, 0x221EF0u);
    ctx->pc = 0x221EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221EE8u;
    // 0x221eec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222108u, 0x221EE8u, 0x221EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221EF0u;
label_221ef0:
    // 0x221ef0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x221ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221ef4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x221ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x221ef8: 0xc087e5e  jal         func_21F978
    ctx->pc = 0x221EF8u;
    SET_GPR_U32(ctx, 31, 0x221F00u);
    ctx->pc = 0x221EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221EF8u;
    // 0x221efc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F978u, 0x221EF8u, 0x221F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221F00u;
label_221f00:
    // 0x221f00: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x221F00u;
    {
        const bool branch_taken_0x221f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221F00u;
        // 0x221f04: 0xae200bb0  sw          $zero, 0xBB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2992), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221f00) {
            ctx->pc = 0x221F60u;
            goto label_221f60;
        }
    }
    ctx->pc = 0x221F08u;
label_221f08:
    // 0x221f08: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x221f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x221f0c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x221F0Cu;
    {
        const bool branch_taken_0x221f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221F0Cu;
        // 0x221f10: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221f0c) {
            ctx->pc = 0x221F58u;
            goto label_221f58;
        }
    }
    ctx->pc = 0x221F14u;
    // 0x221f14: 0xc088872  jal         func_2221C8
    ctx->pc = 0x221F14u;
    SET_GPR_U32(ctx, 31, 0x221F1Cu);
    ctx->pc = 0x221F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221F14u;
    // 0x221f18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2221C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2221C8u, 0x221F14u, 0x221F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221F1Cu;
label_221f1c:
    // 0x221f1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x221f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221f20: 0xc08886a  jal         func_2221A8
    ctx->pc = 0x221F20u;
    SET_GPR_U32(ctx, 31, 0x221F28u);
    ctx->pc = 0x221F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221F20u;
    // 0x221f24: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2221A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2221A8u, 0x221F20u, 0x221F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221F28u;
label_221f28:
    // 0x221f28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x221f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221f2c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x221f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x221f30: 0xc087e5e  jal         func_21F978
    ctx->pc = 0x221F30u;
    SET_GPR_U32(ctx, 31, 0x221F38u);
    ctx->pc = 0x221F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221F30u;
    // 0x221f34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F978u, 0x221F30u, 0x221F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221F38u;
label_221f38:
    // 0x221f38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x221f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221f3c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x221f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x221f40: 0xc087e5e  jal         func_21F978
    ctx->pc = 0x221F40u;
    SET_GPR_U32(ctx, 31, 0x221F48u);
    ctx->pc = 0x221F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221F40u;
    // 0x221f44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F978u, 0x221F40u, 0x221F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221F48u;
label_221f48:
    // 0x221f48: 0xae200bb4  sw          $zero, 0xBB4($s1)
    ctx->pc = 0x221f48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2996), GPR_U32(ctx, 0));
    // 0x221f4c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x221F4Cu;
    {
        const bool branch_taken_0x221f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221F4Cu;
        // 0x221f50: 0xae200bb0  sw          $zero, 0xBB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2992), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221f4c) {
            ctx->pc = 0x221F60u;
            goto label_221f60;
        }
    }
    ctx->pc = 0x221F54u;
    // 0x221f54: 0x0  nop
    ctx->pc = 0x221f54u;
    // NOP
label_221f58:
    // 0x221f58: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x221F58u;
    {
        const bool branch_taken_0x221f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221F58u;
        // 0x221f5c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221f58) {
            ctx->pc = 0x221F64u;
            goto label_221f64;
        }
    }
    ctx->pc = 0x221F60u;
label_221f60:
    // 0x221f60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x221f60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_221f64:
    // 0x221f64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x221f64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221f68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x221f68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x221f6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x221f6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221f70: 0x3e00008  jr          $ra
    ctx->pc = 0x221F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221F70u;
        // 0x221f74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221F70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221F78u;
}
