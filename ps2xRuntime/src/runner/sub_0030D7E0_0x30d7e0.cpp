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

// Function: sub_0030D7E0
// Address: 0x30d7e0 - 0x30d9b4
void sub_0030D7E0_0x30d7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D7E0_0x30d7e0");
#endif

    switch (ctx->pc) {
        case 0x30d88cu: goto label_30d88c;
        default: break;
    }

    ctx->pc = 0x30d7e0u;

    // 0x30d7e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30d7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30d7e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x30d7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x30d7e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30d7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30d7ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30d7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30d7f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30d7f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d7f4: 0x8c830604  lw          $v1, 0x604($a0)
    ctx->pc = 0x30d7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1540)));
    // 0x30d7f8: 0x28610080  slti        $at, $v1, 0x80
    ctx->pc = 0x30d7f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x30d7fc: 0x10200068  beqz        $at, . + 4 + (0x68 << 2)
    ctx->pc = 0x30D7FCu;
    {
        const bool branch_taken_0x30d7fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D7FCu;
        // 0x30d800: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d7fc) {
            ctx->pc = 0x30D9A0u;
            goto label_30d9a0;
        }
    }
    ctx->pc = 0x30D804u;
    // 0x30d804: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x30d804u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x30d808: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30d808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30d80c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x30d80cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x30d810: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x30d810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x30d814: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x30d814u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x30d818: 0x8e230604  lw          $v1, 0x604($s1)
    ctx->pc = 0x30d818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1540)));
    // 0x30d81c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x30d81cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x30d820: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30d820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30d824: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x30d824u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x30d828: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x30d828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x30d82c: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x30d82cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x30d830: 0x96020030  lhu         $v0, 0x30($s0)
    ctx->pc = 0x30d830u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x30d834: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x30d834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x30d838: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x30D838u;
    {
        const bool branch_taken_0x30d838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d838) {
            ctx->pc = 0x30D860u;
            goto label_30d860;
        }
    }
    ctx->pc = 0x30D840u;
    // 0x30d840: 0x8e230604  lw          $v1, 0x604($s1)
    ctx->pc = 0x30d840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1540)));
    // 0x30d844: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30d844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d848: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x30d848u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x30d84c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30d84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30d850: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x30d850u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x30d854: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x30d854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x30d858: 0xa0440008  sb          $a0, 0x8($v0)
    ctx->pc = 0x30d858u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 4));
    // 0x30d85c: 0x0  nop
    ctx->pc = 0x30d85cu;
    // NOP
label_30d860:
    // 0x30d860: 0x8e230604  lw          $v1, 0x604($s1)
    ctx->pc = 0x30d860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1540)));
    // 0x30d864: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x30d864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x30d868: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x30d868u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x30d86c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30d86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30d870: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x30d870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x30d874: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x30d874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x30d878: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x30d878u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x30d87c: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x30d87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x30d880: 0x8c440088  lw          $a0, 0x88($v0)
    ctx->pc = 0x30d880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x30d884: 0xc04d7c8  jal         func_135F20
    ctx->pc = 0x30D884u;
    SET_GPR_U32(ctx, 31, 0x30D88Cu);
    ctx->pc = 0x30D888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D884u;
    // 0x30d888: 0x8c25fde8  lw          $a1, -0x218($at) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966760)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F20u, 0x30D884u, 0x30D88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D88Cu;
label_30d88c:
    // 0x30d88c: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x30d88cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
    // 0x30d890: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x30d890u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30d894: 0x0  nop
    ctx->pc = 0x30d894u;
    // NOP
    // 0x30d898: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x30d898u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30d89c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x30D89Cu;
    {
        const bool branch_taken_0x30d89c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30d89c) {
            ctx->pc = 0x30D8C0u;
            goto label_30d8c0;
        }
    }
    ctx->pc = 0x30D8A4u;
    // 0x30d8a4: 0x8e240604  lw          $a0, 0x604($s1)
    ctx->pc = 0x30d8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1540)));
    // 0x30d8a8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x30d8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x30d8ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30d8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30d8b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x30d8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30d8b4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x30d8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x30d8b8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x30D8B8u;
    {
        const bool branch_taken_0x30d8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D8B8u;
        // 0x30d8bc: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d8b8) {
            ctx->pc = 0x30D928u;
            goto label_30d928;
        }
    }
    ctx->pc = 0x30D8C0u;
