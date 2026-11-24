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

// Function: sub_003C8D10
// Address: 0x3c8d10 - 0x3c8e14
void sub_003C8D10_0x3c8d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C8D10_0x3c8d10");
#endif

    switch (ctx->pc) {
        case 0x3c8d24u: goto label_3c8d24;
        case 0x3c8d60u: goto label_3c8d60;
        default: break;
    }

    ctx->pc = 0x3c8d10u;

    // 0x3c8d10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3c8d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3c8d14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c8d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3c8d18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c8d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3c8d1c: 0xc0a4a1c  jal         func_292870
    ctx->pc = 0x3C8D1Cu;
    SET_GPR_U32(ctx, 31, 0x3C8D24u);
    ctx->pc = 0x3C8D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8D1Cu;
    // 0x3c8d20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292870u, 0x3C8D1Cu, 0x3C8D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8D24u;
label_3c8d24:
    // 0x3c8d24: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x3c8d24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x3c8d28: 0x24030b40  addiu       $v1, $zero, 0xB40
    ctx->pc = 0x3c8d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2880));
    // 0x3c8d2c: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x3c8d2cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x3c8d30: 0x1483001d  bne         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x3C8D30u;
    {
        const bool branch_taken_0x3c8d30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3C8D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8D30u;
        // 0x3c8d34: 0x3c01007e  lui         $at, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8d30) {
            ctx->pc = 0x3C8DA8u;
            goto label_3c8da8;
        }
    }
    ctx->pc = 0x3C8D38u;
    // 0x3c8d38: 0x24030063  addiu       $v1, $zero, 0x63
    ctx->pc = 0x3c8d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x3c8d3c: 0x90246ac8  lbu         $a0, 0x6AC8($at)
    ctx->pc = 0x3c8d3cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27336)));
    // 0x3c8d40: 0x14830019  bne         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x3C8D40u;
    {
        const bool branch_taken_0x3c8d40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3c8d40) {
            ctx->pc = 0x3C8DA8u;
            goto label_3c8da8;
        }
    }
    ctx->pc = 0x3C8D48u;
    // 0x3c8d48: 0x3c010067  lui         $at, 0x67
    ctx->pc = 0x3c8d48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)103 << 16));
    // 0x3c8d4c: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x3c8d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x3c8d50: 0x8c232924  lw          $v1, 0x2924($at)
    ctx->pc = 0x3c8d50u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x672924u));
    // 0x3c8d54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c8d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c8d58: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x3C8D58u;
    SET_GPR_U32(ctx, 31, 0x3C8D60u);
    ctx->pc = 0x3C8D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8D58u;
    // 0x3c8d5c: 0xa4430002  sh          $v1, 0x2($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x3C8D58u, 0x3C8D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8D60u;
label_3c8d60:
    // 0x3c8d60: 0x8e0329c0  lw          $v1, 0x29C0($s0)
    ctx->pc = 0x3c8d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x3c8d64: 0x3c010067  lui         $at, 0x67
    ctx->pc = 0x3c8d64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)103 << 16));
    // 0x3c8d68: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x3c8d68u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3c8d6c: 0x94232928  lhu         $v1, 0x2928($at)
    ctx->pc = 0x3c8d6cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x672928u));
    // 0x3c8d70: 0xa60329d6  sh          $v1, 0x29D6($s0)
    ctx->pc = 0x3c8d70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10710), (uint16_t)GPR_U32(ctx, 3));
    // 0x3c8d74: 0x3c010067  lui         $at, 0x67
    ctx->pc = 0x3c8d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)103 << 16));
    // 0x3c8d78: 0x9423292c  lhu         $v1, 0x292C($at)
    ctx->pc = 0x3c8d78u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x67292Cu));
    // 0x3c8d7c: 0xa60329d8  sh          $v1, 0x29D8($s0)
    ctx->pc = 0x3c8d7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10712), (uint16_t)GPR_U32(ctx, 3));
    // 0x3c8d80: 0x3c010067  lui         $at, 0x67
    ctx->pc = 0x3c8d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)103 << 16));
    // 0x3c8d84: 0x94232936  lhu         $v1, 0x2936($at)
    ctx->pc = 0x3c8d84u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x672936u));
    // 0x3c8d88: 0xa60329da  sh          $v1, 0x29DA($s0)
    ctx->pc = 0x3c8d88u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10714), (uint16_t)GPR_U32(ctx, 3));
    // 0x3c8d8c: 0x3c010067  lui         $at, 0x67
    ctx->pc = 0x3c8d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)103 << 16));
    // 0x3c8d90: 0x9023292e  lbu         $v1, 0x292E($at)
    ctx->pc = 0x3c8d90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x67292Eu));
    // 0x3c8d94: 0xa2032b06  sb          $v1, 0x2B06($s0)
    ctx->pc = 0x3c8d94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11014), (uint8_t)GPR_U32(ctx, 3));
    // 0x3c8d98: 0x3c010067  lui         $at, 0x67
    ctx->pc = 0x3c8d98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)103 << 16));
    // 0x3c8d9c: 0x90232935  lbu         $v1, 0x2935($at)
    ctx->pc = 0x3c8d9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x672935u));
    // 0x3c8da0: 0xa20329dd  sb          $v1, 0x29DD($s0)
    ctx->pc = 0x3c8da0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10717), (uint8_t)GPR_U32(ctx, 3));
    // 0x3c8da4: 0x0  nop
    ctx->pc = 0x3c8da4u;
    // NOP
