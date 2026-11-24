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

// Function: sub_00352AA0
// Address: 0x352aa0 - 0x352ebc
void sub_00352AA0_0x352aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00352AA0_0x352aa0");
#endif

    switch (ctx->pc) {
        case 0x352b14u: goto label_352b14;
        case 0x352b28u: goto label_352b28;
        case 0x352b7cu: goto label_352b7c;
        case 0x352b8cu: goto label_352b8c;
        case 0x352b9cu: goto label_352b9c;
        case 0x352bb8u: goto label_352bb8;
        case 0x352bd4u: goto label_352bd4;
        case 0x352c18u: goto label_352c18;
        case 0x352c30u: goto label_352c30;
        case 0x352ce8u: goto label_352ce8;
        case 0x352d00u: goto label_352d00;
        case 0x352d18u: goto label_352d18;
        case 0x352d50u: goto label_352d50;
        case 0x352d80u: goto label_352d80;
        case 0x352d90u: goto label_352d90;
        case 0x352dfcu: goto label_352dfc;
        case 0x352ea8u: goto label_352ea8;
        default: break;
    }

    ctx->pc = 0x352aa0u;

    // 0x352aa0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x352aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x352aa4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x352aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x352aa8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x352aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x352aac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x352aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x352ab0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x352ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x352ab4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x352ab4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352ab8: 0x90850521  lbu         $a1, 0x521($a0)
    ctx->pc = 0x352ab8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x352abc: 0x10a300ac  beq         $a1, $v1, . + 4 + (0xAC << 2)
    ctx->pc = 0x352ABCu;
    {
        const bool branch_taken_0x352abc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x352AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352ABCu;
        // 0x352ac0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352abc) {
            ctx->pc = 0x352D70u;
            goto label_352d70;
        }
    }
    ctx->pc = 0x352AC4u;
    // 0x352ac4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x352ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x352ac8: 0x10a30089  beq         $a1, $v1, . + 4 + (0x89 << 2)
    ctx->pc = 0x352AC8u;
    {
        const bool branch_taken_0x352ac8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x352ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352AC8u;
        // 0x352acc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352ac8) {
            ctx->pc = 0x352CF0u;
            goto label_352cf0;
        }
    }
    ctx->pc = 0x352AD0u;
    // 0x352ad0: 0x10a30021  beq         $a1, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x352AD0u;
    {
        const bool branch_taken_0x352ad0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x352ad0) {
            ctx->pc = 0x352B58u;
            goto label_352b58;
        }
    }
    ctx->pc = 0x352AD8u;
    // 0x352ad8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x352ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x352adc: 0x10a30016  beq         $a1, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x352ADCu;
    {
        const bool branch_taken_0x352adc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x352adc) {
            ctx->pc = 0x352B38u;
            goto label_352b38;
        }
    }
    ctx->pc = 0x352AE4u;
    // 0x352ae4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x352AE4u;
    {
        const bool branch_taken_0x352ae4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x352ae4) {
            ctx->pc = 0x352AF8u;
            goto label_352af8;
        }
    }
    ctx->pc = 0x352AECu;
    // 0x352aec: 0x100000ee  b           . + 4 + (0xEE << 2)
    ctx->pc = 0x352AECu;
    {
        const bool branch_taken_0x352aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x352aec) {
            ctx->pc = 0x352EA8u;
            goto label_352ea8;
        }
    }
    ctx->pc = 0x352AF4u;
    // 0x352af4: 0x0  nop
    ctx->pc = 0x352af4u;
    // NOP
label_352af8:
    // 0x352af8: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x352AF8u;
    {
        const bool branch_taken_0x352af8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x352af8) {
            ctx->pc = 0x352B20u;
            goto label_352b20;
        }
    }
    ctx->pc = 0x352B00u;
    // 0x352b00: 0x8e06085c  lw          $a2, 0x85C($s0)
    ctx->pc = 0x352b00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2140)));
    // 0x352b04: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x352b04u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x352b08: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x352b08u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x352b0c: 0xc0a9888  jal         func_2A6220
    ctx->pc = 0x352B0Cu;
    SET_GPR_U32(ctx, 31, 0x352B14u);
    ctx->pc = 0x352B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352B0Cu;
    // 0x352b10: 0x26270020  addiu       $a3, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6220u, 0x352B0Cu, 0x352B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352B14u;
