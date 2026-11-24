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

// Function: sub_003D1A10
// Address: 0x3d1a10 - 0x3d2054
void sub_003D1A10_0x3d1a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D1A10_0x3d1a10");
#endif

    switch (ctx->pc) {
        case 0x3d1a34u: goto label_3d1a34;
        case 0x3d1a60u: goto label_3d1a60;
        case 0x3d1aa8u: goto label_3d1aa8;
        case 0x3d1ab4u: goto label_3d1ab4;
        case 0x3d1accu: goto label_3d1acc;
        case 0x3d1ae4u: goto label_3d1ae4;
        case 0x3d1b3cu: goto label_3d1b3c;
        case 0x3d1b54u: goto label_3d1b54;
        case 0x3d1b60u: goto label_3d1b60;
        case 0x3d1b70u: goto label_3d1b70;
        case 0x3d1b80u: goto label_3d1b80;
        case 0x3d1b98u: goto label_3d1b98;
        case 0x3d1ba8u: goto label_3d1ba8;
        case 0x3d1becu: goto label_3d1bec;
        case 0x3d1c14u: goto label_3d1c14;
        case 0x3d1c2cu: goto label_3d1c2c;
        case 0x3d1c3cu: goto label_3d1c3c;
        case 0x3d1c6cu: goto label_3d1c6c;
        case 0x3d1ca0u: goto label_3d1ca0;
        case 0x3d1cb8u: goto label_3d1cb8;
        case 0x3d1cc4u: goto label_3d1cc4;
        case 0x3d1cd0u: goto label_3d1cd0;
        case 0x3d1ce4u: goto label_3d1ce4;
        case 0x3d1d18u: goto label_3d1d18;
        case 0x3d1dd0u: goto label_3d1dd0;
        case 0x3d1de0u: goto label_3d1de0;
        case 0x3d1e18u: goto label_3d1e18;
        case 0x3d1e2cu: goto label_3d1e2c;
        case 0x3d1e58u: goto label_3d1e58;
        case 0x3d1e78u: goto label_3d1e78;
        case 0x3d1e90u: goto label_3d1e90;
        case 0x3d1e9cu: goto label_3d1e9c;
        case 0x3d1f40u: goto label_3d1f40;
        case 0x3d1f50u: goto label_3d1f50;
        case 0x3d1f90u: goto label_3d1f90;
        case 0x3d1f9cu: goto label_3d1f9c;
        case 0x3d2040u: goto label_3d2040;
        default: break;
    }

    ctx->pc = 0x3d1a10u;

    // 0x3d1a10: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3d1a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3d1a14: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3d1a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3d1a18: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3d1a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3d1a1c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3d1a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3d1a20: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3d1a20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1a24: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D1A24u;
    {
        const bool branch_taken_0x3d1a24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D1A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1A24u;
        // 0x3d1a28: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1a24) {
            ctx->pc = 0x3D1A40u;
            goto label_3d1a40;
        }
    }
    ctx->pc = 0x3D1A2Cu;
    // 0x3d1a2c: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3D1A2Cu;
    SET_GPR_U32(ctx, 31, 0x3D1A34u);
    ctx->pc = 0x3D1A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1A2Cu;
    // 0x3d1a30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3D1A2Cu, 0x3D1A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1A34u;
label_3d1a34:
    // 0x3d1a34: 0x10000182  b           . + 4 + (0x182 << 2)
    ctx->pc = 0x3D1A34u;
    {
        const bool branch_taken_0x3d1a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d1a34) {
            ctx->pc = 0x3D2040u;
            goto label_3d2040;
        }
    }
    ctx->pc = 0x3D1A3Cu;
    // 0x3d1a3c: 0x0  nop
    ctx->pc = 0x3d1a3cu;
    // NOP
label_3d1a40:
    // 0x3d1a40: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3D1A40u;
    {
        const bool branch_taken_0x3d1a40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d1a40) {
            ctx->pc = 0x3D1A68u;
            goto label_3d1a68;
        }
    }
    ctx->pc = 0x3D1A48u;
    // 0x3d1a48: 0x8e0329c0  lw          $v1, 0x29C0($s0)
    ctx->pc = 0x3d1a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x3d1a4c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x3d1a4cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d1a50: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D1A50u;
    {
        const bool branch_taken_0x3d1a50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D1A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1A50u;
        // 0x3d1a54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1a50) {
            ctx->pc = 0x3D1A68u;
            goto label_3d1a68;
        }
    }
    ctx->pc = 0x3D1A58u;
    // 0x3d1a58: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3D1A58u;
    SET_GPR_U32(ctx, 31, 0x3D1A60u);
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3D1A58u, 0x3D1A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1A60u;
label_3d1a60:
    // 0x3d1a60: 0x10000177  b           . + 4 + (0x177 << 2)
    ctx->pc = 0x3D1A60u;
    {
        const bool branch_taken_0x3d1a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d1a60) {
            ctx->pc = 0x3D2040u;
            goto label_3d2040;
        }
    }
    ctx->pc = 0x3D1A68u;
label_3d1a68:
    // 0x3d1a68: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x3d1a68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3d1a6c: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x3d1a6cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x3d1a70: 0x10200173  beqz        $at, . + 4 + (0x173 << 2)
    ctx->pc = 0x3D1A70u;
    {
        const bool branch_taken_0x3d1a70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1A70u;
        // 0x3d1a74: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1a70) {
            ctx->pc = 0x3D2040u;
            goto label_3d2040;
        }
    }
    ctx->pc = 0x3D1A78u;
    // 0x3d1a78: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3d1a78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3d1a7c: 0x248431b0  addiu       $a0, $a0, 0x31B0
    ctx->pc = 0x3d1a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12720));
    // 0x3d1a80: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3d1a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3d1a84: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3d1a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d1a88: 0x600008  jr          $v1
    ctx->pc = 0x3D1A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3D1A90u: goto label_3d1a90;
            case 0x3D1AF8u: goto label_3d1af8;
            case 0x3D1B18u: goto label_3d1b18;
            case 0x3D1DD8u: goto label_3d1dd8;
            case 0x3D1E08u: goto label_3d1e08;
            case 0x3D1F48u: goto label_3d1f48;
            case 0x3D1F78u: goto label_3d1f78;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D1A88u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3D1A90u;
