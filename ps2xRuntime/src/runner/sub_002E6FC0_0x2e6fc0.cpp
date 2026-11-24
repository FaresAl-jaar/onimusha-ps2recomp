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

// Function: sub_002E6FC0
// Address: 0x2e6fc0 - 0x2e7264
void sub_002E6FC0_0x2e6fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E6FC0_0x2e6fc0");
#endif

    switch (ctx->pc) {
        case 0x2e6fd8u: goto label_2e6fd8;
        case 0x2e7070u: goto label_2e7070;
        case 0x2e70d4u: goto label_2e70d4;
        case 0x2e7140u: goto label_2e7140;
        case 0x2e7154u: goto label_2e7154;
        case 0x2e720cu: goto label_2e720c;
        default: break;
    }

    ctx->pc = 0x2e6fc0u;

    // 0x2e6fc0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e6fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2e6fc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e6fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e6fc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e6fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e6fcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e6fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e6fd0: 0xc0b9be4  jal         func_2E6F90
    ctx->pc = 0x2E6FD0u;
    SET_GPR_U32(ctx, 31, 0x2E6FD8u);
    ctx->pc = 0x2E6FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6FD0u;
    // 0x2e6fd4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6F90u, 0x2E6FD0u, 0x2E6FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6FD8u;
label_2e6fd8:
    // 0x2e6fd8: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2E6FD8u;
    {
        const bool branch_taken_0x2e6fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e6fd8) {
            ctx->pc = 0x2E7030u;
            goto label_2e7030;
        }
    }
    ctx->pc = 0x2E6FE0u;
    // 0x2e6fe0: 0x92040821  lbu         $a0, 0x821($s0)
    ctx->pc = 0x2e6fe0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x2e6fe4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2e6fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e6fe8: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E6FE8u;
    {
        const bool branch_taken_0x2e6fe8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e6fe8) {
            ctx->pc = 0x2E7008u;
            goto label_2e7008;
        }
    }
    ctx->pc = 0x2E6FF0u;
    // 0x2e6ff0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E6FF0u;
    {
        const bool branch_taken_0x2e6ff0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6ff0) {
            ctx->pc = 0x2E7000u;
            goto label_2e7000;
        }
    }
    ctx->pc = 0x2E6FF8u;
    // 0x2e6ff8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E6FF8u;
    {
        const bool branch_taken_0x2e6ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6ff8) {
            ctx->pc = 0x2E7028u;
            goto label_2e7028;
        }
    }
    ctx->pc = 0x2E7000u;
label_2e7000:
    // 0x2e7000: 0xa6000826  sh          $zero, 0x826($s0)
    ctx->pc = 0x2e7000u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2086), (uint16_t)GPR_U32(ctx, 0));
    // 0x2e7004: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x2e7004u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_2e7008:
    // 0x2e7008: 0x96030826  lhu         $v1, 0x826($s0)
    ctx->pc = 0x2e7008u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2086)));
    // 0x2e700c: 0x1c600004  bgtz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E700Cu;
    {
        const bool branch_taken_0x2e700c = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x2e700c) {
            ctx->pc = 0x2E7020u;
            goto label_2e7020;
        }
    }
    ctx->pc = 0x2E7014u;
    // 0x2e7014: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e7014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e7018: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7018u;
    {
        const bool branch_taken_0x2e7018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E701Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7018u;
        // 0x2e701c: 0xa6030826  sh          $v1, 0x826($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2086), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7018) {
            ctx->pc = 0x2E7028u;
            goto label_2e7028;
        }
    }
    ctx->pc = 0x2E7020u;
label_2e7020:
    // 0x2e7020: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e7020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e7024: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x2e7024u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_2e7028:
    // 0x2e7028: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x2E7028u;
    {
        const bool branch_taken_0x2e7028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7028) {
            ctx->pc = 0x2E7250u;
            goto label_2e7250;
        }
    }
    ctx->pc = 0x2E7030u;
label_2e7030:
    // 0x2e7030: 0x92040821  lbu         $a0, 0x821($s0)
    ctx->pc = 0x2e7030u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x2e7034: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2e7034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e7038: 0x10830061  beq         $a0, $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x2E7038u;
    {
        const bool branch_taken_0x2e7038 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2E703Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7038u;
        // 0x2e703c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7038) {
            ctx->pc = 0x2E71C0u;
            goto label_2e71c0;
        }
    }
    ctx->pc = 0x2E7040u;
    // 0x2e7040: 0x1083005b  beq         $a0, $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x2E7040u;
    {
        const bool branch_taken_0x2e7040 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e7040) {
            ctx->pc = 0x2E71B0u;
            goto label_2e71b0;
        }
    }
    ctx->pc = 0x2E7048u;
    // 0x2e7048: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e7048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e704c: 0x1083001a  beq         $a0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2E704Cu;
    {
        const bool branch_taken_0x2e704c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e704c) {
            ctx->pc = 0x2E70B8u;
            goto label_2e70b8;
        }
    }
    ctx->pc = 0x2E7054u;
    // 0x2e7054: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E7054u;
    {
        const bool branch_taken_0x2e7054 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7054) {
            ctx->pc = 0x2E7068u;
            goto label_2e7068;
        }
    }
    ctx->pc = 0x2E705Cu;
    // 0x2e705c: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x2E705Cu;
    {
        const bool branch_taken_0x2e705c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e705c) {
            ctx->pc = 0x2E7250u;
            goto label_2e7250;
        }
    }
    ctx->pc = 0x2E7064u;
    // 0x2e7064: 0x0  nop
    ctx->pc = 0x2e7064u;
    // NOP