label_352b14:
    // 0x352b14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x352B14u;
    {
        const bool branch_taken_0x352b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x352B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352B14u;
        // 0x352b18: 0xae220550  sw          $v0, 0x550($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352b14) {
            ctx->pc = 0x352B28u;
            goto label_352b28;
        }
    }
    ctx->pc = 0x352B1Cu;
    // 0x352b1c: 0x0  nop
    ctx->pc = 0x352b1cu;
    // NOP
label_352b20:
    // 0x352b20: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x352B20u;
    SET_GPR_U32(ctx, 31, 0x352B28u);
    ctx->pc = 0x352B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352B20u;
    // 0x352b24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x352B20u, 0x352B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352B28u;
label_352b28:
    // 0x352b28: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x352b28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x352b2c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x352b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x352b30: 0x100000dd  b           . + 4 + (0xDD << 2)
    ctx->pc = 0x352B30u;
    {
        const bool branch_taken_0x352b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x352B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352B30u;
        // 0x352b34: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352b30) {
            ctx->pc = 0x352EA8u;
            goto label_352ea8;
        }
    }
    ctx->pc = 0x352B38u;
label_352b38:
    // 0x352b38: 0x86220526  lh          $v0, 0x526($s1)
    ctx->pc = 0x352b38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1318)));
    // 0x352b3c: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x352b3cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x352b40: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x352b40u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x352b44: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x352b44u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x352b48: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x352b48u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x352b4c: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x352b4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x352b50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x352b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x352b54: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x352b54u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_352b58:
    // 0x352b58: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x352b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x352b5c: 0x34438885  ori         $v1, $v0, 0x8885
    ctx->pc = 0x352b5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x352b60: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x352b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x352b64: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x352b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x352b68: 0x26250090  addiu       $a1, $s1, 0x90
    ctx->pc = 0x352b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x352b6c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x352b6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x352b70: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x352b70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x352b74: 0xc07681c  jal         func_1DA070
    ctx->pc = 0x352B74u;
    SET_GPR_U32(ctx, 31, 0x352B7Cu);
    ctx->pc = 0x352B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352B74u;
    // 0x352b78: 0x262600a0  addiu       $a2, $s1, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA070u, 0x352B74u, 0x352B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352B7Cu;
label_352b7c:
    // 0x352b7c: 0x8e260550  lw          $a2, 0x550($s1)
    ctx->pc = 0x352b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
    // 0x352b80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x352b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352b84: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x352B84u;
    SET_GPR_U32(ctx, 31, 0x352B8Cu);
    ctx->pc = 0x352B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352B84u;
    // 0x352b88: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x352B84u, 0x352B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352B8Cu;
label_352b8c:
    // 0x352b8c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x352B8Cu;
    {
        const bool branch_taken_0x352b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x352B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352B8Cu;
        // 0x352b90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352b8c) {
            ctx->pc = 0x352BA0u;
            goto label_352ba0;
        }
    }
    ctx->pc = 0x352B94u;
    // 0x352b94: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x352B94u;
    SET_GPR_U32(ctx, 31, 0x352B9Cu);
    ctx->pc = 0x352B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352B94u;
    // 0x352b98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x352B94u, 0x352B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352B9Cu;
label_352b9c:
    // 0x352b9c: 0x0  nop
    ctx->pc = 0x352b9cu;
    // NOP
label_352ba0:
    // 0x352ba0: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x352ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x352ba4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x352ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x352ba8: 0x24a55c70  addiu       $a1, $a1, 0x5C70
    ctx->pc = 0x352ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23664));
    // 0x352bac: 0x26260090  addiu       $a2, $s1, 0x90
    ctx->pc = 0x352bacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x352bb0: 0xc097384  jal         func_25CE10
    ctx->pc = 0x352BB0u;
    SET_GPR_U32(ctx, 31, 0x352BB8u);
    ctx->pc = 0x352BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352BB0u;
    // 0x352bb4: 0x26270020  addiu       $a3, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CE10u, 0x352BB0u, 0x352BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352BB8u;