label_3d1a90:
    // 0x3d1a90: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3d1a90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3d1a94: 0x26240550  addiu       $a0, $s1, 0x550
    ctx->pc = 0x3d1a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x3d1a98: 0x24a55c70  addiu       $a1, $a1, 0x5C70
    ctx->pc = 0x3d1a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23664));
    // 0x3d1a9c: 0x26260090  addiu       $a2, $s1, 0x90
    ctx->pc = 0x3d1a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x3d1aa0: 0xc097384  jal         func_25CE10
    ctx->pc = 0x3D1AA0u;
    SET_GPR_U32(ctx, 31, 0x3D1AA8u);
    ctx->pc = 0x3D1AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1AA0u;
    // 0x3d1aa4: 0x26270020  addiu       $a3, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CE10u, 0x3D1AA0u, 0x3D1AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1AA8u;
label_3d1aa8:
    // 0x3d1aa8: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x3d1aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x3d1aac: 0xc0763bc  jal         func_1D8EF0
    ctx->pc = 0x3D1AACu;
    SET_GPR_U32(ctx, 31, 0x3D1AB4u);
    ctx->pc = 0x3D1AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1AACu;
    // 0x3d1ab0: 0x26250550  addiu       $a1, $s1, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8EF0u, 0x3D1AACu, 0x3D1AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1AB4u;
label_3d1ab4:
    // 0x3d1ab4: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3D1AB4u;
    {
        const bool branch_taken_0x3d1ab4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d1ab4) {
            ctx->pc = 0x3D1AD8u;
            goto label_3d1ad8;
        }
    }
    ctx->pc = 0x3D1ABCu;
    // 0x3d1abc: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x3d1abcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x3d1ac0: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x3d1ac0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3d1ac4: 0xc0a97e0  jal         func_2A5F80
    ctx->pc = 0x3D1AC4u;
    SET_GPR_U32(ctx, 31, 0x3D1ACCu);
    ctx->pc = 0x3D1AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1AC4u;
    // 0x3d1ac8: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A5F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5F80u, 0x3D1AC4u, 0x3D1ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1ACCu;
label_3d1acc:
    // 0x3d1acc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3D1ACCu;
    {
        const bool branch_taken_0x3d1acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1ACCu;
        // 0x3d1ad0: 0xae2205a0  sw          $v0, 0x5A0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1440), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1acc) {
            ctx->pc = 0x3D1AE8u;
            goto label_3d1ae8;
        }
    }
    ctx->pc = 0x3D1AD4u;
    // 0x3d1ad4: 0x0  nop
    ctx->pc = 0x3d1ad4u;
    // NOP
label_3d1ad8:
    // 0x3d1ad8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d1ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1adc: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3D1ADCu;
    SET_GPR_U32(ctx, 31, 0x3D1AE4u);
    ctx->pc = 0x3D1AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1ADCu;
    // 0x3d1ae0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3D1ADCu, 0x3D1AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1AE4u;
label_3d1ae4:
    // 0x3d1ae4: 0x0  nop
    ctx->pc = 0x3d1ae4u;
    // NOP
label_3d1ae8:
    // 0x3d1ae8: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x3d1ae8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3d1aec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d1aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d1af0: 0x10000153  b           . + 4 + (0x153 << 2)
    ctx->pc = 0x3D1AF0u;
    {
        const bool branch_taken_0x3d1af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1AF0u;
        // 0x3d1af4: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1af0) {
            ctx->pc = 0x3D2040u;
            goto label_3d2040;
        }
    }
    ctx->pc = 0x3D1AF8u;
label_3d1af8:
    // 0x3d1af8: 0x86220526  lh          $v0, 0x526($s1)
    ctx->pc = 0x3d1af8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1318)));
    // 0x3d1afc: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x3d1afcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x3d1b00: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x3d1b00u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d1b04: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x3d1b04u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d1b08: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x3d1b08u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d1b0c: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x3d1b0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3d1b10: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d1b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3d1b14: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x3d1b14u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3d1b18:
    // 0x3d1b18: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3d1b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3d1b1c: 0x34438885  ori         $v1, $v0, 0x8885
    ctx->pc = 0x3d1b1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x3d1b20: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x3d1b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3d1b24: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3d1b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3d1b28: 0x26250090  addiu       $a1, $s1, 0x90
    ctx->pc = 0x3d1b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x3d1b2c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x3d1b2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3d1b30: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3d1b30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3d1b34: 0xc07681c  jal         func_1DA070
    ctx->pc = 0x3D1B34u;
    SET_GPR_U32(ctx, 31, 0x3D1B3Cu);
    ctx->pc = 0x3D1B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1B34u;
    // 0x3d1b38: 0x262600a0  addiu       $a2, $s1, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA070u, 0x3D1B34u, 0x3D1B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1B3Cu;
