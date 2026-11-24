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

// Function: sub_00373EB0
// Address: 0x373eb0 - 0x374000
void sub_00373EB0_0x373eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373EB0_0x373eb0");
#endif

    switch (ctx->pc) {
        case 0x373eccu: goto label_373ecc;
        case 0x373ee0u: goto label_373ee0;
        case 0x373f10u: goto label_373f10;
        case 0x373f24u: goto label_373f24;
        case 0x373f38u: goto label_373f38;
        case 0x373f40u: goto label_373f40;
        case 0x373f4cu: goto label_373f4c;
        case 0x373f58u: goto label_373f58;
        case 0x373f78u: goto label_373f78;
        case 0x373f80u: goto label_373f80;
        case 0x373f8cu: goto label_373f8c;
        case 0x373f98u: goto label_373f98;
        case 0x373facu: goto label_373fac;
        case 0x373fb8u: goto label_373fb8;
        case 0x373fc4u: goto label_373fc4;
        case 0x373fd0u: goto label_373fd0;
        case 0x373fdcu: goto label_373fdc;
        case 0x373fe8u: goto label_373fe8;
        default: break;
    }

    ctx->pc = 0x373eb0u;

    // 0x373eb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x373eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x373eb4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x373eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x373eb8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x373eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x373ebc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x373ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x373ec0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x373ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x373ec4: 0xc0c0858  jal         func_302160
    ctx->pc = 0x373EC4u;
    SET_GPR_U32(ctx, 31, 0x373ECCu);
    ctx->pc = 0x373EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373EC4u;
    // 0x373ec8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302160u, 0x373EC4u, 0x373ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373ECCu;
label_373ecc:
    // 0x373ecc: 0x8e050518  lw          $a1, 0x518($s0)
    ctx->pc = 0x373eccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1304)));
    // 0x373ed0: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x373ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x373ed4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x373ed4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373ed8: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x373ED8u;
    SET_GPR_U32(ctx, 31, 0x373EE0u);
    ctx->pc = 0x373EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373ED8u;
    // 0x373edc: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x373ED8u, 0x373EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373EE0u;
label_373ee0:
    // 0x373ee0: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x373EE0u;
    {
        const bool branch_taken_0x373ee0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x373EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373EE0u;
        // 0x373ee4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373ee0) {
            ctx->pc = 0x373F00u;
            goto label_373f00;
        }
    }
    ctx->pc = 0x373EE8u;
    // 0x373ee8: 0x8e4229c0  lw          $v0, 0x29C0($s2)
    ctx->pc = 0x373ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10688)));
    // 0x373eec: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x373eecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x373ef0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x373EF0u;
    {
        const bool branch_taken_0x373ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x373EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373EF0u;
        // 0x373ef4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373ef0) {
            ctx->pc = 0x373F00u;
            goto label_373f00;
        }
    }
    ctx->pc = 0x373EF8u;
    // 0x373ef8: 0xa642056e  sh          $v0, 0x56E($s2)
    ctx->pc = 0x373ef8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1390), (uint16_t)GPR_U32(ctx, 2));
    // 0x373efc: 0x0  nop
    ctx->pc = 0x373efcu;
    // NOP
label_373f00:
    // 0x373f00: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x373F00u;
    {
        const bool branch_taken_0x373f00 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x373F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373F00u;
        // 0x373f04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373f00) {
            ctx->pc = 0x373F28u;
            goto label_373f28;
        }
    }
    ctx->pc = 0x373F08u;
    // 0x373f08: 0xc0c085c  jal         func_302170
    ctx->pc = 0x373F08u;
    SET_GPR_U32(ctx, 31, 0x373F10u);
    ctx->pc = 0x302170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302170u, 0x373F08u, 0x373F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373F10u;
