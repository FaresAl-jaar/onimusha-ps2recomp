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

// Function: sub_00270A00
// Address: 0x270a00 - 0x270c08
void sub_00270A00_0x270a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00270A00_0x270a00");
#endif

    switch (ctx->pc) {
        case 0x270a30u: goto label_270a30;
        case 0x270a68u: goto label_270a68;
        case 0x270ae8u: goto label_270ae8;
        case 0x270af8u: goto label_270af8;
        case 0x270b24u: goto label_270b24;
        case 0x270b44u: goto label_270b44;
        case 0x270b68u: goto label_270b68;
        case 0x270b8cu: goto label_270b8c;
        case 0x270bc4u: goto label_270bc4;
        default: break;
    }

    ctx->pc = 0x270a00u;

    // 0x270a00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x270a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x270a04: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x270a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x270a08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x270a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x270a0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x270a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x270a10: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x270a10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270a14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x270a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x270a18: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x270a18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270a1c: 0x8e250070  lw          $a1, 0x70($s1)
    ctx->pc = 0x270a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x270a20: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x270a20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x270a24: 0x24844570  addiu       $a0, $a0, 0x4570
    ctx->pc = 0x270a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    // 0x270a28: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x270A28u;
    SET_GPR_U32(ctx, 31, 0x270A30u);
    ctx->pc = 0x270A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270A28u;
    // 0x270a2c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x270A28u, 0x270A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270A30u;
label_270a30:
    // 0x270a30: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x270A30u;
    {
        const bool branch_taken_0x270a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x270a30) {
            ctx->pc = 0x270A48u;
            goto label_270a48;
        }
    }
    ctx->pc = 0x270A38u;
    // 0x270a38: 0x8c4406ac  lw          $a0, 0x6AC($v0)
    ctx->pc = 0x270a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1708)));
    // 0x270a3c: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x270a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x270a40: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x270a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x270a44: 0x3802b  sltu        $s0, $zero, $v1
    ctx->pc = 0x270a44u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_270a48:
    // 0x270a48: 0x16000061  bnez        $s0, . + 4 + (0x61 << 2)
    ctx->pc = 0x270A48u;
    {
        const bool branch_taken_0x270a48 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x270a48) {
            ctx->pc = 0x270BD0u;
            goto label_270bd0;
        }
    }
    ctx->pc = 0x270A50u;
    // 0x270a50: 0x8e220084  lw          $v0, 0x84($s1)
    ctx->pc = 0x270a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x270a54: 0x8e50004c  lw          $s0, 0x4C($s2)
    ctx->pc = 0x270a54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x270a58: 0x90450003  lbu         $a1, 0x3($v0)
    ctx->pc = 0x270a58u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x270a5c: 0x90460004  lbu         $a2, 0x4($v0)
    ctx->pc = 0x270a5cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x270a60: 0xc09d57c  jal         func_2755F0
    ctx->pc = 0x270A60u;
    SET_GPR_U32(ctx, 31, 0x270A68u);
    ctx->pc = 0x270A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270A60u;
    // 0x270a64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2755F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2755F0u, 0x270A60u, 0x270A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270A68u;
