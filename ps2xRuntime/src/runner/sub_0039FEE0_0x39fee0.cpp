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

// Function: sub_0039FEE0
// Address: 0x39fee0 - 0x3a01a4
void sub_0039FEE0_0x39fee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039FEE0_0x39fee0");
#endif

    switch (ctx->pc) {
        case 0x39ff0cu: goto label_39ff0c;
        case 0x39ff1cu: goto label_39ff1c;
        case 0x39ff28u: goto label_39ff28;
        case 0x39ff44u: goto label_39ff44;
        case 0x39ff4cu: goto label_39ff4c;
        case 0x39ff58u: goto label_39ff58;
        case 0x39ff68u: goto label_39ff68;
        case 0x39ff70u: goto label_39ff70;
        case 0x39ffa4u: goto label_39ffa4;
        case 0x39ffacu: goto label_39ffac;
        case 0x39ffb8u: goto label_39ffb8;
        case 0x39ffc8u: goto label_39ffc8;
        case 0x39ffd0u: goto label_39ffd0;
        case 0x39fff0u: goto label_39fff0;
        case 0x3a0008u: goto label_3a0008;
        case 0x3a0054u: goto label_3a0054;
        case 0x3a0060u: goto label_3a0060;
        case 0x3a0070u: goto label_3a0070;
        case 0x3a007cu: goto label_3a007c;
        case 0x3a00b8u: goto label_3a00b8;
        case 0x3a00c0u: goto label_3a00c0;
        case 0x3a00e4u: goto label_3a00e4;
        case 0x3a00f8u: goto label_3a00f8;
        case 0x3a0100u: goto label_3a0100;
        case 0x3a0108u: goto label_3a0108;
        case 0x3a0120u: goto label_3a0120;
        case 0x3a0130u: goto label_3a0130;
        case 0x3a014cu: goto label_3a014c;
        case 0x3a0164u: goto label_3a0164;
        case 0x3a018cu: goto label_3a018c;
        default: break;
    }

    ctx->pc = 0x39fee0u;

    // 0x39fee0: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x39fee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
    // 0x39fee4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x39fee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x39fee8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x39fee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x39feec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39feecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x39fef0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39fef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x39fef4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x39fef4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39fef8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x39fef8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39fefc: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x39fefcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x39ff00: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x39ff00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x39ff04: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x39FF04u;
    SET_GPR_U32(ctx, 31, 0x39FF0Cu);
    ctx->pc = 0x39FF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FF04u;
    // 0x39ff08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x39FF04u, 0x39FF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FF0Cu;
label_39ff0c:
    // 0x39ff0c: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x39ff0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x39ff10: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x39ff10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39ff14: 0xc04ca14  jal         func_132850
    ctx->pc = 0x39FF14u;
    SET_GPR_U32(ctx, 31, 0x39FF1Cu);
    ctx->pc = 0x39FF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FF14u;
    // 0x39ff18: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132850u, 0x39FF14u, 0x39FF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FF1Cu;
label_39ff1c:
    // 0x39ff1c: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x39ff1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x39ff20: 0xc0f0140  jal         func_3C0500
    ctx->pc = 0x39FF20u;
    SET_GPR_U32(ctx, 31, 0x39FF28u);
    ctx->pc = 0x39FF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FF20u;
    // 0x39ff24: 0x2484fee0  addiu       $a0, $a0, -0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0500u, 0x39FF20u, 0x39FF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FF28u;
label_39ff28:
    // 0x39ff28: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x39ff28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x39ff2c: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x39ff2cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
    // 0x39ff30: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x39ff30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x39ff34: 0x24052ec4  addiu       $a1, $zero, 0x2EC4
    ctx->pc = 0x39ff34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11972));
    // 0x39ff38: 0x24c6fea0  addiu       $a2, $a2, -0x160
    ctx->pc = 0x39ff38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966944));
    // 0x39ff3c: 0xc054d34  jal         func_1534D0
    ctx->pc = 0x39FF3Cu;
    SET_GPR_U32(ctx, 31, 0x39FF44u);
    ctx->pc = 0x39FF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FF3Cu;
    // 0x39ff40: 0x24e7fe80  addiu       $a3, $a3, -0x180 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1534D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1534D0u, 0x39FF3Cu, 0x39FF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FF44u;