label_352bb8:
    // 0x352bb8: 0x92260558  lbu         $a2, 0x558($s1)
    ctx->pc = 0x352bb8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1368)));
    // 0x352bbc: 0xc62c0554  lwc1        $f12, 0x554($s1)
    ctx->pc = 0x352bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x352bc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x352bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352bc4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x352bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x352bc8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x352bc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352bcc: 0xc0c0900  jal         func_302400
    ctx->pc = 0x352BCCu;
    SET_GPR_U32(ctx, 31, 0x352BD4u);
    ctx->pc = 0x352BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352BCCu;
    // 0x352bd0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x352BCCu, 0x352BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352BD4u;
label_352bd4:
    // 0x352bd4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x352BD4u;
    {
        const bool branch_taken_0x352bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x352bd4) {
            ctx->pc = 0x352BF0u;
            goto label_352bf0;
        }
    }
    ctx->pc = 0x352BDCu;
    // 0x352bdc: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x352bdcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x352be0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x352be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x352be4: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x352BE4u;
    {
        const bool branch_taken_0x352be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x352BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352BE4u;
        // 0x352be8: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352be4) {
            ctx->pc = 0x352EA8u;
            goto label_352ea8;
        }
    }
    ctx->pc = 0x352BECu;
    // 0x352bec: 0x0  nop
    ctx->pc = 0x352becu;
    // NOP
label_352bf0:
    // 0x352bf0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x352bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x352bf4: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x352bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x352bf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x352bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352bfc: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x352bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x352c00: 0x26260080  addiu       $a2, $s1, 0x80
    ctx->pc = 0x352c00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x352c04: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x352c04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x352c08: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x352c08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x352c0c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x352c0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x352c10: 0xc0c0980  jal         func_302600
    ctx->pc = 0x352C10u;
    SET_GPR_U32(ctx, 31, 0x352C18u);
    ctx->pc = 0x352C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352C10u;
    // 0x352c14: 0x27aa00ac  addiu       $t2, $sp, 0xAC (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302600u, 0x352C10u, 0x352C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352C18u;
label_352c18:
    // 0x352c18: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x352C18u;
    {
        const bool branch_taken_0x352c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x352c18) {
            ctx->pc = 0x352C40u;
            goto label_352c40;
        }
    }
    ctx->pc = 0x352C20u;
    // 0x352c20: 0x8e260550  lw          $a2, 0x550($s1)
    ctx->pc = 0x352c20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
    // 0x352c24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x352c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352c28: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x352C28u;
    SET_GPR_U32(ctx, 31, 0x352C30u);
    ctx->pc = 0x352C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352C28u;
    // 0x352c2c: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x352C28u, 0x352C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352C30u;
label_352c30:
    // 0x352c30: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x352c30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x352c34: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x352c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x352c38: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x352C38u;
    {
        const bool branch_taken_0x352c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x352C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352C38u;
        // 0x352c3c: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352c38) {
            ctx->pc = 0x352EA8u;
            goto label_352ea8;
        }
    }
    ctx->pc = 0x352C40u;
label_352c40:
    // 0x352c40: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x352c40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x352c44: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x352C44u;
    {
        const bool branch_taken_0x352c44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x352C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352C44u;
        // 0x352c48: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352c44) {
            ctx->pc = 0x352C58u;
            goto label_352c58;
        }
    }
    ctx->pc = 0x352C4Cu;
    // 0x352c4c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x352C4Cu;
    {
        const bool branch_taken_0x352c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x352c4c) {
            ctx->pc = 0x352CD8u;
            goto label_352cd8;
        }
    }
    ctx->pc = 0x352C54u;
    // 0x352c54: 0x0  nop
    ctx->pc = 0x352c54u;
    // NOP
