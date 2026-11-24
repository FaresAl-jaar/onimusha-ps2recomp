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

// Function: sub_003E0ED0
// Address: 0x3e0ed0 - 0x3e0f68
void sub_003E0ED0_0x3e0ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E0ED0_0x3e0ed0");
#endif

    switch (ctx->pc) {
        case 0x3e0ed0u: goto label_3e0ed0;
        case 0x3e0ed4u: goto label_3e0ed4;
        case 0x3e0ed8u: goto label_3e0ed8;
        case 0x3e0edcu: goto label_3e0edc;
        case 0x3e0ee0u: goto label_3e0ee0;
        case 0x3e0ee4u: goto label_3e0ee4;
        case 0x3e0ee8u: goto label_3e0ee8;
        case 0x3e0eecu: goto label_3e0eec;
        case 0x3e0ef0u: goto label_3e0ef0;
        case 0x3e0ef4u: goto label_3e0ef4;
        case 0x3e0ef8u: goto label_3e0ef8;
        case 0x3e0efcu: goto label_3e0efc;
        case 0x3e0f00u: goto label_3e0f00;
        case 0x3e0f04u: goto label_3e0f04;
        case 0x3e0f08u: goto label_3e0f08;
        case 0x3e0f0cu: goto label_3e0f0c;
        case 0x3e0f10u: goto label_3e0f10;
        case 0x3e0f14u: goto label_3e0f14;
        case 0x3e0f18u: goto label_3e0f18;
        case 0x3e0f1cu: goto label_3e0f1c;
        case 0x3e0f20u: goto label_3e0f20;
        case 0x3e0f24u: goto label_3e0f24;
        case 0x3e0f28u: goto label_3e0f28;
        case 0x3e0f2cu: goto label_3e0f2c;
        case 0x3e0f30u: goto label_3e0f30;
        case 0x3e0f34u: goto label_3e0f34;
        case 0x3e0f38u: goto label_3e0f38;
        case 0x3e0f3cu: goto label_3e0f3c;
        case 0x3e0f40u: goto label_3e0f40;
        case 0x3e0f44u: goto label_3e0f44;
        case 0x3e0f48u: goto label_3e0f48;
        case 0x3e0f4cu: goto label_3e0f4c;
        case 0x3e0f50u: goto label_3e0f50;
        case 0x3e0f54u: goto label_3e0f54;
        case 0x3e0f58u: goto label_3e0f58;
        case 0x3e0f5cu: goto label_3e0f5c;
        case 0x3e0f60u: goto label_3e0f60;
        case 0x3e0f64u: goto label_3e0f64;
        default: break;
    }

    ctx->pc = 0x3e0ed0u;

label_3e0ed0:
    // 0x3e0ed0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3e0ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3e0ed4:
    // 0x3e0ed4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3e0ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3e0ed8:
    // 0x3e0ed8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e0ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3e0edc:
    // 0x3e0edc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e0edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3e0ee0:
    // 0x3e0ee0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e0ee0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e0ee4:
    // 0x3e0ee4: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
label_3e0ee8:
    if (ctx->pc == 0x3E0EE8u) {
        ctx->pc = 0x3E0EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0EE4u;
        // 0x3e0ee8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0EECu;
        goto label_3e0eec;
    }
    ctx->pc = 0x3E0EE4u;
    {
        const bool branch_taken_0x3e0ee4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0EE4u;
        // 0x3e0ee8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0ee4) {
            ctx->pc = 0x3E0F50u;
            goto label_3e0f50;
        }
    }
    ctx->pc = 0x3E0EECu;
label_3e0eec:
    // 0x3e0eec: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x3e0eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
label_3e0ef0:
    // 0x3e0ef0: 0x2442b0e0  addiu       $v0, $v0, -0x4F20
    ctx->pc = 0x3e0ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947040));
label_3e0ef4:
    // 0x3e0ef4: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x3e0ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
label_3e0ef8:
    // 0x3e0ef8: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x3e0ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_3e0efc:
    // 0x3e0efc: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_3e0f00:
    if (ctx->pc == 0x3E0F00u) {
        ctx->pc = 0x3E0F04u;
        goto label_3e0f04;
    }
    ctx->pc = 0x3E0EFCu;
    {
        const bool branch_taken_0x3e0efc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e0efc) {
            ctx->pc = 0x3E0F28u;
            goto label_3e0f28;
        }
    }
    ctx->pc = 0x3E0F04u;
