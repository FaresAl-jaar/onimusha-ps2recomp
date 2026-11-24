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

// Function: sub_003009D0
// Address: 0x3009d0 - 0x300be8
void sub_003009D0_0x3009d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003009D0_0x3009d0");
#endif

    switch (ctx->pc) {
        case 0x300a24u: goto label_300a24;
        case 0x300a5cu: goto label_300a5c;
        case 0x300a70u: goto label_300a70;
        case 0x300ab0u: goto label_300ab0;
        case 0x300ac0u: goto label_300ac0;
        case 0x300b2cu: goto label_300b2c;
        case 0x300bd8u: goto label_300bd8;
        default: break;
    }

    ctx->pc = 0x3009d0u;

    // 0x3009d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3009d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3009d4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3009d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3009d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3009d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3009dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3009dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3009e0: 0x90860521  lbu         $a2, 0x521($a0)
    ctx->pc = 0x3009e0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x3009e4: 0x10c3002e  beq         $a2, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x3009E4u;
    {
        const bool branch_taken_0x3009e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x3009E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3009E4u;
        // 0x3009e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3009e4) {
            ctx->pc = 0x300AA0u;
            goto label_300aa0;
        }
    }
    ctx->pc = 0x3009ECu;
    // 0x3009ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3009ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3009f0: 0x10c30023  beq         $a2, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x3009F0u;
    {
        const bool branch_taken_0x3009f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x3009f0) {
            ctx->pc = 0x300A80u;
            goto label_300a80;
        }
    }
    ctx->pc = 0x3009F8u;
    // 0x3009f8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3009F8u;
    {
        const bool branch_taken_0x3009f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3009f8) {
            ctx->pc = 0x300A08u;
            goto label_300a08;
        }
    }
    ctx->pc = 0x300A00u;
    // 0x300a00: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x300A00u;
    {
        const bool branch_taken_0x300a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x300a00) {
            ctx->pc = 0x300BD8u;
            goto label_300bd8;
        }
    }
    ctx->pc = 0x300A08u;
label_300a08:
    // 0x300a08: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x300A08u;
    {
        const bool branch_taken_0x300a08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x300a08) {
            ctx->pc = 0x300A68u;
            goto label_300a68;
        }
    }
    ctx->pc = 0x300A10u;
    // 0x300a10: 0x8ca6085c  lw          $a2, 0x85C($a1)
    ctx->pc = 0x300a10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2140)));
    // 0x300a14: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x300a14u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x300a18: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x300a18u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x300a1c: 0xc0aad60  jal         func_2AB580
    ctx->pc = 0x300A1Cu;
    SET_GPR_U32(ctx, 31, 0x300A24u);
    ctx->pc = 0x300A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300A1Cu;
    // 0x300a20: 0x26070020  addiu       $a3, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB580u, 0x300A1Cu, 0x300A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300A24u;
label_300a24:
    // 0x300a24: 0xae020550  sw          $v0, 0x550($s0)
    ctx->pc = 0x300a24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 2));
    // 0x300a28: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x300a28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x300a2c: 0x9203052e  lbu         $v1, 0x52E($s0)
    ctx->pc = 0x300a2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x300a30: 0x3c020f00  lui         $v0, 0xF00
    ctx->pc = 0x300a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3840 << 16));
    // 0x300a34: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x300a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x300a38: 0x34450604  ori         $a1, $v0, 0x604
    ctx->pc = 0x300a38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1540);
    // 0x300a3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x300a3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300a40: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x300a40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x300a44: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x300a44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300a48: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x300a48u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300a4c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x300a4cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300a50: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x300a50u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300a54: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x300A54u;
    SET_GPR_U32(ctx, 31, 0x300A5Cu);
    ctx->pc = 0x300A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300A54u;
    // 0x300a58: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x300A54u, 0x300A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300A5Cu;
label_300a5c:
    // 0x300a5c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x300A5Cu;
    {
        const bool branch_taken_0x300a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x300a5c) {
            ctx->pc = 0x300A70u;
            goto label_300a70;
        }
    }
    ctx->pc = 0x300A64u;
    // 0x300a64: 0x0  nop
    ctx->pc = 0x300a64u;
    // NOP
label_300a68:
    // 0x300a68: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x300A68u;
    SET_GPR_U32(ctx, 31, 0x300A70u);
    ctx->pc = 0x300A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300A68u;
    // 0x300a6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x300A68u, 0x300A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300A70u;