label_352c58:
    // 0x352c58: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x352c58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x352c5c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x352c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x352c60: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x352c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x352c64: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x352c64u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x352c68: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x352c68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x352c6c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x352C6Cu;
    {
        const bool branch_taken_0x352c6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x352c6c) {
            ctx->pc = 0x352CA8u;
            goto label_352ca8;
        }
    }
    ctx->pc = 0x352C74u;
    // 0x352c74: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x352c74u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x352c78: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x352c78u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x352c7c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x352C7Cu;
    {
        const bool branch_taken_0x352c7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x352C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352C7Cu;
        // 0x352c80: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352c7c) {
            ctx->pc = 0x352CD0u;
            goto label_352cd0;
        }
    }
    ctx->pc = 0x352C84u;
    // 0x352c84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x352c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x352c88: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x352c88u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x352c8c: 0x0  nop
    ctx->pc = 0x352c8cu;
    // NOP
    // 0x352c90: 0x0  nop
    ctx->pc = 0x352c90u;
    // NOP
    // 0x352c94: 0x2010  mfhi        $a0
    ctx->pc = 0x352c94u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x352c98: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x352c98u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x352c9c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x352C9Cu;
    {
        const bool branch_taken_0x352c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x352CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352C9Cu;
        // 0x352ca0: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352c9c) {
            ctx->pc = 0x352CD0u;
            goto label_352cd0;
        }
    }
    ctx->pc = 0x352CA4u;
    // 0x352ca4: 0x0  nop
    ctx->pc = 0x352ca4u;
    // NOP
label_352ca8:
    // 0x352ca8: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x352ca8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x352cac: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x352cacu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x352cb0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x352CB0u;
    {
        const bool branch_taken_0x352cb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x352cb0) {
            ctx->pc = 0x352CD0u;
            goto label_352cd0;
        }
    }
    ctx->pc = 0x352CB8u;
    // 0x352cb8: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x352cb8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x352cbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x352cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x352cc0: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x352cc0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x352cc4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x352CC4u;
    {
        const bool branch_taken_0x352cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x352CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352CC4u;
        // 0x352cc8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352cc4) {
            ctx->pc = 0x352CD8u;
            goto label_352cd8;
        }
    }
    ctx->pc = 0x352CCCu;
    // 0x352ccc: 0x0  nop
    ctx->pc = 0x352cccu;
    // NOP
label_352cd0:
    // 0x352cd0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x352cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x352cd4: 0x0  nop
    ctx->pc = 0x352cd4u;
    // NOP
label_352cd8:
    // 0x352cd8: 0x14600073  bnez        $v1, . + 4 + (0x73 << 2)
    ctx->pc = 0x352CD8u;
    {
        const bool branch_taken_0x352cd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x352CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352CD8u;
        // 0x352cdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352cd8) {
            ctx->pc = 0x352EA8u;
            goto label_352ea8;
        }
    }
    ctx->pc = 0x352CE0u;
    // 0x352ce0: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x352CE0u;
    SET_GPR_U32(ctx, 31, 0x352CE8u);
    ctx->pc = 0x352CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352CE0u;
    // 0x352ce4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x352CE0u, 0x352CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352CE8u;
label_352ce8:
    // 0x352ce8: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x352CE8u;
    {
        const bool branch_taken_0x352ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x352ce8) {
            ctx->pc = 0x352EA8u;
            goto label_352ea8;
        }
    }
    ctx->pc = 0x352CF0u;
label_352cf0:
    // 0x352cf0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x352cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x352cf4: 0xa2220558  sb          $v0, 0x558($s1)
    ctx->pc = 0x352cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1368), (uint8_t)GPR_U32(ctx, 2));
    // 0x352cf8: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x352CF8u;
    SET_GPR_U32(ctx, 31, 0x352D00u);
    ctx->pc = 0x352CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352CF8u;
    // 0x352cfc: 0x8e240550  lw          $a0, 0x550($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x352CF8u, 0x352D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352D00u;
label_352d00:
    // 0x352d00: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x352D00u;
    {
        const bool branch_taken_0x352d00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x352D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352D00u;
        // 0x352d04: 0xae200550  sw          $zero, 0x550($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352d00) {
            ctx->pc = 0x352D50u;
            goto label_352d50;
        }
    }
    ctx->pc = 0x352D08u;
    // 0x352d08: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x352d08u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x352d0c: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x352d0cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x352d10: 0xc0a99d8  jal         func_2A6760
    ctx->pc = 0x352D10u;
    SET_GPR_U32(ctx, 31, 0x352D18u);
    ctx->pc = 0x352D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352D10u;
    // 0x352d14: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6760u, 0x352D10u, 0x352D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352D18u;