label_270a68:
    // 0x270a68: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x270A68u;
    {
        const bool branch_taken_0x270a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x270a68) {
            ctx->pc = 0x270AE0u;
            goto label_270ae0;
        }
    }
    ctx->pc = 0x270A70u;
    // 0x270a70: 0x8e220084  lw          $v0, 0x84($s1)
    ctx->pc = 0x270a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x270a74: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x270a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x270a78: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x270a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x270a7c: 0x90450005  lbu         $a1, 0x5($v0)
    ctx->pc = 0x270a7cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
    // 0x270a80: 0x9042000f  lbu         $v0, 0xF($v0)
    ctx->pc = 0x270a80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 15)));
    // 0x270a84: 0xa23018  mult        $a2, $a1, $v0
    ctx->pc = 0x270a84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x270a88: 0x24c5ffff  addiu       $a1, $a2, -0x1
    ctx->pc = 0x270a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x270a8c: 0xa6250090  sh          $a1, 0x90($s1)
    ctx->pc = 0x270a8cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 144), (uint16_t)GPR_U32(ctx, 5));
    // 0x270a90: 0xa6200092  sh          $zero, 0x92($s1)
    ctx->pc = 0x270a90u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 146), (uint16_t)GPR_U32(ctx, 0));
    // 0x270a94: 0xa6260094  sh          $a2, 0x94($s1)
    ctx->pc = 0x270a94u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 148), (uint16_t)GPR_U32(ctx, 6));
    // 0x270a98: 0x86220090  lh          $v0, 0x90($s1)
    ctx->pc = 0x270a98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x270a9c: 0xa6220096  sh          $v0, 0x96($s1)
    ctx->pc = 0x270a9cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 150), (uint16_t)GPR_U32(ctx, 2));
    // 0x270aa0: 0xa6250098  sh          $a1, 0x98($s1)
    ctx->pc = 0x270aa0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 152), (uint16_t)GPR_U32(ctx, 5));
    // 0x270aa4: 0xa620009a  sh          $zero, 0x9A($s1)
    ctx->pc = 0x270aa4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 154), (uint16_t)GPR_U32(ctx, 0));
    // 0x270aa8: 0xa626009c  sh          $a2, 0x9C($s1)
    ctx->pc = 0x270aa8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 156), (uint16_t)GPR_U32(ctx, 6));
    // 0x270aac: 0x86220098  lh          $v0, 0x98($s1)
    ctx->pc = 0x270aacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x270ab0: 0xa622009e  sh          $v0, 0x9E($s1)
    ctx->pc = 0x270ab0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 158), (uint16_t)GPR_U32(ctx, 2));
    // 0x270ab4: 0xa62400a0  sh          $a0, 0xA0($s1)
    ctx->pc = 0x270ab4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 160), (uint16_t)GPR_U32(ctx, 4));
    // 0x270ab8: 0xa62000a2  sh          $zero, 0xA2($s1)
    ctx->pc = 0x270ab8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 162), (uint16_t)GPR_U32(ctx, 0));
    // 0x270abc: 0xa62300a4  sh          $v1, 0xA4($s1)
    ctx->pc = 0x270abcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 164), (uint16_t)GPR_U32(ctx, 3));
    // 0x270ac0: 0x862200a0  lh          $v0, 0xA0($s1)
    ctx->pc = 0x270ac0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x270ac4: 0xa62200a6  sh          $v0, 0xA6($s1)
    ctx->pc = 0x270ac4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 166), (uint16_t)GPR_U32(ctx, 2));
    // 0x270ac8: 0xa62400a8  sh          $a0, 0xA8($s1)
    ctx->pc = 0x270ac8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 168), (uint16_t)GPR_U32(ctx, 4));
    // 0x270acc: 0xa62000aa  sh          $zero, 0xAA($s1)
    ctx->pc = 0x270accu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 170), (uint16_t)GPR_U32(ctx, 0));
    // 0x270ad0: 0xa62300ac  sh          $v1, 0xAC($s1)
    ctx->pc = 0x270ad0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 172), (uint16_t)GPR_U32(ctx, 3));
    // 0x270ad4: 0x862200a8  lh          $v0, 0xA8($s1)
    ctx->pc = 0x270ad4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 168)));
    // 0x270ad8: 0xa62200ae  sh          $v0, 0xAE($s1)
    ctx->pc = 0x270ad8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 174), (uint16_t)GPR_U32(ctx, 2));
    // 0x270adc: 0x0  nop
    ctx->pc = 0x270adcu;
    // NOP
label_270ae0:
    // 0x270ae0: 0xc0743c0  jal         func_1D0F00
    ctx->pc = 0x270AE0u;
    SET_GPR_U32(ctx, 31, 0x270AE8u);
    ctx->pc = 0x270AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270AE0u;
    // 0x270ae4: 0x262401b0  addiu       $a0, $s1, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F00u, 0x270AE0u, 0x270AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270AE8u;