label_3d1b3c:
    // 0x3d1b3c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3d1b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3d1b40: 0x26240550  addiu       $a0, $s1, 0x550
    ctx->pc = 0x3d1b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x3d1b44: 0x24a55c70  addiu       $a1, $a1, 0x5C70
    ctx->pc = 0x3d1b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23664));
    // 0x3d1b48: 0x26260090  addiu       $a2, $s1, 0x90
    ctx->pc = 0x3d1b48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x3d1b4c: 0xc097384  jal         func_25CE10
    ctx->pc = 0x3D1B4Cu;
    SET_GPR_U32(ctx, 31, 0x3D1B54u);
    ctx->pc = 0x3D1B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1B4Cu;
    // 0x3d1b50: 0x26270020  addiu       $a3, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CE10u, 0x3D1B4Cu, 0x3D1B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1B54u;
label_3d1b54:
    // 0x3d1b54: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x3d1b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x3d1b58: 0xc0763bc  jal         func_1D8EF0
    ctx->pc = 0x3D1B58u;
    SET_GPR_U32(ctx, 31, 0x3D1B60u);
    ctx->pc = 0x3D1B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1B58u;
    // 0x3d1b5c: 0x26250550  addiu       $a1, $s1, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8EF0u, 0x3D1B58u, 0x3D1B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1B60u;
label_3d1b60:
    // 0x3d1b60: 0x8e2605a0  lw          $a2, 0x5A0($s1)
    ctx->pc = 0x3d1b60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1440)));
    // 0x3d1b64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d1b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1b68: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x3D1B68u;
    SET_GPR_U32(ctx, 31, 0x3D1B70u);
    ctx->pc = 0x3D1B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1B68u;
    // 0x3d1b6c: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3D1B68u, 0x3D1B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1B70u;
label_3d1b70:
    // 0x3d1b70: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D1B70u;
    {
        const bool branch_taken_0x3d1b70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D1B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1B70u;
        // 0x3d1b74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1b70) {
            ctx->pc = 0x3D1B80u;
            goto label_3d1b80;
        }
    }
    ctx->pc = 0x3D1B78u;
    // 0x3d1b78: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3D1B78u;
    SET_GPR_U32(ctx, 31, 0x3D1B80u);
    ctx->pc = 0x3D1B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1B78u;
    // 0x3d1b7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3D1B78u, 0x3D1B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1B80u;
label_3d1b80:
    // 0x3d1b80: 0x922605ad  lbu         $a2, 0x5AD($s1)
    ctx->pc = 0x3d1b80u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1453)));
    // 0x3d1b84: 0xc62c05a8  lwc1        $f12, 0x5A8($s1)
    ctx->pc = 0x3d1b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3d1b88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d1b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1b8c: 0x26250550  addiu       $a1, $s1, 0x550
    ctx->pc = 0x3d1b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x3d1b90: 0xc0c0960  jal         func_302580
    ctx->pc = 0x3D1B90u;
    SET_GPR_U32(ctx, 31, 0x3D1B98u);
    ctx->pc = 0x3D1B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1B90u;
    // 0x3d1b94: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302580u, 0x3D1B90u, 0x3D1B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1B98u;
label_3d1b98:
    // 0x3d1b98: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3D1B98u;
    {
        const bool branch_taken_0x3d1b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1B98u;
        // 0x3d1b9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1b98) {
            ctx->pc = 0x3D1BF8u;
            goto label_3d1bf8;
        }
    }
    ctx->pc = 0x3D1BA0u;
    // 0x3d1ba0: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3D1BA0u;
    SET_GPR_U32(ctx, 31, 0x3D1BA8u);
    ctx->pc = 0x3D1BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1BA0u;
    // 0x3d1ba4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3D1BA0u, 0x3D1BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1BA8u;
label_3d1ba8:
    // 0x3d1ba8: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3d1ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3d1bac: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3d1bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3d1bb0: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x3d1bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x3d1bb4: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x3d1bb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3d1bb8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3d1bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3d1bbc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3d1bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3d1bc0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3d1bc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1bc4: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3d1bc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3d1bc8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d1bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3d1bcc: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3d1bccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x3d1bd0: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x3d1bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3d1bd4: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3d1bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x3d1bd8: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x3d1bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
    // 0x3d1bdc: 0x24420294  addiu       $v0, $v0, 0x294
    ctx->pc = 0x3d1bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 660));
    // 0x3d1be0: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x3d1be0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3d1be4: 0xc0aa590  jal         func_2A9640
    ctx->pc = 0x3D1BE4u;
    SET_GPR_U32(ctx, 31, 0x3D1BECu);
    ctx->pc = 0x3D1BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1BE4u;
    // 0x3d1be8: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9640u, 0x3D1BE4u, 0x3D1BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1BECu;
label_3d1bec:
    // 0x3d1bec: 0x10000114  b           . + 4 + (0x114 << 2)
    ctx->pc = 0x3D1BECu;
    {
        const bool branch_taken_0x3d1bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d1bec) {
            ctx->pc = 0x3D2040u;
            goto label_3d2040;
        }
    }
    ctx->pc = 0x3D1BF4u;
    // 0x3d1bf4: 0x0  nop
    ctx->pc = 0x3d1bf4u;
    // NOP
label_3d1bf8:
    // 0x3d1bf8: 0x922605ac  lbu         $a2, 0x5AC($s1)
    ctx->pc = 0x3d1bf8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1452)));
    // 0x3d1bfc: 0xc62c05a4  lwc1        $f12, 0x5A4($s1)
    ctx->pc = 0x3d1bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3d1c00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d1c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1c04: 0x26250550  addiu       $a1, $s1, 0x550
    ctx->pc = 0x3d1c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x3d1c08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3d1c08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1c0c: 0xc0c0900  jal         func_302400
    ctx->pc = 0x3D1C0Cu;
    SET_GPR_U32(ctx, 31, 0x3D1C14u);
    ctx->pc = 0x3D1C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1C0Cu;
    // 0x3d1c10: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x3D1C0Cu, 0x3D1C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1C14u;