label_2e7068:
    // 0x2e7068: 0xc0b9bd0  jal         func_2E6F40
    ctx->pc = 0x2E7068u;
    SET_GPR_U32(ctx, 31, 0x2E7070u);
    ctx->pc = 0x2E706Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7068u;
    // 0x2e706c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6F40u, 0x2E7068u, 0x2E7070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7070u;
label_2e7070:
    // 0x2e7070: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7070u;
    {
        const bool branch_taken_0x2e7070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7070u;
        // 0x2e7074: 0x24030017  addiu       $v1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7070) {
            ctx->pc = 0x2E7080u;
            goto label_2e7080;
        }
    }
    ctx->pc = 0x2E7078u;
    // 0x2e7078: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x2E7078u;
    {
        const bool branch_taken_0x2e7078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E707Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7078u;
        // 0x2e707c: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7078) {
            ctx->pc = 0x2E7250u;
            goto label_2e7250;
        }
    }
    ctx->pc = 0x2E7080u;
label_2e7080:
    // 0x2e7080: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x2e7080u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e7084: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x2e7084u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e7088: 0x24030058  addiu       $v1, $zero, 0x58
    ctx->pc = 0x2e7088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x2e708c: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x2e708cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e7090: 0x3c038004  lui         $v1, 0x8004
    ctx->pc = 0x2e7090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32772 << 16));
    // 0x2e7094: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x2e7094u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e7098: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x2e7098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x2e709c: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x2e709cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x2e70a0: 0xa6000826  sh          $zero, 0x826($s0)
    ctx->pc = 0x2e70a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2086), (uint16_t)GPR_U32(ctx, 0));
    // 0x2e70a4: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x2e70a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x2e70a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e70a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e70ac: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x2E70ACu;
    {
        const bool branch_taken_0x2e70ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E70B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E70ACu;
        // 0x2e70b0: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e70ac) {
            ctx->pc = 0x2E7250u;
            goto label_2e7250;
        }
    }
    ctx->pc = 0x2E70B4u;
    // 0x2e70b4: 0x0  nop
    ctx->pc = 0x2e70b4u;
    // NOP
label_2e70b8:
    // 0x2e70b8: 0x96040826  lhu         $a0, 0x826($s0)
    ctx->pc = 0x2e70b8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2086)));
    // 0x2e70bc: 0x28830026  slti        $v1, $a0, 0x26
    ctx->pc = 0x2e70bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)38) ? 1 : 0);
    // 0x2e70c0: 0x14600037  bnez        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x2E70C0u;
    {
        const bool branch_taken_0x2e70c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e70c0) {
            ctx->pc = 0x2E71A0u;
            goto label_2e71a0;
        }
    }
    ctx->pc = 0x2E70C8u;
    // 0x2e70c8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2e70c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e70cc: 0xc0b9b5c  jal         func_2E6D70
    ctx->pc = 0x2E70CCu;
    SET_GPR_U32(ctx, 31, 0x2E70D4u);
    ctx->pc = 0x2E70D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E70CCu;
    // 0x2e70d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6D70u, 0x2E70CCu, 0x2E70D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E70D4u;