label_39ff44:
    // 0x39ff44: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x39FF44u;
    SET_GPR_U32(ctx, 31, 0x39FF4Cu);
    ctx->pc = 0x39FF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FF44u;
    // 0x39ff48: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x39FF44u, 0x39FF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FF4Cu;
label_39ff4c:
    // 0x39ff4c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x39FF4Cu;
    {
        const bool branch_taken_0x39ff4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39ff4c) {
            ctx->pc = 0x39FF78u;
            goto label_39ff78;
        }
    }
    ctx->pc = 0x39FF54u;
    // 0x39ff54: 0x0  nop
    ctx->pc = 0x39ff54u;
    // NOP
label_39ff58:
    // 0x39ff58: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x39ff58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x39ff5c: 0x2484fca0  addiu       $a0, $a0, -0x360
    ctx->pc = 0x39ff5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    // 0x39ff60: 0xc04c918  jal         func_132460
    ctx->pc = 0x39FF60u;
    SET_GPR_U32(ctx, 31, 0x39FF68u);
    ctx->pc = 0x39FF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FF60u;
    // 0x39ff64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x39FF60u, 0x39FF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FF68u;
label_39ff68:
    // 0x39ff68: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x39FF68u;
    SET_GPR_U32(ctx, 31, 0x39FF70u);
    ctx->pc = 0x39FF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FF68u;
    // 0x39ff6c: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x39FF68u, 0x39FF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FF70u;
label_39ff70:
    // 0x39ff70: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x39FF70u;
    {
        const bool branch_taken_0x39ff70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39ff70) {
            ctx->pc = 0x39FF58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39ff58;
        }
    }
    ctx->pc = 0x39FF78u;
label_39ff78:
    // 0x39ff78: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x39ff78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x39ff7c: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x39ff7cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x39ff80: 0x24424b50  addiu       $v0, $v0, 0x4B50
    ctx->pc = 0x39ff80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19280));
    // 0x39ff84: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x39ff84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x39ff88: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x39ff88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x39ff8c: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x39ff8cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x39ff90: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x39ff90u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
    // 0x39ff94: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x39ff94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x39ff98: 0x24c6fea0  addiu       $a2, $a2, -0x160
    ctx->pc = 0x39ff98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966944));
    // 0x39ff9c: 0xc054d34  jal         func_1534D0
    ctx->pc = 0x39FF9Cu;
    SET_GPR_U32(ctx, 31, 0x39FFA4u);
    ctx->pc = 0x39FFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FF9Cu;
    // 0x39ffa0: 0x24e7fe80  addiu       $a3, $a3, -0x180 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1534D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1534D0u, 0x39FF9Cu, 0x39FFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FFA4u;
label_39ffa4:
    // 0x39ffa4: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x39FFA4u;
    SET_GPR_U32(ctx, 31, 0x39FFACu);
    ctx->pc = 0x39FFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FFA4u;
    // 0x39ffa8: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x39FFA4u, 0x39FFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FFACu;
label_39ffac:
    // 0x39ffac: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x39FFACu;
    {
        const bool branch_taken_0x39ffac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39ffac) {
            ctx->pc = 0x39FFD8u;
            goto label_39ffd8;
        }
    }
    ctx->pc = 0x39FFB4u;
    // 0x39ffb4: 0x0  nop
    ctx->pc = 0x39ffb4u;
    // NOP
label_39ffb8:
    // 0x39ffb8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x39ffb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x39ffbc: 0x2484fca0  addiu       $a0, $a0, -0x360
    ctx->pc = 0x39ffbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    // 0x39ffc0: 0xc04c918  jal         func_132460
    ctx->pc = 0x39FFC0u;
    SET_GPR_U32(ctx, 31, 0x39FFC8u);
    ctx->pc = 0x39FFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FFC0u;
    // 0x39ffc4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x39FFC0u, 0x39FFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FFC8u;
label_39ffc8:
    // 0x39ffc8: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x39FFC8u;
    SET_GPR_U32(ctx, 31, 0x39FFD0u);
    ctx->pc = 0x39FFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FFC8u;
    // 0x39ffcc: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x39FFC8u, 0x39FFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FFD0u;