label_300a70:
    // 0x300a70: 0x92030521  lbu         $v1, 0x521($s0)
    ctx->pc = 0x300a70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x300a74: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x300a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x300a78: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x300A78u;
    {
        const bool branch_taken_0x300a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300A78u;
        // 0x300a7c: 0xa2030521  sb          $v1, 0x521($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300a78) {
            ctx->pc = 0x300BD8u;
            goto label_300bd8;
        }
    }
    ctx->pc = 0x300A80u;
label_300a80:
    // 0x300a80: 0x86020526  lh          $v0, 0x526($s0)
    ctx->pc = 0x300a80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1318)));
    // 0x300a84: 0xa6020512  sh          $v0, 0x512($s0)
    ctx->pc = 0x300a84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x300a88: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x300a88u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x300a8c: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x300a8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x300a90: 0xa2000515  sb          $zero, 0x515($s0)
    ctx->pc = 0x300a90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x300a94: 0x92020521  lbu         $v0, 0x521($s0)
    ctx->pc = 0x300a94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x300a98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x300a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x300a9c: 0xa2020521  sb          $v0, 0x521($s0)
    ctx->pc = 0x300a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 2));
label_300aa0:
    // 0x300aa0: 0x8e060550  lw          $a2, 0x550($s0)
    ctx->pc = 0x300aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
    // 0x300aa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x300aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300aa8: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x300AA8u;
    SET_GPR_U32(ctx, 31, 0x300AB0u);
    ctx->pc = 0x300AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300AA8u;
    // 0x300aac: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x300AA8u, 0x300AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300AB0u;
label_300ab0:
    // 0x300ab0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x300AB0u;
    {
        const bool branch_taken_0x300ab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x300AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300AB0u;
        // 0x300ab4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300ab0) {
            ctx->pc = 0x300AC0u;
            goto label_300ac0;
        }
    }
    ctx->pc = 0x300AB8u;
    // 0x300ab8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x300AB8u;
    SET_GPR_U32(ctx, 31, 0x300AC0u);
    ctx->pc = 0x300ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300AB8u;
    // 0x300abc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x300AB8u, 0x300AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300AC0u;
label_300ac0:
    // 0x300ac0: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x300ac0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x300ac4: 0x460001a  bltz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x300AC4u;
    {
        const bool branch_taken_0x300ac4 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x300AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300AC4u;
        // 0x300ac8: 0x28610029  slti        $at, $v1, 0x29 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x300ac4) {
            ctx->pc = 0x300B30u;
            goto label_300b30;
        }
    }
    ctx->pc = 0x300ACCu;
    // 0x300acc: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x300ACCu;
    {
        const bool branch_taken_0x300acc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x300acc) {
            ctx->pc = 0x300B30u;
            goto label_300b30;
        }
    }
    ctx->pc = 0x300AD4u;
    // 0x300ad4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x300ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x300ad8: 0x27aa0060  addiu       $t2, $sp, 0x60
    ctx->pc = 0x300ad8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x300adc: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x300adcu;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x300ae0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x300ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300ae4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x300ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x300ae8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x300ae8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300aec: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x300aecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x300af0: 0x7fa90030  sq          $t1, 0x30($sp)
    ctx->pc = 0x300af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 9));
    // 0x300af4: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x300af4u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x300af8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x300af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x300afc: 0x7fa60040  sq          $a2, 0x40($sp)
    ctx->pc = 0x300afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 6));
    // 0x300b00: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x300b00u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x300b04: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x300b04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x300b08: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x300b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x300b0c: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x300b0cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x300b10: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x300b10u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x300b14: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x300b14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x300b18: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x300b18u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x300b1c: 0x92060558  lbu         $a2, 0x558($s0)
    ctx->pc = 0x300b1cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1368)));
    // 0x300b20: 0xc60c0554  lwc1        $f12, 0x554($s0)
    ctx->pc = 0x300b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x300b24: 0xc0c0900  jal         func_302400
    ctx->pc = 0x300B24u;
    SET_GPR_U32(ctx, 31, 0x300B2Cu);
    ctx->pc = 0x300B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300B24u;
    // 0x300b28: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x300B24u, 0x300B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300B2Cu;
label_300b2c:
    // 0x300b2c: 0x0  nop
    ctx->pc = 0x300b2cu;
    // NOP