label_3e0f04:
    // 0x3e0f04: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_3e0f08:
    if (ctx->pc == 0x3E0F08u) {
        ctx->pc = 0x3E0F0Cu;
        goto label_3e0f0c;
    }
    ctx->pc = 0x3E0F04u;
    {
        const bool branch_taken_0x3e0f04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e0f04) {
            ctx->pc = 0x3E0F20u;
            goto label_3e0f20;
        }
    }
    ctx->pc = 0x3E0F0Cu;
label_3e0f0c:
    // 0x3e0f0c: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x3e0f0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_3e0f10:
    // 0x3e0f10: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3e0f10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3e0f14:
    // 0x3e0f14: 0x320f809  jalr        $t9
label_3e0f18:
    if (ctx->pc == 0x3E0F18u) {
        ctx->pc = 0x3E0F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0F14u;
        // 0x3e0f18: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0F1Cu;
        goto label_3e0f1c;
    }
    ctx->pc = 0x3E0F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E0F1Cu);
        ctx->pc = 0x3E0F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0F14u;
        // 0x3e0f18: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E0F14u, 0x3E0F1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E0F1Cu;
label_3e0f1c:
    // 0x3e0f1c: 0x0  nop
    ctx->pc = 0x3e0f1cu;
    // NOP
label_3e0f20:
    // 0x3e0f20: 0xae2000b0  sw          $zero, 0xB0($s1)
    ctx->pc = 0x3e0f20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 0));
label_3e0f24:
    // 0x3e0f24: 0x0  nop
    ctx->pc = 0x3e0f24u;
    // NOP
label_3e0f28:
    // 0x3e0f28: 0xc0f8298  jal         func_3E0A60
label_3e0f2c:
    if (ctx->pc == 0x3E0F2Cu) {
        ctx->pc = 0x3E0F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0F28u;
        // 0x3e0f2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0F30u;
        goto label_3e0f30;
    }
    ctx->pc = 0x3E0F28u;
    SET_GPR_U32(ctx, 31, 0x3E0F30u);
    ctx->pc = 0x3E0F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0F28u;
    // 0x3e0f2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E0A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E0A60u, 0x3E0F28u, 0x3E0F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0F30u;
label_3e0f30:
    // 0x3e0f30: 0xc096b20  jal         func_25AC80
label_3e0f34:
    if (ctx->pc == 0x3E0F34u) {
        ctx->pc = 0x3E0F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0F30u;
        // 0x3e0f34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0F38u;
        goto label_3e0f38;
    }
    ctx->pc = 0x3E0F30u;
    SET_GPR_U32(ctx, 31, 0x3E0F38u);
    ctx->pc = 0x3E0F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0F30u;
    // 0x3e0f34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC80u, 0x3E0F30u, 0x3E0F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0F38u;
label_3e0f38:
    // 0x3e0f38: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3e0f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3e0f3c:
    // 0x3e0f3c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3e0f3cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3e0f40:
    // 0x3e0f40: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_3e0f44:
    if (ctx->pc == 0x3E0F44u) {
        ctx->pc = 0x3E0F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0F40u;
        // 0x3e0f44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0F48u;
        goto label_3e0f48;
    }
    ctx->pc = 0x3E0F40u;
    {
        const bool branch_taken_0x3e0f40 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x3E0F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0F40u;
        // 0x3e0f44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0f40) {
            ctx->pc = 0x3E0F50u;
            goto label_3e0f50;
        }
    }
    ctx->pc = 0x3E0F48u;
label_3e0f48:
    // 0x3e0f48: 0xc0741a8  jal         func_1D06A0
label_3e0f4c:
    if (ctx->pc == 0x3E0F4Cu) {
        ctx->pc = 0x3E0F50u;
        goto label_3e0f50;
    }
    ctx->pc = 0x3E0F48u;
    SET_GPR_U32(ctx, 31, 0x3E0F50u);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x3E0F48u, 0x3E0F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0F50u;
label_3e0f50:
    // 0x3e0f50: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3e0f50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e0f54:
    // 0x3e0f54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3e0f54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3e0f58:
    // 0x3e0f58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e0f58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e0f5c:
    // 0x3e0f5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e0f5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e0f60:
    // 0x3e0f60: 0x3e00008  jr          $ra
label_3e0f64:
    if (ctx->pc == 0x3E0F64u) {
        ctx->pc = 0x3E0F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0F60u;
        // 0x3e0f64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0F68u;
        goto label_fallthrough_0x3e0f60;
    }
    ctx->pc = 0x3E0F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E0F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0F60u;
        // 0x3e0f64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E0F60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3e0f60:
    ctx->pc = 0x3E0F68u;
}