label_3d1c14:
    // 0x3d1c14: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3D1C14u;
    {
        const bool branch_taken_0x3d1c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1C14u;
        // 0x3d1c18: 0x262401c0  addiu       $a0, $s1, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1c14) {
            ctx->pc = 0x3D1C78u;
            goto label_3d1c78;
        }
    }
    ctx->pc = 0x3D1C1Cu;
    // 0x3d1c1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d1c1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1c20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3d1c20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1c24: 0xc097184  jal         func_25C610
    ctx->pc = 0x3D1C24u;
    SET_GPR_U32(ctx, 31, 0x3D1C2Cu);
    ctx->pc = 0x3D1C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1C24u;
    // 0x3d1c28: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C610u, 0x3D1C24u, 0x3D1C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1C2Cu;
label_3d1c2c:
    // 0x3d1c2c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D1C2Cu;
    {
        const bool branch_taken_0x3d1c2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D1C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1C2Cu;
        // 0x3d1c30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1c2c) {
            ctx->pc = 0x3D1C48u;
            goto label_3d1c48;
        }
    }
    ctx->pc = 0x3D1C34u;
    // 0x3d1c34: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3D1C34u;
    SET_GPR_U32(ctx, 31, 0x3D1C3Cu);
    ctx->pc = 0x3D1C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1C34u;
    // 0x3d1c38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3D1C34u, 0x3D1C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1C3Cu;
label_3d1c3c:
    // 0x3d1c3c: 0x10000100  b           . + 4 + (0x100 << 2)
    ctx->pc = 0x3D1C3Cu;
    {
        const bool branch_taken_0x3d1c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d1c3c) {
            ctx->pc = 0x3D2040u;
            goto label_3d2040;
        }
    }
    ctx->pc = 0x3D1C44u;
    // 0x3d1c44: 0x0  nop
    ctx->pc = 0x3d1c44u;
    // NOP
label_3d1c48:
    // 0x3d1c48: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x3d1c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3d1c4c: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x3d1c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3d1c50: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3d1c50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3d1c54: 0x26270590  addiu       $a3, $s1, 0x590
    ctx->pc = 0x3d1c54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 1424));
    // 0x3d1c58: 0x26280090  addiu       $t0, $s1, 0x90
    ctx->pc = 0x3d1c58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x3d1c5c: 0xae220518  sw          $v0, 0x518($s1)
    ctx->pc = 0x3d1c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1304), GPR_U32(ctx, 2));
    // 0x3d1c60: 0x8e240518  lw          $a0, 0x518($s1)
    ctx->pc = 0x3d1c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1304)));
    // 0x3d1c64: 0xc0971e4  jal         func_25C790
    ctx->pc = 0x3D1C64u;
    SET_GPR_U32(ctx, 31, 0x3D1C6Cu);
    ctx->pc = 0x3D1C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1C64u;
    // 0x3d1c68: 0x262905af  addiu       $t1, $s1, 0x5AF (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 1455));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C790u, 0x3D1C64u, 0x3D1C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1C6Cu;
label_3d1c6c:
    // 0x3d1c6c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3d1c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3d1c70: 0x100000f3  b           . + 4 + (0xF3 << 2)
    ctx->pc = 0x3D1C70u;
    {
        const bool branch_taken_0x3d1c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1C70u;
        // 0x3d1c74: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1c70) {
            ctx->pc = 0x3D2040u;
            goto label_3d2040;
        }
    }
    ctx->pc = 0x3D1C78u;
label_3d1c78:
    // 0x3d1c78: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3d1c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3d1c7c: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x3d1c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
    // 0x3d1c80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d1c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1c84: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x3d1c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3d1c88: 0x26260080  addiu       $a2, $s1, 0x80
    ctx->pc = 0x3d1c88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x3d1c8c: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x3d1c8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3d1c90: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x3d1c90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3d1c94: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x3d1c94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d1c98: 0xc0c0980  jal         func_302600
    ctx->pc = 0x3D1C98u;
    SET_GPR_U32(ctx, 31, 0x3D1CA0u);
    ctx->pc = 0x3D1C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1C98u;
    // 0x3d1c9c: 0x27aa008c  addiu       $t2, $sp, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302600u, 0x3D1C98u, 0x3D1CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1CA0u;
label_3d1ca0:
    // 0x3d1ca0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x3D1CA0u;
    {
        const bool branch_taken_0x3d1ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d1ca0) {
            ctx->pc = 0x3D1D28u;
            goto label_3d1d28;
        }
    }
    ctx->pc = 0x3D1CA8u;
    // 0x3d1ca8: 0x8e2605a0  lw          $a2, 0x5A0($s1)
    ctx->pc = 0x3d1ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1440)));
    // 0x3d1cac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d1cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1cb0: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x3D1CB0u;
    SET_GPR_U32(ctx, 31, 0x3D1CB8u);
    ctx->pc = 0x3D1CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1CB0u;
    // 0x3d1cb4: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3D1CB0u, 0x3D1CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1CB8u;
label_3d1cb8:
    // 0x3d1cb8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3d1cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3d1cbc: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x3D1CBCu;
    SET_GPR_U32(ctx, 31, 0x3D1CC4u);
    ctx->pc = 0x3D1CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1CBCu;
    // 0x3d1cc0: 0x26250090  addiu       $a1, $s1, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x3D1CBCu, 0x3D1CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1CC4u;
label_3d1cc4:
    // 0x3d1cc4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3d1cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3d1cc8: 0xc0766e8  jal         func_1D9BA0
    ctx->pc = 0x3D1CC8u;
    SET_GPR_U32(ctx, 31, 0x3D1CD0u);
    ctx->pc = 0x3D1CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1CC8u;
    // 0x3d1ccc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9BA0u, 0x3D1CC8u, 0x3D1CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1CD0u;