label_352d18:
    // 0x352d18: 0xae220550  sw          $v0, 0x550($s1)
    ctx->pc = 0x352d18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 2));
    // 0x352d1c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x352d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x352d20: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x352d20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x352d24: 0x3c020700  lui         $v0, 0x700
    ctx->pc = 0x352d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1792 << 16));
    // 0x352d28: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x352d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x352d2c: 0x34450604  ori         $a1, $v0, 0x604
    ctx->pc = 0x352d2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1540);
    // 0x352d30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x352d30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352d34: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x352d34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x352d38: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x352d38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352d3c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x352d3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352d40: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x352d40u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352d44: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x352d44u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352d48: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x352D48u;
    SET_GPR_U32(ctx, 31, 0x352D50u);
    ctx->pc = 0x352D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352D48u;
    // 0x352d4c: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x352D48u, 0x352D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352D50u;
label_352d50:
    // 0x352d50: 0x86220528  lh          $v0, 0x528($s1)
    ctx->pc = 0x352d50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1320)));
    // 0x352d54: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x352d54u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x352d58: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x352d58u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x352d5c: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x352d5cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x352d60: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x352d60u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x352d64: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x352d64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x352d68: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x352d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x352d6c: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x352d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_352d70:
    // 0x352d70: 0x8e260550  lw          $a2, 0x550($s1)
    ctx->pc = 0x352d70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
    // 0x352d74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x352d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352d78: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x352D78u;
    SET_GPR_U32(ctx, 31, 0x352D80u);
    ctx->pc = 0x352D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352D78u;
    // 0x352d7c: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x352D78u, 0x352D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352D80u;
label_352d80:
    // 0x352d80: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x352D80u;
    {
        const bool branch_taken_0x352d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x352D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352D80u;
        // 0x352d84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352d80) {
            ctx->pc = 0x352D90u;
            goto label_352d90;
        }
    }
    ctx->pc = 0x352D88u;
    // 0x352d88: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x352D88u;
    SET_GPR_U32(ctx, 31, 0x352D90u);
    ctx->pc = 0x352D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352D88u;
    // 0x352d8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x352D88u, 0x352D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352D90u;
label_352d90:
    // 0x352d90: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x352d90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x352d94: 0x460001a  bltz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x352D94u;
    {
        const bool branch_taken_0x352d94 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x352D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352D94u;
        // 0x352d98: 0x28610010  slti        $at, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x352d94) {
            ctx->pc = 0x352E00u;
            goto label_352e00;
        }
    }
    ctx->pc = 0x352D9Cu;
    // 0x352d9c: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x352D9Cu;
    {
        const bool branch_taken_0x352d9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x352d9c) {
            ctx->pc = 0x352E00u;
            goto label_352e00;
        }
    }
    ctx->pc = 0x352DA4u;
    // 0x352da4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x352da4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x352da8: 0x27aa0090  addiu       $t2, $sp, 0x90
    ctx->pc = 0x352da8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x352dac: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x352dacu;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x352db0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x352db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352db4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x352db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x352db8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x352db8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352dbc: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x352dbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x352dc0: 0x7fa90060  sq          $t1, 0x60($sp)
    ctx->pc = 0x352dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 9));
    // 0x352dc4: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x352dc4u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x352dc8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x352dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x352dcc: 0x7fa60070  sq          $a2, 0x70($sp)
    ctx->pc = 0x352dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 6));
    // 0x352dd0: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x352dd0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x352dd4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x352dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x352dd8: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x352dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
    // 0x352ddc: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x352ddcu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x352de0: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x352de0u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x352de4: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x352de4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x352de8: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x352de8u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x352dec: 0x92260558  lbu         $a2, 0x558($s1)
    ctx->pc = 0x352decu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1368)));
    // 0x352df0: 0xc62c0554  lwc1        $f12, 0x554($s1)
    ctx->pc = 0x352df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x352df4: 0xc0c0900  jal         func_302400
    ctx->pc = 0x352DF4u;
    SET_GPR_U32(ctx, 31, 0x352DFCu);
    ctx->pc = 0x352DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352DF4u;
    // 0x352df8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x352DF4u, 0x352DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352DFCu;