label_30d8c0:
    // 0x30d8c0: 0x3c034496  lui         $v1, 0x4496
    ctx->pc = 0x30d8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17558 << 16));
    // 0x30d8c4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x30d8c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30d8c8: 0x0  nop
    ctx->pc = 0x30d8c8u;
    // NOP
    // 0x30d8cc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x30d8ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30d8d0: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x30D8D0u;
    {
        const bool branch_taken_0x30d8d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30d8d0) {
            ctx->pc = 0x30D8F8u;
            goto label_30d8f8;
        }
    }
    ctx->pc = 0x30D8D8u;
    // 0x30d8d8: 0x8e240604  lw          $a0, 0x604($s1)
    ctx->pc = 0x30d8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1540)));
    // 0x30d8dc: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x30d8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x30d8e0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x30d8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x30d8e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30d8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30d8e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x30d8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30d8ec: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x30d8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x30d8f0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x30D8F0u;
    {
        const bool branch_taken_0x30d8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D8F0u;
        // 0x30d8f4: 0xac650004  sw          $a1, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d8f0) {
            ctx->pc = 0x30D928u;
            goto label_30d928;
        }
    }
    ctx->pc = 0x30D8F8u;
label_30d8f8:
    // 0x30d8f8: 0x8e240604  lw          $a0, 0x604($s1)
    ctx->pc = 0x30d8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1540)));
    // 0x30d8fc: 0x3c033b23  lui         $v1, 0x3B23
    ctx->pc = 0x30d8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15139 << 16));
    // 0x30d900: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x30d900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x30d904: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x30d904u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30d908: 0x0  nop
    ctx->pc = 0x30d908u;
    // NOP
    // 0x30d90c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x30d90cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x30d910: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x30d910u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x30d914: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30d914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30d918: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x30d918u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30d91c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x30d91cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x30d920: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x30d920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x30d924: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x30d924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_30d928:
    // 0x30d928: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x30d928u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30d92c: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x30d92cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x30d930: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x30d930u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x30d934: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x30D934u;
    {
        const bool branch_taken_0x30d934 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D934u;
        // 0x30d938: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d934) {
            ctx->pc = 0x30D940u;
            goto label_30d940;
        }
    }
    ctx->pc = 0x30D93Cu;
    // 0x30d93c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x30d93cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30d940:
    // 0x30d940: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x30D940u;
    {
        const bool branch_taken_0x30d940 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d940) {
            ctx->pc = 0x30D990u;
            goto label_30d990;
        }
    }
    ctx->pc = 0x30D948u;
    // 0x30d948: 0x92050002  lbu         $a1, 0x2($s0)
    ctx->pc = 0x30d948u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x30d94c: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x30d94cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x30d950: 0x24630b9a  addiu       $v1, $v1, 0xB9A
    ctx->pc = 0x30d950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2970));
    // 0x30d954: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x30d954u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x30d958: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x30d958u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x30d95c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x30d95cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30d960: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30d960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30d964: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x30d964u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30d968: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x30d968u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x30d96c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x30D96Cu;
    {
        const bool branch_taken_0x30d96c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30d96c) {
            ctx->pc = 0x30D990u;
            goto label_30d990;
        }
    }
    ctx->pc = 0x30D974u;
    // 0x30d974: 0x8e240604  lw          $a0, 0x604($s1)
    ctx->pc = 0x30d974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1540)));
    // 0x30d978: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x30d978u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x30d97c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30d97cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30d980: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x30d980u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30d984: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x30d984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x30d988: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30d988u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x30d98c: 0x0  nop
    ctx->pc = 0x30d98cu;
    // NOP
label_30d990:
    // 0x30d990: 0x8e230604  lw          $v1, 0x604($s1)
    ctx->pc = 0x30d990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1540)));
    // 0x30d994: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x30d994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x30d998: 0xae230604  sw          $v1, 0x604($s1)
    ctx->pc = 0x30d998u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1540), GPR_U32(ctx, 3));
    // 0x30d99c: 0x0  nop
    ctx->pc = 0x30d99cu;
    // NOP
label_30d9a0:
    // 0x30d9a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x30d9a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30d9a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30d9a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30d9a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30d9a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30d9ac: 0x3e00008  jr          $ra
    ctx->pc = 0x30D9ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D9ACu;
        // 0x30d9b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D9ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D9B4u;
}