label_3d1cd0:
    // 0x3d1cd0: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x3d1cd0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x3d1cd4: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x3d1cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3d1cd8: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x3d1cd8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3d1cdc: 0xc0a90d4  jal         func_2A4350
    ctx->pc = 0x3D1CDCu;
    SET_GPR_U32(ctx, 31, 0x3D1CE4u);
    ctx->pc = 0x3D1CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1CDCu;
    // 0x3d1ce0: 0x27a70070  addiu       $a3, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4350u, 0x3D1CDCu, 0x3D1CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1CE4u;
label_3d1ce4:
    // 0x3d1ce4: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x3d1ce4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3d1ce8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3d1ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3d1cec: 0x3c022400  lui         $v0, 0x2400
    ctx->pc = 0x3d1cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9216 << 16));
    // 0x3d1cf0: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3d1cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3d1cf4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3d1cf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1cf8: 0x34454b02  ori         $a1, $v0, 0x4B02
    ctx->pc = 0x3d1cf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19202);
    // 0x3d1cfc: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x3d1cfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3d1d00: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3d1d00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1d04: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3d1d04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1d08: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3d1d08u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1d0c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3d1d0cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1d10: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3D1D10u;
    SET_GPR_U32(ctx, 31, 0x3D1D18u);
    ctx->pc = 0x3D1D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1D10u;
    // 0x3d1d14: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3D1D10u, 0x3D1D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1D18u;
label_3d1d18:
    // 0x3d1d18: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3d1d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3d1d1c: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x3D1D1Cu;
    {
        const bool branch_taken_0x3d1d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1D1Cu;
        // 0x3d1d20: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1d1c) {
            ctx->pc = 0x3D2040u;
            goto label_3d2040;
        }
    }
    ctx->pc = 0x3D1D24u;
    // 0x3d1d24: 0x0  nop
    ctx->pc = 0x3d1d24u;
    // NOP
label_3d1d28:
    // 0x3d1d28: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x3d1d28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x3d1d2c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D1D2Cu;
    {
        const bool branch_taken_0x3d1d2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1D2Cu;
        // 0x3d1d30: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1d2c) {
            ctx->pc = 0x3D1D40u;
            goto label_3d1d40;
        }
    }
    ctx->pc = 0x3D1D34u;
    // 0x3d1d34: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3D1D34u;
    {
        const bool branch_taken_0x3d1d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d1d34) {
            ctx->pc = 0x3D1DC0u;
            goto label_3d1dc0;
        }
    }
    ctx->pc = 0x3D1D3Cu;
    // 0x3d1d3c: 0x0  nop
    ctx->pc = 0x3d1d3cu;
    // NOP
label_3d1d40:
    // 0x3d1d40: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x3d1d40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3d1d44: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3d1d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3d1d48: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3d1d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3d1d4c: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3d1d4cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3d1d50: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x3d1d50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x3d1d54: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3D1D54u;
    {
        const bool branch_taken_0x3d1d54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3d1d54) {
            ctx->pc = 0x3D1D90u;
            goto label_3d1d90;
        }
    }
    ctx->pc = 0x3D1D5Cu;
    // 0x3d1d5c: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x3d1d5cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3d1d60: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3d1d60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3d1d64: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3D1D64u;
    {
        const bool branch_taken_0x3d1d64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D1D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1D64u;
        // 0x3d1d68: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1d64) {
            ctx->pc = 0x3D1DB8u;
            goto label_3d1db8;
        }
    }
    ctx->pc = 0x3D1D6Cu;
    // 0x3d1d6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d1d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d1d70: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3d1d70u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3d1d74: 0x0  nop
    ctx->pc = 0x3d1d74u;
    // NOP
    // 0x3d1d78: 0x0  nop
    ctx->pc = 0x3d1d78u;
    // NOP
    // 0x3d1d7c: 0x2010  mfhi        $a0
    ctx->pc = 0x3d1d7cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3d1d80: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3d1d80u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3d1d84: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3D1D84u;
    {
        const bool branch_taken_0x3d1d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1D84u;
        // 0x3d1d88: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1d84) {
            ctx->pc = 0x3D1DB8u;
            goto label_3d1db8;
        }
    }
    ctx->pc = 0x3D1D8Cu;
    // 0x3d1d8c: 0x0  nop
    ctx->pc = 0x3d1d8cu;
    // NOP
label_3d1d90:
    // 0x3d1d90: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x3d1d90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3d1d94: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3d1d94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3d1d98: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D1D98u;
    {
        const bool branch_taken_0x3d1d98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d1d98) {
            ctx->pc = 0x3D1DB8u;
            goto label_3d1db8;
        }
    }
    ctx->pc = 0x3D1DA0u;
    // 0x3d1da0: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3d1da0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3d1da4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d1da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d1da8: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x3d1da8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d1dac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3D1DACu;
    {
        const bool branch_taken_0x3d1dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1DACu;
        // 0x3d1db0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1dac) {
            ctx->pc = 0x3D1DC0u;
            goto label_3d1dc0;
        }
    }
    ctx->pc = 0x3D1DB4u;
    // 0x3d1db4: 0x0  nop
    ctx->pc = 0x3d1db4u;
    // NOP
label_3d1db8:
    // 0x3d1db8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d1db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d1dbc: 0x0  nop
    ctx->pc = 0x3d1dbcu;
    // NOP