label_3c8da8:
    // 0x3c8da8: 0xa2002b25  sb          $zero, 0x2B25($s0)
    ctx->pc = 0x3c8da8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11045), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c8dac: 0xae002b28  sw          $zero, 0x2B28($s0)
    ctx->pc = 0x3c8dacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11048), GPR_U32(ctx, 0));
    // 0x3c8db0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c8db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c8db4: 0xa6032b2c  sh          $v1, 0x2B2C($s0)
    ctx->pc = 0x3c8db4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11052), (uint16_t)GPR_U32(ctx, 3));
    // 0x3c8db8: 0x3c070800  lui         $a3, 0x800
    ctx->pc = 0x3c8db8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2048 << 16));
    // 0x3c8dbc: 0xa20029d1  sb          $zero, 0x29D1($s0)
    ctx->pc = 0x3c8dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10705), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c8dc0: 0x3c03ffcf  lui         $v1, 0xFFCF
    ctx->pc = 0x3c8dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65487 << 16));
    // 0x3c8dc4: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x3c8dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3c8dc8: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x3c8dc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3c8dcc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3c8dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3c8dd0: 0x8ca6007c  lw          $a2, 0x7C($a1)
    ctx->pc = 0x3c8dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 124)));
    // 0x3c8dd4: 0x8cc526c4  lw          $a1, 0x26C4($a2)
    ctx->pc = 0x3c8dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 9924)));
    // 0x3c8dd8: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x3c8dd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x3c8ddc: 0xacc526c4  sw          $a1, 0x26C4($a2)
    ctx->pc = 0x3c8ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 9924), GPR_U32(ctx, 5));
    // 0x3c8de0: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x3c8de0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3c8de4: 0x8ca6007c  lw          $a2, 0x7C($a1)
    ctx->pc = 0x3c8de4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 124)));
    // 0x3c8de8: 0x8cc528b4  lw          $a1, 0x28B4($a2)
    ctx->pc = 0x3c8de8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 10420)));
    // 0x3c8dec: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x3c8decu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x3c8df0: 0xacc528b4  sw          $a1, 0x28B4($a2)
    ctx->pc = 0x3c8df0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 10420), GPR_U32(ctx, 5));
    // 0x3c8df4: 0xae0404c4  sw          $a0, 0x4C4($s0)
    ctx->pc = 0x3c8df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1220), GPR_U32(ctx, 4));
    // 0x3c8df8: 0xae0404c8  sw          $a0, 0x4C8($s0)
    ctx->pc = 0x3c8df8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1224), GPR_U32(ctx, 4));
    // 0x3c8dfc: 0xae0404cc  sw          $a0, 0x4CC($s0)
    ctx->pc = 0x3c8dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1228), GPR_U32(ctx, 4));
    // 0x3c8e00: 0xa2030237  sb          $v1, 0x237($s0)
    ctx->pc = 0x3c8e00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 567), (uint8_t)GPR_U32(ctx, 3));
    // 0x3c8e04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c8e04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c8e08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c8e08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c8e0c: 0x3e00008  jr          $ra
    ctx->pc = 0x3C8E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C8E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8E0Cu;
        // 0x3c8e10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C8E0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C8E14u;
}