label_39ffd0:
    // 0x39ffd0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x39FFD0u;
    {
        const bool branch_taken_0x39ffd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39ffd0) {
            ctx->pc = 0x39FFB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39ffb8;
        }
    }
    ctx->pc = 0x39FFD8u;
label_39ffd8:
    // 0x39ffd8: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x39ffd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x39ffdc: 0x24424b54  addiu       $v0, $v0, 0x4B54
    ctx->pc = 0x39ffdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19284));
    // 0x39ffe0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x39ffe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x39ffe4: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x39ffe4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x39ffe8: 0xc0ca98c  jal         func_32A630
    ctx->pc = 0x39FFE8u;
    SET_GPR_U32(ctx, 31, 0x39FFF0u);
    ctx->pc = 0x39FFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FFE8u;
    // 0x39ffec: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A630u, 0x39FFE8u, 0x39FFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FFF0u;
label_39fff0:
    // 0x39fff0: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x39fff0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x39fff4: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x39fff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x39fff8: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x39fff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x39fffc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x39fffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a0000: 0xc04cd28  jal         func_1334A0
    ctx->pc = 0x3A0000u;
    SET_GPR_U32(ctx, 31, 0x3A0008u);
    ctx->pc = 0x3A0004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0000u;
    // 0x3a0004: 0x34468012  ori         $a2, $v0, 0x8012 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32786);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A0u, 0x3A0000u, 0x3A0008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0008u;
label_3a0008:
    // 0x3a0008: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x3a0008u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x3a000c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3a000cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a0010: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x3a0010u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a0014: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x3a0014u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x3a0018: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x3a0018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x3a001c: 0xa2200005  sb          $zero, 0x5($s1)
    ctx->pc = 0x3a001cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a0020: 0x24424b52  addiu       $v0, $v0, 0x4B52
    ctx->pc = 0x3a0020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19282));
    // 0x3a0024: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x3a0024u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a0028: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3a0028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3a002c: 0xa2200004  sb          $zero, 0x4($s1)
    ctx->pc = 0x3a002cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a0030: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x3a0030u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x3a0034: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3a0034u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x3a0038: 0xa2200003  sb          $zero, 0x3($s1)
    ctx->pc = 0x3a0038u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a003c: 0x94500000  lhu         $s0, 0x0($v0)
    ctx->pc = 0x3a003cu;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a0040: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3A0040u;
    {
        const bool branch_taken_0x3a0040 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0040u;
        // 0x3a0044: 0x3c040091  lui         $a0, 0x91 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0040) {
            ctx->pc = 0x3A0098u;
            goto label_3a0098;
        }
    }
    ctx->pc = 0x3A0048u;
    // 0x3a0048: 0x3205ffff  andi        $a1, $s0, 0xFFFF
    ctx->pc = 0x3a0048u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x3a004c: 0xc0ce618  jal         func_339860
    ctx->pc = 0x3A004Cu;
    SET_GPR_U32(ctx, 31, 0x3A0054u);
    ctx->pc = 0x3A0050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A004Cu;
    // 0x3a0050: 0x24844060  addiu       $a0, $a0, 0x4060 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339860u, 0x3A004Cu, 0x3A0054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0054u;
label_3a0054:
    // 0x3a0054: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3A0054u;
    {
        const bool branch_taken_0x3a0054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0054u;
        // 0x3a0058: 0x24120e10  addiu       $s2, $zero, 0xE10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0054) {
            ctx->pc = 0x3A0070u;
            goto label_3a0070;
        }
    }
    ctx->pc = 0x3A005Cu;
    // 0x3a005c: 0x0  nop
    ctx->pc = 0x3a005cu;
    // NOP
label_3a0060:
    // 0x3a0060: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3a0060u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3a0064: 0x2484fca0  addiu       $a0, $a0, -0x360
    ctx->pc = 0x3a0064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    // 0x3a0068: 0xc04c918  jal         func_132460
    ctx->pc = 0x3A0068u;
    SET_GPR_U32(ctx, 31, 0x3A0070u);
    ctx->pc = 0x3A006Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0068u;
    // 0x3a006c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x3A0068u, 0x3A0070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0070u;