label_3d1dc0:
    // 0x3d1dc0: 0x1460009f  bnez        $v1, . + 4 + (0x9F << 2)
    ctx->pc = 0x3D1DC0u;
    {
        const bool branch_taken_0x3d1dc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D1DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1DC0u;
        // 0x3d1dc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1dc0) {
            ctx->pc = 0x3D2040u;
            goto label_3d2040;
        }
    }
    ctx->pc = 0x3D1DC8u;
    // 0x3d1dc8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3D1DC8u;
    SET_GPR_U32(ctx, 31, 0x3D1DD0u);
    ctx->pc = 0x3D1DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1DC8u;
    // 0x3d1dcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3D1DC8u, 0x3D1DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1DD0u;
label_3d1dd0:
    // 0x3d1dd0: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x3D1DD0u;
    {
        const bool branch_taken_0x3d1dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d1dd0) {
            ctx->pc = 0x3D2040u;
            goto label_3d2040;
        }
    }
    ctx->pc = 0x3D1DD8u;
label_3d1dd8:
    // 0x3d1dd8: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x3D1DD8u;
    SET_GPR_U32(ctx, 31, 0x3D1DE0u);
    ctx->pc = 0x3D1DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1DD8u;
    // 0x3d1ddc: 0x8e2405a0  lw          $a0, 0x5A0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1440)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x3D1DD8u, 0x3D1DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1DE0u;
label_3d1de0:
    // 0x3d1de0: 0xae2005a0  sw          $zero, 0x5A0($s1)
    ctx->pc = 0x3d1de0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1440), GPR_U32(ctx, 0));
    // 0x3d1de4: 0x86220528  lh          $v0, 0x528($s1)
    ctx->pc = 0x3d1de4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1320)));
    // 0x3d1de8: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x3d1de8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x3d1dec: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x3d1decu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d1df0: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x3d1df0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d1df4: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x3d1df4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d1df8: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x3d1df8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3d1dfc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d1dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3d1e00: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x3d1e00u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d1e04: 0x0  nop
    ctx->pc = 0x3d1e04u;
    // NOP
label_3d1e08:
    // 0x3d1e08: 0x8e250518  lw          $a1, 0x518($s1)
    ctx->pc = 0x3d1e08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1304)));
    // 0x3d1e0c: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3d1e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3d1e10: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3D1E10u;
    SET_GPR_U32(ctx, 31, 0x3D1E18u);
    ctx->pc = 0x3D1E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1E10u;
    // 0x3d1e14: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3D1E10u, 0x3D1E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1E18u;
label_3d1e18:
    // 0x3d1e18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d1e18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1e1c: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D1E1Cu;
    {
        const bool branch_taken_0x3d1e1c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D1E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1E1Cu;
        // 0x3d1e20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1e1c) {
            ctx->pc = 0x3D1E38u;
            goto label_3d1e38;
        }
    }
    ctx->pc = 0x3D1E24u;
    // 0x3d1e24: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3D1E24u;
    SET_GPR_U32(ctx, 31, 0x3D1E2Cu);
    ctx->pc = 0x3D1E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1E24u;
    // 0x3d1e28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3D1E24u, 0x3D1E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1E2Cu;
label_3d1e2c:
    // 0x3d1e2c: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x3D1E2Cu;
    {
        const bool branch_taken_0x3d1e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d1e2c) {
            ctx->pc = 0x3D2040u;
            goto label_3d2040;
        }
    }
    ctx->pc = 0x3D1E34u;
    // 0x3d1e34: 0x0  nop
    ctx->pc = 0x3d1e34u;
    // NOP
label_3d1e38:
    // 0x3d1e38: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x3d1e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3d1e3c: 0x922305af  lbu         $v1, 0x5AF($s1)
    ctx->pc = 0x3d1e3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1455)));
    // 0x3d1e40: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x3d1e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3d1e44: 0x26260590  addiu       $a2, $s1, 0x590
    ctx->pc = 0x3d1e44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1424));
    // 0x3d1e48: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3d1e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3d1e4c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x3d1e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x3d1e50: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x3D1E50u;
    SET_GPR_U32(ctx, 31, 0x3D1E58u);
    ctx->pc = 0x3D1E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1E50u;
    // 0x3d1e54: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x3D1E50u, 0x3D1E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1E58u;
label_3d1e58:
    // 0x3d1e58: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x3d1e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3d1e5c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3d1e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3d1e60: 0x922305af  lbu         $v1, 0x5AF($s1)
    ctx->pc = 0x3d1e60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1455)));
    // 0x3d1e64: 0x26260090  addiu       $a2, $s1, 0x90
    ctx->pc = 0x3d1e64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x3d1e68: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3d1e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3d1e6c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x3d1e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x3d1e70: 0xc0767a8  jal         func_1D9EA0
    ctx->pc = 0x3D1E70u;
    SET_GPR_U32(ctx, 31, 0x3D1E78u);
    ctx->pc = 0x3D1E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1E70u;
    // 0x3d1e74: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9EA0u, 0x3D1E70u, 0x3D1E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1E78u;
label_3d1e78:
    // 0x3d1e78: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3d1e78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3d1e7c: 0x26240550  addiu       $a0, $s1, 0x550
    ctx->pc = 0x3d1e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x3d1e80: 0x24a55c70  addiu       $a1, $a1, 0x5C70
    ctx->pc = 0x3d1e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23664));
    // 0x3d1e84: 0x26260090  addiu       $a2, $s1, 0x90
    ctx->pc = 0x3d1e84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x3d1e88: 0xc097384  jal         func_25CE10
    ctx->pc = 0x3D1E88u;
    SET_GPR_U32(ctx, 31, 0x3D1E90u);
    ctx->pc = 0x3D1E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1E88u;
    // 0x3d1e8c: 0x26270020  addiu       $a3, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CE10u, 0x3D1E88u, 0x3D1E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1E90u;