label_270ae8:
    // 0x270ae8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x270AE8u;
    {
        const bool branch_taken_0x270ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x270AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270AE8u;
        // 0x270aec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270ae8) {
            ctx->pc = 0x270AF8u;
            goto label_270af8;
        }
    }
    ctx->pc = 0x270AF0u;
    // 0x270af0: 0xc096b54  jal         func_25AD50
    ctx->pc = 0x270AF0u;
    SET_GPR_U32(ctx, 31, 0x270AF8u);
    ctx->pc = 0x25AD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD50u, 0x270AF0u, 0x270AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270AF8u;
label_270af8:
    // 0x270af8: 0x9223007a  lbu         $v1, 0x7A($s1)
    ctx->pc = 0x270af8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 122)));
    // 0x270afc: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x270AFCu;
    {
        const bool branch_taken_0x270afc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x270afc) {
            ctx->pc = 0x270B90u;
            goto label_270b90;
        }
    }
    ctx->pc = 0x270B04u;
    // 0x270b04: 0x8e250080  lw          $a1, 0x80($s1)
    ctx->pc = 0x270b04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x270b08: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x270b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x270b0c: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x270b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x270b10: 0x90a30006  lbu         $v1, 0x6($a1)
    ctx->pc = 0x270b10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x270b14: 0x24a60020  addiu       $a2, $a1, 0x20
    ctx->pc = 0x270b14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x270b18: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x270b18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x270b1c: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x270B1Cu;
    SET_GPR_U32(ctx, 31, 0x270B24u);
    ctx->pc = 0x270B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270B1Cu;
    // 0x270b20: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x270B1Cu, 0x270B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270B24u;
label_270b24:
    // 0x270b24: 0x8e250080  lw          $a1, 0x80($s1)
    ctx->pc = 0x270b24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x270b28: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x270b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x270b2c: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x270b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x270b30: 0x90a30006  lbu         $v1, 0x6($a1)
    ctx->pc = 0x270b30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x270b34: 0x24a60030  addiu       $a2, $a1, 0x30
    ctx->pc = 0x270b34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x270b38: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x270b38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x270b3c: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x270B3Cu;
    SET_GPR_U32(ctx, 31, 0x270B44u);
    ctx->pc = 0x270B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270B3Cu;
    // 0x270b40: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x270B3Cu, 0x270B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270B44u;
label_270b44:
    // 0x270b44: 0x8e220084  lw          $v0, 0x84($s1)
    ctx->pc = 0x270b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x270b48: 0x26250090  addiu       $a1, $s1, 0x90
    ctx->pc = 0x270b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x270b4c: 0x8e240088  lw          $a0, 0x88($s1)
    ctx->pc = 0x270b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x270b50: 0x262600b0  addiu       $a2, $s1, 0xB0
    ctx->pc = 0x270b50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
    // 0x270b54: 0x26270130  addiu       $a3, $s1, 0x130
    ctx->pc = 0x270b54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 304));
    // 0x270b58: 0x262800a0  addiu       $t0, $s1, 0xA0
    ctx->pc = 0x270b58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x270b5c: 0x904a0005  lbu         $t2, 0x5($v0)
    ctx->pc = 0x270b5cu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
    // 0x270b60: 0xc07692c  jal         func_1DA4B0
    ctx->pc = 0x270B60u;
    SET_GPR_U32(ctx, 31, 0x270B68u);
    ctx->pc = 0x270B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270B60u;
    // 0x270b64: 0x27a90050  addiu       $t1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA4B0u, 0x270B60u, 0x270B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270B68u;