label_3a0070:
    // 0x3a0070: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3a0070u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3a0074: 0xc0ce624  jal         func_339890
    ctx->pc = 0x3A0074u;
    SET_GPR_U32(ctx, 31, 0x3A007Cu);
    ctx->pc = 0x3A0078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0074u;
    // 0x3a0078: 0x24844060  addiu       $a0, $a0, 0x4060 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339890u, 0x3A0074u, 0x3A007Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A007Cu;
label_3a007c:
    // 0x3a007c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A007Cu;
    {
        const bool branch_taken_0x3a007c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a007c) {
            ctx->pc = 0x3A0098u;
            goto label_3a0098;
        }
    }
    ctx->pc = 0x3A0084u;
    // 0x3a0084: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x3a0084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x3a0088: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x3a0088u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3a008c: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x3a008cu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x3a0090: 0x1640fff3  bnez        $s2, . + 4 + (-0xD << 2)
    ctx->pc = 0x3A0090u;
    {
        const bool branch_taken_0x3a0090 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a0090) {
            ctx->pc = 0x3A0060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a0060;
        }
    }
    ctx->pc = 0x3A0098u;
label_3a0098:
    // 0x3a0098: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3a0098u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3a009c: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x3a009cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x3a00a0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3a00a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3a00a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a00a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a00a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a00a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a00ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3a00acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a00b0: 0xc063c70  jal         func_18F1C0
    ctx->pc = 0x3A00B0u;
    SET_GPR_U32(ctx, 31, 0x3A00B8u);
    ctx->pc = 0x3A00B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A00B0u;
    // 0x3a00b4: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F1C0u, 0x3A00B0u, 0x3A00B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A00B8u;
label_3a00b8:
    // 0x3a00b8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3A00B8u;
    {
        const bool branch_taken_0x3a00b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a00b8) {
            ctx->pc = 0x3A0130u;
            goto label_3a0130;
        }
    }
    ctx->pc = 0x3A00C0u;
label_3a00c0:
    // 0x3a00c0: 0x82220003  lb          $v0, 0x3($s1)
    ctx->pc = 0x3a00c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x3a00c4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A00C4u;
    {
        const bool branch_taken_0x3a00c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A00C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A00C4u;
        // 0x3a00c8: 0x3c01008f  lui         $at, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a00c4) {
            ctx->pc = 0x3A00E8u;
            goto label_3a00e8;
        }
    }
    ctx->pc = 0x3A00CCu;
    // 0x3a00cc: 0x8c22ea24  lw          $v0, -0x15DC($at)
    ctx->pc = 0x3a00ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961700)));
    // 0x3a00d0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x3a00d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x3a00d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A00D4u;
    {
        const bool branch_taken_0x3a00d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A00D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A00D4u;
        // 0x3a00d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a00d4) {
            ctx->pc = 0x3A00E8u;
            goto label_3a00e8;
        }
    }
    ctx->pc = 0x3A00DCu;
    // 0x3a00dc: 0xc0e8198  jal         func_3A0660
    ctx->pc = 0x3A00DCu;
    SET_GPR_U32(ctx, 31, 0x3A00E4u);
    ctx->pc = 0x3A0660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0660u, 0x3A00DCu, 0x3A00E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A00E4u;
label_3a00e4:
    // 0x3a00e4: 0x0  nop
    ctx->pc = 0x3a00e4u;
    // NOP
label_3a00e8:
    // 0x3a00e8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x3a00e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3a00ec: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3a00ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3a00f0: 0xc0caa44  jal         func_32A910
    ctx->pc = 0x3A00F0u;
    SET_GPR_U32(ctx, 31, 0x3A00F8u);
    ctx->pc = 0x3A00F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A00F0u;
    // 0x3a00f4: 0x22842  srl         $a1, $v0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A910u, 0x3A00F0u, 0x3A00F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A00F8u;
label_3a00f8:
    // 0x3a00f8: 0xc0e80f4  jal         func_3A03D0
    ctx->pc = 0x3A00F8u;
    SET_GPR_U32(ctx, 31, 0x3A0100u);
    ctx->pc = 0x3A00FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A00F8u;
    // 0x3a00fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A03D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A03D0u, 0x3A00F8u, 0x3A0100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0100u;
label_3a0100:
    // 0x3a0100: 0xc0e8094  jal         func_3A0250
    ctx->pc = 0x3A0100u;
    SET_GPR_U32(ctx, 31, 0x3A0108u);
    ctx->pc = 0x3A0104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0100u;
    // 0x3a0104: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0250u, 0x3A0100u, 0x3A0108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0108u;