label_3d1e90:
    // 0x3d1e90: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x3d1e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x3d1e94: 0xc0763bc  jal         func_1D8EF0
    ctx->pc = 0x3D1E94u;
    SET_GPR_U32(ctx, 31, 0x3D1E9Cu);
    ctx->pc = 0x3D1E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1E94u;
    // 0x3d1e98: 0x26250550  addiu       $a1, $s1, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8EF0u, 0x3D1E94u, 0x3D1E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1E9Cu;
label_3d1e9c:
    // 0x3d1e9c: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x3d1e9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x3d1ea0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D1EA0u;
    {
        const bool branch_taken_0x3d1ea0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1EA0u;
        // 0x3d1ea4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1ea0) {
            ctx->pc = 0x3D1EB0u;
            goto label_3d1eb0;
        }
    }
    ctx->pc = 0x3D1EA8u;
    // 0x3d1ea8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x3D1EA8u;
    {
        const bool branch_taken_0x3d1ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d1ea8) {
            ctx->pc = 0x3D1F30u;
            goto label_3d1f30;
        }
    }
    ctx->pc = 0x3D1EB0u;
label_3d1eb0:
    // 0x3d1eb0: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x3d1eb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3d1eb4: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3d1eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3d1eb8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3d1eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3d1ebc: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3d1ebcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3d1ec0: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x3d1ec0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x3d1ec4: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3D1EC4u;
    {
        const bool branch_taken_0x3d1ec4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3d1ec4) {
            ctx->pc = 0x3D1F00u;
            goto label_3d1f00;
        }
    }
    ctx->pc = 0x3D1ECCu;
    // 0x3d1ecc: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x3d1eccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3d1ed0: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3d1ed0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3d1ed4: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3D1ED4u;
    {
        const bool branch_taken_0x3d1ed4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D1ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1ED4u;
        // 0x3d1ed8: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1ed4) {
            ctx->pc = 0x3D1F28u;
            goto label_3d1f28;
        }
    }
    ctx->pc = 0x3D1EDCu;
    // 0x3d1edc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d1edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d1ee0: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3d1ee0u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3d1ee4: 0x0  nop
    ctx->pc = 0x3d1ee4u;
    // NOP
    // 0x3d1ee8: 0x0  nop
    ctx->pc = 0x3d1ee8u;
    // NOP
    // 0x3d1eec: 0x2010  mfhi        $a0
    ctx->pc = 0x3d1eecu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3d1ef0: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3d1ef0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3d1ef4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3D1EF4u;
    {
        const bool branch_taken_0x3d1ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1EF4u;
        // 0x3d1ef8: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1ef4) {
            ctx->pc = 0x3D1F28u;
            goto label_3d1f28;
        }
    }
    ctx->pc = 0x3D1EFCu;
    // 0x3d1efc: 0x0  nop
    ctx->pc = 0x3d1efcu;
    // NOP
label_3d1f00:
    // 0x3d1f00: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x3d1f00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3d1f04: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3d1f04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3d1f08: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D1F08u;
    {
        const bool branch_taken_0x3d1f08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d1f08) {
            ctx->pc = 0x3D1F28u;
            goto label_3d1f28;
        }
    }
    ctx->pc = 0x3D1F10u;
    // 0x3d1f10: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3d1f10u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3d1f14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d1f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d1f18: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x3d1f18u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d1f1c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3D1F1Cu;
    {
        const bool branch_taken_0x3d1f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1F1Cu;
        // 0x3d1f20: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1f1c) {
            ctx->pc = 0x3D1F30u;
            goto label_3d1f30;
        }
    }
    ctx->pc = 0x3D1F24u;
    // 0x3d1f24: 0x0  nop
    ctx->pc = 0x3d1f24u;
    // NOP
label_3d1f28:
    // 0x3d1f28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d1f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d1f2c: 0x0  nop
    ctx->pc = 0x3d1f2cu;
    // NOP
label_3d1f30:
    // 0x3d1f30: 0x14600043  bnez        $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x3D1F30u;
    {
        const bool branch_taken_0x3d1f30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D1F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1F30u;
        // 0x3d1f34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1f30) {
            ctx->pc = 0x3D2040u;
            goto label_3d2040;
        }
    }
    ctx->pc = 0x3D1F38u;
    // 0x3d1f38: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3D1F38u;
    SET_GPR_U32(ctx, 31, 0x3D1F40u);
    ctx->pc = 0x3D1F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1F38u;
    // 0x3d1f3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3D1F38u, 0x3D1F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1F40u;
label_3d1f40:
    // 0x3d1f40: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x3D1F40u;
    {
        const bool branch_taken_0x3d1f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d1f40) {
            ctx->pc = 0x3D2040u;
            goto label_3d2040;
        }
    }
    ctx->pc = 0x3D1F48u;
label_3d1f48:
    // 0x3d1f48: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x3D1F48u;
    SET_GPR_U32(ctx, 31, 0x3D1F50u);
    ctx->pc = 0x3D1F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1F48u;
    // 0x3d1f4c: 0x8e2405a0  lw          $a0, 0x5A0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1440)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x3D1F48u, 0x3D1F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1F50u;
label_3d1f50:
    // 0x3d1f50: 0xae2005a0  sw          $zero, 0x5A0($s1)
    ctx->pc = 0x3d1f50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1440), GPR_U32(ctx, 0));
    // 0x3d1f54: 0x8622052a  lh          $v0, 0x52A($s1)
    ctx->pc = 0x3d1f54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1322)));
    // 0x3d1f58: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x3d1f58u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x3d1f5c: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x3d1f5cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d1f60: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x3d1f60u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d1f64: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x3d1f64u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d1f68: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x3d1f68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3d1f6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d1f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3d1f70: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x3d1f70u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d1f74: 0x0  nop
    ctx->pc = 0x3d1f74u;
    // NOP