label_270b68:
    // 0x270b68: 0x8e220084  lw          $v0, 0x84($s1)
    ctx->pc = 0x270b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x270b6c: 0x26250098  addiu       $a1, $s1, 0x98
    ctx->pc = 0x270b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 152));
    // 0x270b70: 0x8e24008c  lw          $a0, 0x8C($s1)
    ctx->pc = 0x270b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x270b74: 0x262600f0  addiu       $a2, $s1, 0xF0
    ctx->pc = 0x270b74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
    // 0x270b78: 0x26270170  addiu       $a3, $s1, 0x170
    ctx->pc = 0x270b78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 368));
    // 0x270b7c: 0x262800a8  addiu       $t0, $s1, 0xA8
    ctx->pc = 0x270b7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 168));
    // 0x270b80: 0x904a0005  lbu         $t2, 0x5($v0)
    ctx->pc = 0x270b80u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
    // 0x270b84: 0xc07692c  jal         func_1DA4B0
    ctx->pc = 0x270B84u;
    SET_GPR_U32(ctx, 31, 0x270B8Cu);
    ctx->pc = 0x270B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270B84u;
    // 0x270b88: 0x27a90040  addiu       $t1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA4B0u, 0x270B84u, 0x270B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270B8Cu;
label_270b8c:
    // 0x270b8c: 0x0  nop
    ctx->pc = 0x270b8cu;
    // NOP
label_270b90:
    // 0x270b90: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x270b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x270b94: 0x8e030094  lw          $v1, 0x94($s0)
    ctx->pc = 0x270b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x270b98: 0x90840006  lbu         $a0, 0x6($a0)
    ctx->pc = 0x270b98u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x270b9c: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x270b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x270ba0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x270ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x270ba4: 0x78630030  lq          $v1, 0x30($v1)
    ctx->pc = 0x270ba4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x270ba8: 0x7e230040  sq          $v1, 0x40($s1)
    ctx->pc = 0x270ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), GPR_VEC(ctx, 3));
    // 0x270bac: 0x92230050  lbu         $v1, 0x50($s1)
    ctx->pc = 0x270bacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x270bb0: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x270bb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x270bb4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x270BB4u;
    {
        const bool branch_taken_0x270bb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x270BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270BB4u;
        // 0x270bb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270bb4) {
            ctx->pc = 0x270BF0u;
            goto label_270bf0;
        }
    }
    ctx->pc = 0x270BBCu;
    // 0x270bbc: 0xc096b58  jal         func_25AD60
    ctx->pc = 0x270BBCu;
    SET_GPR_U32(ctx, 31, 0x270BC4u);
    ctx->pc = 0x270BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270BBCu;
    // 0x270bc0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD60u, 0x270BBCu, 0x270BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270BC4u;
label_270bc4:
    // 0x270bc4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x270BC4u;
    {
        const bool branch_taken_0x270bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270bc4) {
            ctx->pc = 0x270BF0u;
            goto label_270bf0;
        }
    }
    ctx->pc = 0x270BCCu;
    // 0x270bcc: 0x0  nop
    ctx->pc = 0x270bccu;
    // NOP
label_270bd0:
    // 0x270bd0: 0x92240051  lbu         $a0, 0x51($s1)
    ctx->pc = 0x270bd0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 81)));
    // 0x270bd4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x270bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x270bd8: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x270BD8u;
    {
        const bool branch_taken_0x270bd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x270BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270BD8u;
        // 0x270bdc: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270bd8) {
            ctx->pc = 0x270BE8u;
            goto label_270be8;
        }
    }
    ctx->pc = 0x270BE0u;
    // 0x270be0: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x270BE0u;
    {
        const bool branch_taken_0x270be0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x270be0) {
            ctx->pc = 0x270BF0u;
            goto label_270bf0;
        }
    }
    ctx->pc = 0x270BE8u;
label_270be8:
    // 0x270be8: 0xa220007b  sb          $zero, 0x7B($s1)
    ctx->pc = 0x270be8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 123), (uint8_t)GPR_U32(ctx, 0));
    // 0x270bec: 0x0  nop
    ctx->pc = 0x270becu;
    // NOP
label_270bf0:
    // 0x270bf0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x270bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x270bf4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x270bf4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x270bf8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x270bf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x270bfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x270bfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x270c00: 0x3e00008  jr          $ra
    ctx->pc = 0x270C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270C00u;
        // 0x270c04: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270C00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x270C08u;
}