label_373f10:
    // 0x373f10: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x373f10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x373f14: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x373f14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373f18: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x373f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x373f1c: 0xc097674  jal         func_25D9D0
    ctx->pc = 0x373F1Cu;
    SET_GPR_U32(ctx, 31, 0x373F24u);
    ctx->pc = 0x373F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373F1Cu;
    // 0x373f20: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D9D0u, 0x373F1Cu, 0x373F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373F24u;
label_373f24:
    // 0x373f24: 0x0  nop
    ctx->pc = 0x373f24u;
    // NOP
label_373f28:
    // 0x373f28: 0x1640000d  bnez        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x373F28u;
    {
        const bool branch_taken_0x373f28 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x373f28) {
            ctx->pc = 0x373F60u;
            goto label_373f60;
        }
    }
    ctx->pc = 0x373F30u;
    // 0x373f30: 0xc096c4c  jal         func_25B130
    ctx->pc = 0x373F30u;
    SET_GPR_U32(ctx, 31, 0x373F38u);
    ctx->pc = 0x373F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373F30u;
    // 0x373f34: 0x8e040560  lw          $a0, 0x560($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1376)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x373F30u, 0x373F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373F38u;
label_373f38:
    // 0x373f38: 0xc096c4c  jal         func_25B130
    ctx->pc = 0x373F38u;
    SET_GPR_U32(ctx, 31, 0x373F40u);
    ctx->pc = 0x373F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373F38u;
    // 0x373f3c: 0x8e040564  lw          $a0, 0x564($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x373F38u, 0x373F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373F40u;
label_373f40:
    // 0x373f40: 0x8e050568  lw          $a1, 0x568($s0)
    ctx->pc = 0x373f40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1384)));
    // 0x373f44: 0xc0c0844  jal         func_302110
    ctx->pc = 0x373F44u;
    SET_GPR_U32(ctx, 31, 0x373F4Cu);
    ctx->pc = 0x373F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373F44u;
    // 0x373f48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x373F44u, 0x373F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373F4Cu;
label_373f4c:
    // 0x373f4c: 0x8e05056c  lw          $a1, 0x56C($s0)
    ctx->pc = 0x373f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1388)));
    // 0x373f50: 0xc0c0844  jal         func_302110
    ctx->pc = 0x373F50u;
    SET_GPR_U32(ctx, 31, 0x373F58u);
    ctx->pc = 0x373F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373F50u;
    // 0x373f54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x373F50u, 0x373F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373F58u;
label_373f58:
    // 0x373f58: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x373F58u;
    {
        const bool branch_taken_0x373f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x373f58) {
            ctx->pc = 0x373FE8u;
            goto label_373fe8;
        }
    }
    ctx->pc = 0x373F60u;
label_373f60:
    // 0x373f60: 0x8e4206ac  lw          $v0, 0x6AC($s2)
    ctx->pc = 0x373f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1708)));
    // 0x373f64: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x373f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x373f68: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x373F68u;
    {
        const bool branch_taken_0x373f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x373f68) {
            ctx->pc = 0x373FA0u;
            goto label_373fa0;
        }
    }
    ctx->pc = 0x373F70u;
    // 0x373f70: 0xc096c4c  jal         func_25B130
    ctx->pc = 0x373F70u;
    SET_GPR_U32(ctx, 31, 0x373F78u);
    ctx->pc = 0x373F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373F70u;
    // 0x373f74: 0x8e040560  lw          $a0, 0x560($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1376)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x373F70u, 0x373F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373F78u;
label_373f78:
    // 0x373f78: 0xc096c4c  jal         func_25B130
    ctx->pc = 0x373F78u;
    SET_GPR_U32(ctx, 31, 0x373F80u);
    ctx->pc = 0x373F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373F78u;
    // 0x373f7c: 0x8e040564  lw          $a0, 0x564($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x373F78u, 0x373F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373F80u;
label_373f80:
    // 0x373f80: 0x8e050568  lw          $a1, 0x568($s0)
    ctx->pc = 0x373f80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1384)));
    // 0x373f84: 0xc0c0844  jal         func_302110
    ctx->pc = 0x373F84u;
    SET_GPR_U32(ctx, 31, 0x373F8Cu);
    ctx->pc = 0x373F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373F84u;
    // 0x373f88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x373F84u, 0x373F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373F8Cu;