label_3d1f78:
    // 0x3d1f78: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3d1f78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3d1f7c: 0x26240550  addiu       $a0, $s1, 0x550
    ctx->pc = 0x3d1f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x3d1f80: 0x24a55c70  addiu       $a1, $a1, 0x5C70
    ctx->pc = 0x3d1f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23664));
    // 0x3d1f84: 0x26260090  addiu       $a2, $s1, 0x90
    ctx->pc = 0x3d1f84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x3d1f88: 0xc097384  jal         func_25CE10
    ctx->pc = 0x3D1F88u;
    SET_GPR_U32(ctx, 31, 0x3D1F90u);
    ctx->pc = 0x3D1F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1F88u;
    // 0x3d1f8c: 0x26270020  addiu       $a3, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CE10u, 0x3D1F88u, 0x3D1F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1F90u;
label_3d1f90:
    // 0x3d1f90: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x3d1f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x3d1f94: 0xc0763bc  jal         func_1D8EF0
    ctx->pc = 0x3D1F94u;
    SET_GPR_U32(ctx, 31, 0x3D1F9Cu);
    ctx->pc = 0x3D1F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1F94u;
    // 0x3d1f98: 0x26250550  addiu       $a1, $s1, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8EF0u, 0x3D1F94u, 0x3D1F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1F9Cu;
label_3d1f9c:
    // 0x3d1f9c: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x3d1f9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x3d1fa0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D1FA0u;
    {
        const bool branch_taken_0x3d1fa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1FA0u;
        // 0x3d1fa4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1fa0) {
            ctx->pc = 0x3D1FB0u;
            goto label_3d1fb0;
        }
    }
    ctx->pc = 0x3D1FA8u;
    // 0x3d1fa8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x3D1FA8u;
    {
        const bool branch_taken_0x3d1fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d1fa8) {
            ctx->pc = 0x3D2030u;
            goto label_3d2030;
        }
    }
    ctx->pc = 0x3D1FB0u;
label_3d1fb0:
    // 0x3d1fb0: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x3d1fb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3d1fb4: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3d1fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3d1fb8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3d1fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3d1fbc: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3d1fbcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3d1fc0: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x3d1fc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x3d1fc4: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3D1FC4u;
    {
        const bool branch_taken_0x3d1fc4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3d1fc4) {
            ctx->pc = 0x3D2000u;
            goto label_3d2000;
        }
    }
    ctx->pc = 0x3D1FCCu;
    // 0x3d1fcc: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x3d1fccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3d1fd0: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3d1fd0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3d1fd4: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3D1FD4u;
    {
        const bool branch_taken_0x3d1fd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D1FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1FD4u;
        // 0x3d1fd8: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1fd4) {
            ctx->pc = 0x3D2028u;
            goto label_3d2028;
        }
    }
    ctx->pc = 0x3D1FDCu;
    // 0x3d1fdc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d1fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d1fe0: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3d1fe0u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3d1fe4: 0x0  nop
    ctx->pc = 0x3d1fe4u;
    // NOP
    // 0x3d1fe8: 0x0  nop
    ctx->pc = 0x3d1fe8u;
    // NOP
    // 0x3d1fec: 0x2010  mfhi        $a0
    ctx->pc = 0x3d1fecu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3d1ff0: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3d1ff0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3d1ff4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3D1FF4u;
    {
        const bool branch_taken_0x3d1ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1FF4u;
        // 0x3d1ff8: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1ff4) {
            ctx->pc = 0x3D2028u;
            goto label_3d2028;
        }
    }
    ctx->pc = 0x3D1FFCu;
    // 0x3d1ffc: 0x0  nop
    ctx->pc = 0x3d1ffcu;
    // NOP
label_3d2000:
    // 0x3d2000: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x3d2000u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3d2004: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3d2004u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3d2008: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D2008u;
    {
        const bool branch_taken_0x3d2008 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d2008) {
            ctx->pc = 0x3D2028u;
            goto label_3d2028;
        }
    }
    ctx->pc = 0x3D2010u;
    // 0x3d2010: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3d2010u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3d2014: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d2014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d2018: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x3d2018u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d201c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3D201Cu;
    {
        const bool branch_taken_0x3d201c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D201Cu;
        // 0x3d2020: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d201c) {
            ctx->pc = 0x3D2030u;
            goto label_3d2030;
        }
    }
    ctx->pc = 0x3D2024u;
    // 0x3d2024: 0x0  nop
    ctx->pc = 0x3d2024u;
    // NOP
label_3d2028:
    // 0x3d2028: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d2028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d202c: 0x0  nop
    ctx->pc = 0x3d202cu;
    // NOP
label_3d2030:
    // 0x3d2030: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D2030u;
    {
        const bool branch_taken_0x3d2030 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D2034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2030u;
        // 0x3d2034: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2030) {
            ctx->pc = 0x3D2040u;
            goto label_3d2040;
        }
    }
    ctx->pc = 0x3D2038u;
    // 0x3d2038: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3D2038u;
    SET_GPR_U32(ctx, 31, 0x3D2040u);
    ctx->pc = 0x3D203Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2038u;
    // 0x3d203c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3D2038u, 0x3D2040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2040u;
label_3d2040:
    // 0x3d2040: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3d2040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d2044: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3d2044u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d2048: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3d2048u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d204c: 0x3e00008  jr          $ra
    ctx->pc = 0x3D204Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D2050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D204Cu;
        // 0x3d2050: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D204Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D2054u;
}