label_2e70d4:
    // 0x2e70d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e70d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e70d8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2e70d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e70dc: 0xa3a20040  sb          $v0, 0x40($sp)
    ctx->pc = 0x2e70dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e70e0: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x2e70e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e70e4: 0x92072b64  lbu         $a3, 0x2B64($s0)
    ctx->pc = 0x2e70e4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11108)));
    // 0x2e70e8: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x2e70e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e70ec: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2e70ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e70f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e70f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e70f4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2e70f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2e70f8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2e70f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e70fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e70fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7100: 0xa3a70041  sb          $a3, 0x41($sp)
    ctx->pc = 0x2e7100u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 65), (uint8_t)GPR_U32(ctx, 7));
    // 0x2e7104: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x2e7104u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2e7108: 0xa7a60058  sh          $a2, 0x58($sp)
    ctx->pc = 0x2e7108u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 88), (uint16_t)GPR_U32(ctx, 6));
    // 0x2e710c: 0xe7a1004c  swc1        $f1, 0x4C($sp)
    ctx->pc = 0x2e710cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2e7110: 0xa3a30043  sb          $v1, 0x43($sp)
    ctx->pc = 0x2e7110u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 67), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e7114: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2e7114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2e7118: 0xa3a20046  sb          $v0, 0x46($sp)
    ctx->pc = 0x2e7118u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 70), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e711c: 0xa3a00042  sb          $zero, 0x42($sp)
    ctx->pc = 0x2e711cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 66), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e7120: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x2e7120u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e7124: 0xa3a00045  sb          $zero, 0x45($sp)
    ctx->pc = 0x2e7124u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 69), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e7128: 0x860200c2  lh          $v0, 0xC2($s0)
    ctx->pc = 0x2e7128u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x2e712c: 0xa7a20054  sh          $v0, 0x54($sp)
    ctx->pc = 0x2e712cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 84), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e7130: 0xa3a00056  sb          $zero, 0x56($sp)
    ctx->pc = 0x2e7130u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 86), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e7134: 0xa3a00047  sb          $zero, 0x47($sp)
    ctx->pc = 0x2e7134u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 71), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e7138: 0xc09a5a0  jal         func_269680
    ctx->pc = 0x2E7138u;
    SET_GPR_U32(ctx, 31, 0x2E7140u);
    ctx->pc = 0x2E713Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7138u;
    // 0x2e713c: 0xa3a00057  sb          $zero, 0x57($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 87), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269680u, 0x2E7138u, 0x2E7140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7140u;
label_2e7140:
    // 0x2e7140: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e7140u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7144: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x2E7144u;
    {
        const bool branch_taken_0x2e7144 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7144u;
        // 0x2e7148: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7144) {
            ctx->pc = 0x2E7180u;
            goto label_2e7180;
        }
    }
    ctx->pc = 0x2E714Cu;
    // 0x2e714c: 0xc0d2dc0  jal         func_34B700
    ctx->pc = 0x2E714Cu;
    SET_GPR_U32(ctx, 31, 0x2E7154u);
    ctx->pc = 0x2E7150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E714Cu;
    // 0x2e7150: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34B700u, 0x2E714Cu, 0x2E7154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7154u;
label_2e7154:
    // 0x2e7154: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2e7154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2e7158: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x2e7158u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x2e715c: 0x24636920  addiu       $v1, $v1, 0x6920
    ctx->pc = 0x2e715cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26912));
    // 0x2e7160: 0xae042b60  sw          $a0, 0x2B60($s0)
    ctx->pc = 0x2e7160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11104), GPR_U32(ctx, 4));
    // 0x2e7164: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2e7164u;
    { uint32_t bits = FAST_READ32(0x4E6920u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e7168: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2e7168u;
    { uint32_t bits = FAST_READ32(0x4E6924u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e716c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2e716cu;
    { uint32_t bits = FAST_READ32(0x4E6928u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7170: 0xe60206a0  swc1        $f2, 0x6A0($s0)
    ctx->pc = 0x2e7170u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1696), bits); }
    // 0x2e7174: 0xe60106a4  swc1        $f1, 0x6A4($s0)
    ctx->pc = 0x2e7174u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1700), bits); }
    // 0x2e7178: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7178u;
    {
        const bool branch_taken_0x2e7178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E717Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7178u;
        // 0x2e717c: 0xe60006a8  swc1        $f0, 0x6A8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1704), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7178) {
            ctx->pc = 0x2E7188u;
            goto label_2e7188;
        }
    }
    ctx->pc = 0x2E7180u;
label_2e7180:
    // 0x2e7180: 0xae002b60  sw          $zero, 0x2B60($s0)
    ctx->pc = 0x2e7180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11104), GPR_U32(ctx, 0));
    // 0x2e7184: 0x0  nop
    ctx->pc = 0x2e7184u;
    // NOP
label_2e7188:
    // 0x2e7188: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x2e7188u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x2e718c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e718cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e7190: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x2e7190u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e7194: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2E7194u;
    {
        const bool branch_taken_0x2e7194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7194u;
        // 0x2e7198: 0xa6000826  sh          $zero, 0x826($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2086), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7194) {
            ctx->pc = 0x2E7250u;
            goto label_2e7250;
        }
    }
    ctx->pc = 0x2E719Cu;
    // 0x2e719c: 0x0  nop
    ctx->pc = 0x2e719cu;
    // NOP
label_2e71a0:
    // 0x2e71a0: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x2e71a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2e71a4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2E71A4u;
    {
        const bool branch_taken_0x2e71a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E71A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E71A4u;
        // 0x2e71a8: 0xa6030826  sh          $v1, 0x826($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2086), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e71a4) {
            ctx->pc = 0x2E7250u;
            goto label_2e7250;
        }
    }
    ctx->pc = 0x2E71ACu;
    // 0x2e71ac: 0x0  nop
    ctx->pc = 0x2e71acu;
    // NOP