label_352dfc:
    // 0x352dfc: 0x0  nop
    ctx->pc = 0x352dfcu;
    // NOP
label_352e00:
    // 0x352e00: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x352e00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x352e04: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x352E04u;
    {
        const bool branch_taken_0x352e04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x352E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352E04u;
        // 0x352e08: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352e04) {
            ctx->pc = 0x352E18u;
            goto label_352e18;
        }
    }
    ctx->pc = 0x352E0Cu;
    // 0x352e0c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x352E0Cu;
    {
        const bool branch_taken_0x352e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x352e0c) {
            ctx->pc = 0x352E98u;
            goto label_352e98;
        }
    }
    ctx->pc = 0x352E14u;
    // 0x352e14: 0x0  nop
    ctx->pc = 0x352e14u;
    // NOP
label_352e18:
    // 0x352e18: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x352e18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x352e1c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x352e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x352e20: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x352e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x352e24: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x352e24u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x352e28: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x352e28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x352e2c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x352E2Cu;
    {
        const bool branch_taken_0x352e2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x352e2c) {
            ctx->pc = 0x352E68u;
            goto label_352e68;
        }
    }
    ctx->pc = 0x352E34u;
    // 0x352e34: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x352e34u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x352e38: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x352e38u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x352e3c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x352E3Cu;
    {
        const bool branch_taken_0x352e3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x352E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352E3Cu;
        // 0x352e40: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352e3c) {
            ctx->pc = 0x352E90u;
            goto label_352e90;
        }
    }
    ctx->pc = 0x352E44u;
    // 0x352e44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x352e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x352e48: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x352e48u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x352e4c: 0x0  nop
    ctx->pc = 0x352e4cu;
    // NOP
    // 0x352e50: 0x0  nop
    ctx->pc = 0x352e50u;
    // NOP
    // 0x352e54: 0x2010  mfhi        $a0
    ctx->pc = 0x352e54u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x352e58: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x352e58u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x352e5c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x352E5Cu;
    {
        const bool branch_taken_0x352e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x352E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352E5Cu;
        // 0x352e60: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352e5c) {
            ctx->pc = 0x352E90u;
            goto label_352e90;
        }
    }
    ctx->pc = 0x352E64u;
    // 0x352e64: 0x0  nop
    ctx->pc = 0x352e64u;
    // NOP
label_352e68:
    // 0x352e68: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x352e68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x352e6c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x352e6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x352e70: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x352E70u;
    {
        const bool branch_taken_0x352e70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x352e70) {
            ctx->pc = 0x352E90u;
            goto label_352e90;
        }
    }
    ctx->pc = 0x352E78u;
    // 0x352e78: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x352e78u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x352e7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x352e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x352e80: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x352e80u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x352e84: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x352E84u;
    {
        const bool branch_taken_0x352e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x352E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352E84u;
        // 0x352e88: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352e84) {
            ctx->pc = 0x352E98u;
            goto label_352e98;
        }
    }
    ctx->pc = 0x352E8Cu;
    // 0x352e8c: 0x0  nop
    ctx->pc = 0x352e8cu;
    // NOP
label_352e90:
    // 0x352e90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x352e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x352e94: 0x0  nop
    ctx->pc = 0x352e94u;
    // NOP
label_352e98:
    // 0x352e98: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x352E98u;
    {
        const bool branch_taken_0x352e98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x352E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352E98u;
        // 0x352e9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352e98) {
            ctx->pc = 0x352EA8u;
            goto label_352ea8;
        }
    }
    ctx->pc = 0x352EA0u;
    // 0x352ea0: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x352EA0u;
    SET_GPR_U32(ctx, 31, 0x352EA8u);
    ctx->pc = 0x352EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352EA0u;
    // 0x352ea4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x352EA0u, 0x352EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352EA8u;
label_352ea8:
    // 0x352ea8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x352ea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x352eac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x352eacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x352eb0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x352eb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x352eb4: 0x3e00008  jr          $ra
    ctx->pc = 0x352EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x352EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352EB4u;
        // 0x352eb8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352EB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x352EBCu;
}
