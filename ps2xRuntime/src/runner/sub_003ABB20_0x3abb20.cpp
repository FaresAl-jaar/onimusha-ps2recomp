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

// Function: sub_003ABB20
// Address: 0x3abb20 - 0x3abbd4
void sub_003ABB20_0x3abb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ABB20_0x3abb20");
#endif

    switch (ctx->pc) {
        case 0x3abb6cu: goto label_3abb6c;
        case 0x3abb8cu: goto label_3abb8c;
        case 0x3abba0u: goto label_3abba0;
        case 0x3abbbcu: goto label_3abbbc;
        default: break;
    }

    ctx->pc = 0x3abb20u;

    // 0x3abb20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3abb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3abb24: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3abb24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3abb28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3abb28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3abb2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3abb2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3abb30: 0x8c230fc0  lw          $v1, 0xFC0($at)
    ctx->pc = 0x3abb30u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x810FC0u));
    // 0x3abb34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3abb34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3abb38: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3abb38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x3abb3c: 0x90226c10  lbu         $v0, 0x6C10($at)
    ctx->pc = 0x3abb3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x8D6C10u));
    // 0x3abb40: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3abb40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3abb44: 0xac239da0  sw          $v1, -0x6260($at)
    ctx->pc = 0x3abb44u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x929DA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x929DA0u, _value); } while (0);
    // 0x3abb48: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3abb48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3abb4c: 0xa0229da6  sb          $v0, -0x625A($at)
    ctx->pc = 0x3abb4cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x929DA6u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x929DA6u, _value); } while (0);
    // 0x3abb50: 0x94820044  lhu         $v0, 0x44($a0)
    ctx->pc = 0x3abb50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x3abb54: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3abb54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3abb58: 0xa4229da4  sh          $v0, -0x625C($at)
    ctx->pc = 0x3abb58u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x929DA4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x929DA4u, _value); } while (0);
    // 0x3abb5c: 0x9082005a  lbu         $v0, 0x5A($a0)
    ctx->pc = 0x3abb5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 90)));
    // 0x3abb60: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3abb60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3abb64: 0xc0f56e4  jal         func_3D5B90
    ctx->pc = 0x3ABB64u;
    SET_GPR_U32(ctx, 31, 0x3ABB6Cu);
    ctx->pc = 0x3ABB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABB64u;
    // 0x3abb68: 0xa0229da7  sb          $v0, -0x6259($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942119), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D5B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5B90u, 0x3ABB64u, 0x3ABB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABB6Cu;
label_3abb6c:
    // 0x3abb6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3abb6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3abb70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3ABB70u;
    {
        const bool branch_taken_0x3abb70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABB70u;
        // 0x3abb74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abb70) {
            ctx->pc = 0x3ABB80u;
            goto label_3abb80;
        }
    }
    ctx->pc = 0x3ABB78u;
    // 0x3abb78: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x3abb78u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3abb7c: 0x94460002  lhu         $a2, 0x2($v0)
    ctx->pc = 0x3abb7cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_3abb80:
    // 0x3abb80: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x3abb80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x3abb84: 0xc0f54d0  jal         func_3D5340
    ctx->pc = 0x3ABB84u;
    SET_GPR_U32(ctx, 31, 0x3ABB8Cu);
    ctx->pc = 0x3ABB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABB84u;
    // 0x3abb88: 0x24849db0  addiu       $a0, $a0, -0x6250 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D5340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5340u, 0x3ABB84u, 0x3ABB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABB8Cu;
label_3abb8c:
    // 0x3abb8c: 0x3c050093  lui         $a1, 0x93
    ctx->pc = 0x3abb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)147 << 16));
    // 0x3abb90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3abb90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3abb94: 0x24a59da0  addiu       $a1, $a1, -0x6260
    ctx->pc = 0x3abb94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942112));
    // 0x3abb98: 0xc0eb0c4  jal         func_3AC310
    ctx->pc = 0x3ABB98u;
    SET_GPR_U32(ctx, 31, 0x3ABBA0u);
    ctx->pc = 0x3ABB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABB98u;
    // 0x3abb9c: 0x24065eb0  addiu       $a2, $zero, 0x5EB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC310u, 0x3ABB98u, 0x3ABBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABBA0u;
label_3abba0:
    // 0x3abba0: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3abba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3abba4: 0x3c050093  lui         $a1, 0x93
    ctx->pc = 0x3abba4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)147 << 16));
    // 0x3abba8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3abba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3abbac: 0xac22fc48  sw          $v0, -0x3B8($at)
    ctx->pc = 0x3abbacu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x92FC48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FC48u, _value); } while (0);
    // 0x3abbb0: 0x24a59da0  addiu       $a1, $a1, -0x6260
    ctx->pc = 0x3abbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942112));
    // 0x3abbb4: 0xc0eb0f4  jal         func_3AC3D0
    ctx->pc = 0x3ABBB4u;
    SET_GPR_U32(ctx, 31, 0x3ABBBCu);
    ctx->pc = 0x3ABBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABBB4u;
    // 0x3abbb8: 0x24065eb0  addiu       $a2, $zero, 0x5EB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC3D0u, 0x3ABBB4u, 0x3ABBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABBBCu;
label_3abbbc:
    // 0x3abbbc: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3abbbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3abbc0: 0xac22fc4c  sw          $v0, -0x3B4($at)
    ctx->pc = 0x3abbc0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x92FC4Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FC4Cu, _value); } while (0);
    // 0x3abbc4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3abbc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3abbc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3abbc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3abbcc: 0x3e00008  jr          $ra
    ctx->pc = 0x3ABBCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ABBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABBCCu;
        // 0x3abbd0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ABBCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ABBD4u;
}