label_373f8c:
    // 0x373f8c: 0x8e05056c  lw          $a1, 0x56C($s0)
    ctx->pc = 0x373f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1388)));
    // 0x373f90: 0xc0c0844  jal         func_302110
    ctx->pc = 0x373F90u;
    SET_GPR_U32(ctx, 31, 0x373F98u);
    ctx->pc = 0x373F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373F90u;
    // 0x373f94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x373F90u, 0x373F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373F98u;
label_373f98:
    // 0x373f98: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x373F98u;
    {
        const bool branch_taken_0x373f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x373f98) {
            ctx->pc = 0x373FE8u;
            goto label_373fe8;
        }
    }
    ctx->pc = 0x373FA0u;
label_373fa0:
    // 0x373fa0: 0x8e050560  lw          $a1, 0x560($s0)
    ctx->pc = 0x373fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1376)));
    // 0x373fa4: 0xc0c0844  jal         func_302110
    ctx->pc = 0x373FA4u;
    SET_GPR_U32(ctx, 31, 0x373FACu);
    ctx->pc = 0x373FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373FA4u;
    // 0x373fa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x373FA4u, 0x373FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373FACu;
label_373fac:
    // 0x373fac: 0x8e050564  lw          $a1, 0x564($s0)
    ctx->pc = 0x373facu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x373fb0: 0xc0c0844  jal         func_302110
    ctx->pc = 0x373FB0u;
    SET_GPR_U32(ctx, 31, 0x373FB8u);
    ctx->pc = 0x373FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373FB0u;
    // 0x373fb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x373FB0u, 0x373FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373FB8u;
label_373fb8:
    // 0x373fb8: 0x8e050568  lw          $a1, 0x568($s0)
    ctx->pc = 0x373fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1384)));
    // 0x373fbc: 0xc0c0844  jal         func_302110
    ctx->pc = 0x373FBCu;
    SET_GPR_U32(ctx, 31, 0x373FC4u);
    ctx->pc = 0x373FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373FBCu;
    // 0x373fc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x373FBCu, 0x373FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373FC4u;
label_373fc4:
    // 0x373fc4: 0x8e05056c  lw          $a1, 0x56C($s0)
    ctx->pc = 0x373fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1388)));
    // 0x373fc8: 0xc0c0844  jal         func_302110
    ctx->pc = 0x373FC8u;
    SET_GPR_U32(ctx, 31, 0x373FD0u);
    ctx->pc = 0x373FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373FC8u;
    // 0x373fcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x373FC8u, 0x373FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373FD0u;
label_373fd0:
    // 0x373fd0: 0x8e040560  lw          $a0, 0x560($s0)
    ctx->pc = 0x373fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1376)));
    // 0x373fd4: 0xc096c7c  jal         func_25B1F0
    ctx->pc = 0x373FD4u;
    SET_GPR_U32(ctx, 31, 0x373FDCu);
    ctx->pc = 0x373FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373FD4u;
    // 0x373fd8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B1F0u, 0x373FD4u, 0x373FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373FDCu;
label_373fdc:
    // 0x373fdc: 0x8e040564  lw          $a0, 0x564($s0)
    ctx->pc = 0x373fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x373fe0: 0xc096c7c  jal         func_25B1F0
    ctx->pc = 0x373FE0u;
    SET_GPR_U32(ctx, 31, 0x373FE8u);
    ctx->pc = 0x373FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373FE0u;
    // 0x373fe4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B1F0u, 0x373FE0u, 0x373FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373FE8u;
label_373fe8:
    // 0x373fe8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x373fe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x373fec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x373fecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x373ff0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x373ff0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x373ff4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x373ff4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x373ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x373FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373FF8u;
        // 0x373ffc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373FF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374000u;
}