label_300b30:
    // 0x300b30: 0x92030515  lbu         $v1, 0x515($s0)
    ctx->pc = 0x300b30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1301)));
    // 0x300b34: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x300B34u;
    {
        const bool branch_taken_0x300b34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x300B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300B34u;
        // 0x300b38: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300b34) {
            ctx->pc = 0x300B48u;
            goto label_300b48;
        }
    }
    ctx->pc = 0x300B3Cu;
    // 0x300b3c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x300B3Cu;
    {
        const bool branch_taken_0x300b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x300b3c) {
            ctx->pc = 0x300BC8u;
            goto label_300bc8;
        }
    }
    ctx->pc = 0x300B44u;
    // 0x300b44: 0x0  nop
    ctx->pc = 0x300b44u;
    // NOP
label_300b48:
    // 0x300b48: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x300b48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x300b4c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x300b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x300b50: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x300b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x300b54: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x300b54u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x300b58: 0x86040512  lh          $a0, 0x512($s0)
    ctx->pc = 0x300b58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x300b5c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x300B5Cu;
    {
        const bool branch_taken_0x300b5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x300b5c) {
            ctx->pc = 0x300B98u;
            goto label_300b98;
        }
    }
    ctx->pc = 0x300B64u;
    // 0x300b64: 0x86050510  lh          $a1, 0x510($s0)
    ctx->pc = 0x300b64u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x300b68: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x300b68u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x300b6c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x300B6Cu;
    {
        const bool branch_taken_0x300b6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x300B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300B6Cu;
        // 0x300b70: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300b6c) {
            ctx->pc = 0x300BC0u;
            goto label_300bc0;
        }
    }
    ctx->pc = 0x300B74u;
    // 0x300b74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x300b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x300b78: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x300b78u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x300b7c: 0x0  nop
    ctx->pc = 0x300b7cu;
    // NOP
    // 0x300b80: 0x0  nop
    ctx->pc = 0x300b80u;
    // NOP
    // 0x300b84: 0x2010  mfhi        $a0
    ctx->pc = 0x300b84u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x300b88: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x300b88u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x300b8c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x300B8Cu;
    {
        const bool branch_taken_0x300b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300B8Cu;
        // 0x300b90: 0xa2030514  sb          $v1, 0x514($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300b8c) {
            ctx->pc = 0x300BC0u;
            goto label_300bc0;
        }
    }
    ctx->pc = 0x300B94u;
    // 0x300b94: 0x0  nop
    ctx->pc = 0x300b94u;
    // NOP
label_300b98:
    // 0x300b98: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x300b98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x300b9c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x300b9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x300ba0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x300BA0u;
    {
        const bool branch_taken_0x300ba0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x300ba0) {
            ctx->pc = 0x300BC0u;
            goto label_300bc0;
        }
    }
    ctx->pc = 0x300BA8u;
    // 0x300ba8: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x300ba8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x300bac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x300bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x300bb0: 0xa2030515  sb          $v1, 0x515($s0)
    ctx->pc = 0x300bb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x300bb4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x300BB4u;
    {
        const bool branch_taken_0x300bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300BB4u;
        // 0x300bb8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300bb4) {
            ctx->pc = 0x300BC8u;
            goto label_300bc8;
        }
    }
    ctx->pc = 0x300BBCu;
    // 0x300bbc: 0x0  nop
    ctx->pc = 0x300bbcu;
    // NOP
label_300bc0:
    // 0x300bc0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x300bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x300bc4: 0x0  nop
    ctx->pc = 0x300bc4u;
    // NOP
label_300bc8:
    // 0x300bc8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x300BC8u;
    {
        const bool branch_taken_0x300bc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x300BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300BC8u;
        // 0x300bcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300bc8) {
            ctx->pc = 0x300BD8u;
            goto label_300bd8;
        }
    }
    ctx->pc = 0x300BD0u;
    // 0x300bd0: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x300BD0u;
    SET_GPR_U32(ctx, 31, 0x300BD8u);
    ctx->pc = 0x300BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300BD0u;
    // 0x300bd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x300BD0u, 0x300BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300BD8u;
label_300bd8:
    // 0x300bd8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x300bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x300bdc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x300bdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x300be0: 0x3e00008  jr          $ra
    ctx->pc = 0x300BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x300BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300BE0u;
        // 0x300be4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300BE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x300BE8u;
}