label_2e71b0:
    // 0x2e71b0: 0xa6000826  sh          $zero, 0x826($s0)
    ctx->pc = 0x2e71b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2086), (uint16_t)GPR_U32(ctx, 0));
    // 0x2e71b4: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x2e71b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x2e71b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e71b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e71bc: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x2e71bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_2e71c0:
    // 0x2e71c0: 0x96030826  lhu         $v1, 0x826($s0)
    ctx->pc = 0x2e71c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2086)));
    // 0x2e71c4: 0x28630074  slti        $v1, $v1, 0x74
    ctx->pc = 0x2e71c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)116) ? 1 : 0);
    // 0x2e71c8: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2E71C8u;
    {
        const bool branch_taken_0x2e71c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e71c8) {
            ctx->pc = 0x2E7220u;
            goto label_2e7220;
        }
    }
    ctx->pc = 0x2E71D0u;
    // 0x2e71d0: 0x8e032b60  lw          $v1, 0x2B60($s0)
    ctx->pc = 0x2e71d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11104)));
    // 0x2e71d4: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2E71D4u;
    {
        const bool branch_taken_0x2e71d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e71d4) {
            ctx->pc = 0x2E7220u;
            goto label_2e7220;
        }
    }
    ctx->pc = 0x2E71DCu;
    // 0x2e71dc: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x2e71dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x2e71e0: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2e71e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2e71e4: 0x2442c250  addiu       $v0, $v0, -0x3DB0
    ctx->pc = 0x2e71e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951504));
    // 0x2e71e8: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2e71e8u;
    { uint32_t bits = FAST_READ32(0x68C250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e71ec: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2e71ecu;
    { uint32_t bits = FAST_READ32(0x68C254u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e71f0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2e71f0u;
    { uint32_t bits = FAST_READ32(0x68C258u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e71f4: 0xe60206a0  swc1        $f2, 0x6A0($s0)
    ctx->pc = 0x2e71f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1696), bits); }
    // 0x2e71f8: 0xe60106a4  swc1        $f1, 0x6A4($s0)
    ctx->pc = 0x2e71f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1700), bits); }
    // 0x2e71fc: 0xe60006a8  swc1        $f0, 0x6A8($s0)
    ctx->pc = 0x2e71fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1704), bits); }
    // 0x2e7200: 0x8e052b60  lw          $a1, 0x2B60($s0)
    ctx->pc = 0x2e7200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11104)));
    // 0x2e7204: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x2E7204u;
    SET_GPR_U32(ctx, 31, 0x2E720Cu);
    ctx->pc = 0x2E7208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7204u;
    // 0x2e7208: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2E7204u, 0x2E720Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E720Cu;
label_2e720c:
    // 0x2e720c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E720Cu;
    {
        const bool branch_taken_0x2e720c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e720c) {
            ctx->pc = 0x2E7218u;
            goto label_2e7218;
        }
    }
    ctx->pc = 0x2E7214u;
    // 0x2e7214: 0xac402b60  sw          $zero, 0x2B60($v0)
    ctx->pc = 0x2e7214u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 11104), GPR_U32(ctx, 0));
label_2e7218:
    // 0x2e7218: 0xae002b60  sw          $zero, 0x2B60($s0)
    ctx->pc = 0x2e7218u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11104), GPR_U32(ctx, 0));
    // 0x2e721c: 0x0  nop
    ctx->pc = 0x2e721cu;
    // NOP
label_2e7220:
    // 0x2e7220: 0x96030826  lhu         $v1, 0x826($s0)
    ctx->pc = 0x2e7220u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2086)));
    // 0x2e7224: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e7224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e7228: 0xa6030826  sh          $v1, 0x826($s0)
    ctx->pc = 0x2e7228u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2086), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e722c: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x2e722cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x2e7230: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E7230u;
    {
        const bool branch_taken_0x2e7230 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7230) {
            ctx->pc = 0x2E7250u;
            goto label_2e7250;
        }
    }
    ctx->pc = 0x2E7238u;
    // 0x2e7238: 0xa6000826  sh          $zero, 0x826($s0)
    ctx->pc = 0x2e7238u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2086), (uint16_t)GPR_U32(ctx, 0));
    // 0x2e723c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e723cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e7240: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x2e7240u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e7244: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x2e7244u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x2e7248: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e7248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e724c: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x2e724cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_2e7250:
    // 0x2e7250: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e7250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e7254: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e7254u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e7258: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e7258u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e725c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E725Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E7260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E725Cu;
        // 0x2e7260: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E725Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E7264u;
}