label_3a0108:
    // 0x3a0108: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x3a0108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3a010c: 0x3c040081  lui         $a0, 0x81
    ctx->pc = 0x3a010cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
    // 0x3a0110: 0x248495a0  addiu       $a0, $a0, -0x6A60
    ctx->pc = 0x3a0110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940064));
    // 0x3a0114: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a0114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3a0118: 0xc056234  jal         func_1588D0
    ctx->pc = 0x3A0118u;
    SET_GPR_U32(ctx, 31, 0x3A0120u);
    ctx->pc = 0x3A011Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0118u;
    // 0x3a011c: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1588D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1588D0u, 0x3A0118u, 0x3A0120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0120u;
label_3a0120:
    // 0x3a0120: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3a0120u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3a0124: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a0124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a0128: 0xc04c918  jal         func_132460
    ctx->pc = 0x3A0128u;
    SET_GPR_U32(ctx, 31, 0x3A0130u);
    ctx->pc = 0x3A012Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0128u;
    // 0x3a012c: 0x2484fca0  addiu       $a0, $a0, -0x360 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x3A0128u, 0x3A0130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0130u;
label_3a0130:
    // 0x3a0130: 0x82220003  lb          $v0, 0x3($s1)
    ctx->pc = 0x3a0130u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x3a0134: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3a0134u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3a0138: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3a0138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3a013c: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x3A013Cu;
    {
        const bool branch_taken_0x3a013c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A0140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A013Cu;
        // 0x3a0140: 0x3c040083  lui         $a0, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a013c) {
            ctx->pc = 0x3A00C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a00c0;
        }
    }
    ctx->pc = 0x3A0144u;
    // 0x3a0144: 0xc063d48  jal         func_18F520
    ctx->pc = 0x3A0144u;
    SET_GPR_U32(ctx, 31, 0x3A014Cu);
    ctx->pc = 0x3A0148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0144u;
    // 0x3a0148: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x3A0144u, 0x3A014Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A014Cu;
label_3a014c:
    // 0x3a014c: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x3A014Cu;
    {
        const bool branch_taken_0x3a014c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a014c) {
            ctx->pc = 0x3A00C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a00c0;
        }
    }
    ctx->pc = 0x3A0154u;
    // 0x3a0154: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A0154u;
    {
        const bool branch_taken_0x3a0154 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0154u;
        // 0x3a0158: 0x3c040091  lui         $a0, 0x91 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0154) {
            ctx->pc = 0x3A0168u;
            goto label_3a0168;
        }
    }
    ctx->pc = 0x3A015Cu;
    // 0x3a015c: 0xc0ce63c  jal         func_3398F0
    ctx->pc = 0x3A015Cu;
    SET_GPR_U32(ctx, 31, 0x3A0164u);
    ctx->pc = 0x3A0160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A015Cu;
    // 0x3a0160: 0x24844060  addiu       $a0, $a0, 0x4060 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3398F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3398F0u, 0x3A015Cu, 0x3A0164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0164u;
label_3a0164:
    // 0x3a0164: 0x0  nop
    ctx->pc = 0x3a0164u;
    // NOP
label_3a0168:
    // 0x3a0168: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3a0168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3a016c: 0x9022feea  lbu         $v0, -0x116($at)
    ctx->pc = 0x3a016cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x92FEEAu));
    // 0x3a0170: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3a0170u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3a0174: 0x2484fca0  addiu       $a0, $a0, -0x360
    ctx->pc = 0x3a0174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    // 0x3a0178: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3a0178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a017c: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x3a017cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
    // 0x3a0180: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3a0180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3a0184: 0xc04c918  jal         func_132460
    ctx->pc = 0x3A0184u;
    SET_GPR_U32(ctx, 31, 0x3A018Cu);
    ctx->pc = 0x3A0188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0184u;
    // 0x3a0188: 0xa022feea  sb          $v0, -0x116($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294967018), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x3A0184u, 0x3A018Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A018Cu;
label_3a018c:
    // 0x3a018c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3a018cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a0190: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3a0190u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a0194: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a0194u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a0198: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a0198u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a019c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A019Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A01A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A019Cu;
        // 0x3a01a0: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A019Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A01A4u;
}
