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

// Function: sub_0017F940
// Address: 0x17f940 - 0x17fd44
void sub_0017F940_0x17f940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F940_0x17f940");
#endif

    switch (ctx->pc) {
        case 0x17f9ccu: goto label_17f9cc;
        case 0x17f9fcu: goto label_17f9fc;
        case 0x17fa2cu: goto label_17fa2c;
        case 0x17fa5cu: goto label_17fa5c;
        case 0x17fa88u: goto label_17fa88;
        case 0x17faa0u: goto label_17faa0;
        case 0x17fb08u: goto label_17fb08;
        case 0x17fb68u: goto label_17fb68;
        case 0x17fc20u: goto label_17fc20;
        case 0x17fc98u: goto label_17fc98;
        default: break;
    }

    ctx->pc = 0x17f940u;

    // 0x17f940: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17f940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17f944: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x17f944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x17f948: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17f948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17f94c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x17f94cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x17f950: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17f950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17f954: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17f954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17f958: 0x8c26cebc  lw          $a2, -0x3144($at)
    ctx->pc = 0x17f958u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x17f95c: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x17f95cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x17f960: 0x146000f3  bnez        $v1, . + 4 + (0xF3 << 2)
    ctx->pc = 0x17F960u;
    {
        const bool branch_taken_0x17f960 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F960u;
        // 0x17f964: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f960) {
            ctx->pc = 0x17FD30u;
            goto label_17fd30;
        }
    }
    ctx->pc = 0x17F968u;
    // 0x17f968: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x17f968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x17f96c: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x17f96cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x17f970: 0x8c26ceb8  lw          $a2, -0x3148($at)
    ctx->pc = 0x17f970u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x17f974: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x17f974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x17f978: 0x146000ed  bnez        $v1, . + 4 + (0xED << 2)
    ctx->pc = 0x17F978u;
    {
        const bool branch_taken_0x17f978 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F978u;
        // 0x17f97c: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f978) {
            ctx->pc = 0x17FD30u;
            goto label_17fd30;
        }
    }
    ctx->pc = 0x17F980u;
    // 0x17f980: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x17f980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x17f984: 0x9031cea4  lbu         $s1, -0x315C($at)
    ctx->pc = 0x17f984u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294954660)));
    // 0x17f988: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x17f988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x17f98c: 0x8c26cec0  lw          $a2, -0x3140($at)
    ctx->pc = 0x17f98cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x17f990: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x17f990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x17f994: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x17F994u;
    {
        const bool branch_taken_0x17f994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f994) {
            ctx->pc = 0x17FA68u;
            goto label_17fa68;
        }
    }
    ctx->pc = 0x17F99Cu;
    // 0x17f99c: 0x3a220001  xori        $v0, $s1, 0x1
    ctx->pc = 0x17f99cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
    // 0x17f9a0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x17f9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x17f9a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17f9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17f9a8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x17f9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x17f9ac: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x17f9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x17f9b0: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x17f9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x17f9b4: 0x8c450048  lw          $a1, 0x48($v0)
    ctx->pc = 0x17f9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x17f9b8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x17f9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17f9bc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x17f9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x17f9c0: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x17f9c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x17f9c4: 0xc049522  jal         func_125488
    ctx->pc = 0x17F9C4u;
    SET_GPR_U32(ctx, 31, 0x17F9CCu);
    ctx->pc = 0x17F9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F9C4u;
    // 0x17f9c8: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x17F9C4u, 0x17F9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F9CCu;
label_17f9cc:
    // 0x17f9cc: 0x3a220001  xori        $v0, $s1, 0x1
    ctx->pc = 0x17f9ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
    // 0x17f9d0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x17f9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x17f9d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17f9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17f9d8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x17f9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x17f9dc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x17f9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x17f9e0: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x17f9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x17f9e4: 0x8c450040  lw          $a1, 0x40($v0)
    ctx->pc = 0x17f9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x17f9e8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x17f9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17f9ec: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x17f9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x17f9f0: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x17f9f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x17f9f4: 0xc049522  jal         func_125488
    ctx->pc = 0x17F9F4u;
    SET_GPR_U32(ctx, 31, 0x17F9FCu);
    ctx->pc = 0x17F9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F9F4u;
    // 0x17f9f8: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x17F9F4u, 0x17F9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F9FCu;
label_17f9fc:
    // 0x17f9fc: 0x3a220001  xori        $v0, $s1, 0x1
    ctx->pc = 0x17f9fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
    // 0x17fa00: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x17fa00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x17fa04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17fa04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17fa08: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x17fa08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x17fa0c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x17fa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x17fa10: 0x8c640050  lw          $a0, 0x50($v1)
    ctx->pc = 0x17fa10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x17fa14: 0x8c450050  lw          $a1, 0x50($v0)
    ctx->pc = 0x17fa14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x17fa18: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x17fa18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17fa1c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x17fa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x17fa20: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x17fa20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x17fa24: 0xc049522  jal         func_125488
    ctx->pc = 0x17FA24u;
    SET_GPR_U32(ctx, 31, 0x17FA2Cu);
    ctx->pc = 0x17FA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FA24u;
    // 0x17fa28: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x17FA24u, 0x17FA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FA2Cu;
label_17fa2c:
    // 0x17fa2c: 0x3a220001  xori        $v0, $s1, 0x1
    ctx->pc = 0x17fa2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
    // 0x17fa30: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x17fa30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x17fa34: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17fa34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17fa38: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x17fa38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x17fa3c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x17fa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x17fa40: 0x8c640058  lw          $a0, 0x58($v1)
    ctx->pc = 0x17fa40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x17fa44: 0x8c450058  lw          $a1, 0x58($v0)
    ctx->pc = 0x17fa44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x17fa48: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x17fa48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17fa4c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x17fa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x17fa50: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x17fa50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x17fa54: 0xc049522  jal         func_125488
    ctx->pc = 0x17FA54u;
    SET_GPR_U32(ctx, 31, 0x17FA5Cu);
    ctx->pc = 0x17FA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FA54u;
    // 0x17fa58: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x17FA54u, 0x17FA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FA5Cu;
label_17fa5c:
    // 0x17fa5c: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x17FA5Cu;
    {
        const bool branch_taken_0x17fa5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17fa5c) {
            ctx->pc = 0x17FD30u;
            goto label_17fd30;
        }
    }
    ctx->pc = 0x17FA64u;
    // 0x17fa64: 0x0  nop
    ctx->pc = 0x17fa64u;
    // NOP
label_17fa68:
    // 0x17fa68: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x17fa68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x17fa6c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17fa6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17fa70: 0xae030070  sw          $v1, 0x70($s0)
    ctx->pc = 0x17fa70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
    // 0x17fa74: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x17fa74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x17fa78: 0x146000ad  bnez        $v1, . + 4 + (0xAD << 2)
    ctx->pc = 0x17FA78u;
    {
        const bool branch_taken_0x17fa78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17fa78) {
            ctx->pc = 0x17FD30u;
            goto label_17fd30;
        }
    }
    ctx->pc = 0x17FA80u;
    // 0x17fa80: 0xc07282c  jal         func_1CA0B0
    ctx->pc = 0x17FA80u;
    SET_GPR_U32(ctx, 31, 0x17FA88u);
    ctx->pc = 0x1CA0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA0B0u, 0x17FA80u, 0x17FA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FA88u;
label_17fa88:
    // 0x17fa88: 0x8e050074  lw          $a1, 0x74($s0)
    ctx->pc = 0x17fa88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x17fa8c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x17fa8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17fa90: 0xc4a20024  lwc1        $f2, 0x24($a1)
    ctx->pc = 0x17fa90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17fa94: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x17fa94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17fa98: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17FA98u;
    {
        const bool branch_taken_0x17fa98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FA98u;
        // 0x17fa9c: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fa98) {
            ctx->pc = 0x17FABCu;
            goto label_17fabc;
        }
    }
    ctx->pc = 0x17FAA0u;
label_17faa0:
    // 0x17faa0: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x17faa0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x17faa4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x17faa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x17faa8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x17faa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x17faac: 0x0  nop
    ctx->pc = 0x17faacu;
    // NOP
    // 0x17fab0: 0x0  nop
    ctx->pc = 0x17fab0u;
    // NOP
    // 0x17fab4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17FAB4u;
    {
        const bool branch_taken_0x17fab4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17fab4) {
            ctx->pc = 0x17FAA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17faa0;
        }
    }
    ctx->pc = 0x17FABCu;
label_17fabc:
    // 0x17fabc: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x17fabcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
    // 0x17fac0: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x17fac0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x17fac4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x17fac4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17fac8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x17fac8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17facc: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x17faccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x17fad0: 0x906021  addu        $t4, $a0, $s0
    ctx->pc = 0x17fad0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x17fad4: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x17fad4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x17fad8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x17fad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17fadc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17fadcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17fae0: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x17fae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x17fae4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x17fae4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x17fae8: 0x3a230001  xori        $v1, $s1, 0x1
    ctx->pc = 0x17fae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
    // 0x17faec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17faecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17faf0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x17faf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x17faf4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x17faf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x17faf8: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x17faf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x17fafc: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x17FAFCu;
    {
        const bool branch_taken_0x17fafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FAFCu;
        // 0x17fb00: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fafc) {
            ctx->pc = 0x17FBF8u;
            goto label_17fbf8;
        }
    }
    ctx->pc = 0x17FB04u;
    // 0x17fb04: 0x0  nop
    ctx->pc = 0x17fb04u;
    // NOP
label_17fb08:
    // 0x17fb08: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x17fb08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17fb0c: 0x42082  srl         $a0, $a0, 2
    ctx->pc = 0x17fb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
    // 0x17fb10: 0xafa4004c  sw          $a0, 0x4C($sp)
    ctx->pc = 0x17fb10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 4));
    // 0x17fb14: 0x8e0f0008  lw          $t7, 0x8($s0)
    ctx->pc = 0x17fb14u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17fb18: 0x8d8a0040  lw          $t2, 0x40($t4)
    ctx->pc = 0x17fb18u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 64)));
    // 0x17fb1c: 0x8d880048  lw          $t0, 0x48($t4)
    ctx->pc = 0x17fb1cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 72)));
    // 0x17fb20: 0x8c6d0040  lw          $t5, 0x40($v1)
    ctx->pc = 0x17fb20u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x17fb24: 0x8c690048  lw          $t1, 0x48($v1)
    ctx->pc = 0x17fb24u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x17fb28: 0xef7018  mult        $t6, $a3, $t7
    ctx->pc = 0x17fb28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x17fb2c: 0x70ef2018  mult1       $a0, $a3, $t7
    ctx->pc = 0x17fb2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 15); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x17fb30: 0x248b0004  addiu       $t3, $a0, 0x4
    ctx->pc = 0x17fb30u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x17fb34: 0xf2080  sll         $a0, $t7, 2
    ctx->pc = 0x17fb34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x17fb38: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x17fb38u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x17fb3c: 0x14b7821  addu        $t7, $t2, $t3
    ctx->pc = 0x17fb3cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x17fb40: 0x10b5021  addu        $t2, $t0, $t3
    ctx->pc = 0x17fb40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x17fb44: 0x25c80004  addiu       $t0, $t6, 0x4
    ctx->pc = 0x17fb44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x17fb48: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x17fb48u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x17fb4c: 0x1285821  addu        $t3, $t1, $t0
    ctx->pc = 0x17fb4cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x17fb50: 0x1a86821  addu        $t5, $t5, $t0
    ctx->pc = 0x17fb50u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 8)));
    // 0x17fb54: 0x1644823  subu        $t1, $t3, $a0
    ctx->pc = 0x17fb54u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x17fb58: 0x1644021  addu        $t0, $t3, $a0
    ctx->pc = 0x17fb58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x17fb5c: 0x2020  add         $a0, $zero, $zero
    ctx->pc = 0x17fb5cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x17fb60: 0xd8ca0000  lqc2        $vf10, 0x0($a2)
    ctx->pc = 0x17fb60u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x17fb64: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x17fb64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_17fb68:
    // 0x17fb68: 0xd961fff0  lqc2        $vf1, -0x10($t3)
    ctx->pc = 0x17fb68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 4294967280)));
    // 0x17fb6c: 0xd9620000  lqc2        $vf2, 0x0($t3)
    ctx->pc = 0x17fb6cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x17fb70: 0xd9630010  lqc2        $vf3, 0x10($t3)
    ctx->pc = 0x17fb70u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x17fb74: 0xd9240000  lqc2        $vf4, 0x0($t1)
    ctx->pc = 0x17fb74u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x17fb78: 0xd9050000  lqc2        $vf5, 0x0($t0)
    ctx->pc = 0x17fb78u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x17fb7c: 0xd9ab0000  lqc2        $vf11, 0x0($t5)
    ctx->pc = 0x17fb7cu;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x17fb80: 0x4be6133d  vmr32.xyzw  $vf6, $vf2
    ctx->pc = 0x17fb80u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x17fb84: 0x4be31b3d  vmr32.xyzw  $vf3, $vf3
    ctx->pc = 0x17fb84u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x17fb88: 0x21ad0010  addi        $t5, $t5, 0x10
    ctx->pc = 0x17fb88u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 13), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 13, (int32_t)tmp); }
    // 0x17fb8c: 0x4be10b3d  vmr32.xyzw  $vf1, $vf1
    ctx->pc = 0x17fb8cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x17fb90: 0x4bc3333c  vmove.xyz   $vf3, $vf6
    ctx->pc = 0x17fb90u;
    { __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], ctx->vu0_vf[6], _mm_castsi128_ps(mask)); }
    // 0x17fb94: 0x4be6333d  vmr32.xyzw  $vf6, $vf6
    ctx->pc = 0x17fb94u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x17fb98: 0x4be10b3d  vmr32.xyzw  $vf1, $vf1
    ctx->pc = 0x17fb98u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x17fb9c: 0x216b0010  addi        $t3, $t3, 0x10
    ctx->pc = 0x17fb9cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 11), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 11, (int32_t)tmp); }
    // 0x17fba0: 0x21290010  addi        $t1, $t1, 0x10
    ctx->pc = 0x17fba0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 9), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
    // 0x17fba4: 0x4be6333d  vmr32.xyzw  $vf6, $vf6
    ctx->pc = 0x17fba4u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x17fba8: 0x4be10b3d  vmr32.xyzw  $vf1, $vf1
    ctx->pc = 0x17fba8u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x17fbac: 0x21080010  addi        $t0, $t0, 0x10
    ctx->pc = 0x17fbacu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 8), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
    // 0x17fbb0: 0x2084ffff  addi        $a0, $a0, -0x1
    ctx->pc = 0x17fbb0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x17fbb4: 0x4bea59bc  vmulax.xyzw $ACC, $vf11, $vf10x
    ctx->pc = 0x17fbb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x17fbb8: 0x4bea10be  vmaddaz.xyzw $ACC, $vf2, $vf10z
    ctx->pc = 0x17fbb8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x17fbbc: 0x4ae1333c  vmove.yzw   $vf1, $vf6
    ctx->pc = 0x17fbbcu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[6], _mm_castsi128_ps(mask)); }
    // 0x17fbc0: 0x4bea20bd  vmadday.xyzw $ACC, $vf4, $vf10y
    ctx->pc = 0x17fbc0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x17fbc4: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x17fbc4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x17fbc8: 0x4bea18bd  vmadday.xyzw $ACC, $vf3, $vf10y
    ctx->pc = 0x17fbc8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x17fbcc: 0x4bea08bd  vmadday.xyzw $ACC, $vf1, $vf10y
    ctx->pc = 0x17fbccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x17fbd0: 0x4be00188  vmaddx.xyzw $vf6, $vf0, $vf0x
    ctx->pc = 0x17fbd0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x17fbd4: 0x4be0108b  vmaddw.xyzw $vf2, $vf2, $vf0w
    ctx->pc = 0x17fbd4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x17fbd8: 0xf9e60000  sqc2        $vf6, 0x0($t7)
    ctx->pc = 0x17fbd8u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x17fbdc: 0xf9420000  sqc2        $vf2, 0x0($t2)
    ctx->pc = 0x17fbdcu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x17fbe0: 0x21ef0010  addi        $t7, $t7, 0x10
    ctx->pc = 0x17fbe0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 15), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
    // 0x17fbe4: 0x1404ffe0  bne         $zero, $a0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x17FBE4u;
    {
        const bool branch_taken_0x17fbe4 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 4));
        ctx->pc = 0x17FBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FBE4u;
        // 0x17fbe8: 0x214a0010  addi        $t2, $t2, 0x10 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 10), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 10, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fbe4) {
            ctx->pc = 0x17FB68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17fb68;
        }
    }
    ctx->pc = 0x17FBECu;
    // 0x17fbec: 0x0  nop
    ctx->pc = 0x17fbecu;
    // NOP
    // 0x17fbf0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x17fbf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x17fbf4: 0x0  nop
    ctx->pc = 0x17fbf4u;
    // NOP
label_17fbf8:
    // 0x17fbf8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x17fbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17fbfc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x17fbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x17fc00: 0xe4202b  sltu        $a0, $a3, $a0
    ctx->pc = 0x17fc00u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x17fc04: 0x1480ffc0  bnez        $a0, . + 4 + (-0x40 << 2)
    ctx->pc = 0x17FC04u;
    {
        const bool branch_taken_0x17fc04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x17fc04) {
            ctx->pc = 0x17FB08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17fb08;
        }
    }
    ctx->pc = 0x17FC0Cu;
    // 0x17fc0c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x17fc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x17fc10: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x17fc10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17fc14: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x17fc14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x17fc18: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x17FC18u;
    {
        const bool branch_taken_0x17fc18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FC18u;
        // 0x17fc1c: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fc18) {
            ctx->pc = 0x17FD18u;
            goto label_17fd18;
        }
    }
    ctx->pc = 0x17FC20u;
label_17fc20:
    // 0x17fc20: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x17fc20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17fc24: 0x42082  srl         $a0, $a0, 2
    ctx->pc = 0x17fc24u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
    // 0x17fc28: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x17fc28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x17fc2c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x17fc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17fc30: 0x8e090008  lw          $t1, 0x8($s0)
    ctx->pc = 0x17fc30u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17fc34: 0x8e0b0008  lw          $t3, 0x8($s0)
    ctx->pc = 0x17fc34u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17fc38: 0x8e0a0008  lw          $t2, 0x8($s0)
    ctx->pc = 0x17fc38u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17fc3c: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x17fc3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17fc40: 0x8c6c0048  lw          $t4, 0x48($v1)
    ctx->pc = 0x17fc40u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x17fc44: 0xe46818  mult        $t5, $a3, $a0
    ctx->pc = 0x17fc44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x17fc48: 0x8c680050  lw          $t0, 0x50($v1)
    ctx->pc = 0x17fc48u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x17fc4c: 0x70e94818  mult1       $t1, $a3, $t1
    ctx->pc = 0x17fc4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 9); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x17fc50: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x17fc50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x17fc54: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x17fc54u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x17fc58: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x17fc58u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x17fc5c: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x17fc5cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x17fc60: 0xe63018  mult        $a2, $a3, $a2
    ctx->pc = 0x17fc60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x17fc64: 0x8c640058  lw          $a0, 0x58($v1)
    ctx->pc = 0x17fc64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x17fc68: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x17fc68u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x17fc6c: 0xd6880  sll         $t5, $t5, 2
    ctx->pc = 0x17fc6cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x17fc70: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x17fc70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x17fc74: 0x18d6021  addu        $t4, $t4, $t5
    ctx->pc = 0x17fc74u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x17fc78: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x17fc78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x17fc7c: 0x18b5823  subu        $t3, $t4, $t3
    ctx->pc = 0x17fc7cu;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x17fc80: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x17fc80u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x17fc84: 0x18a4821  addu        $t1, $t4, $t2
    ctx->pc = 0x17fc84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
    // 0x17fc88: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x17fc88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x17fc8c: 0x2020  add         $a0, $zero, $zero
    ctx->pc = 0x17fc8cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x17fc90: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x17fc90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17fc94: 0x0  nop
    ctx->pc = 0x17fc94u;
    // NOP
label_17fc98:
    // 0x17fc98: 0xd981fff0  lqc2        $vf1, -0x10($t4)
    ctx->pc = 0x17fc98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 12), 4294967280)));
    // 0x17fc9c: 0xd9820000  lqc2        $vf2, 0x0($t4)
    ctx->pc = 0x17fc9cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x17fca0: 0xd9830010  lqc2        $vf3, 0x10($t4)
    ctx->pc = 0x17fca0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x17fca4: 0xd9640000  lqc2        $vf4, 0x0($t3)
    ctx->pc = 0x17fca4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x17fca8: 0xd9250000  lqc2        $vf5, 0x0($t1)
    ctx->pc = 0x17fca8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x17fcac: 0x4be6133d  vmr32.xyzw  $vf6, $vf2
    ctx->pc = 0x17fcacu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x17fcb0: 0x4be31b3d  vmr32.xyzw  $vf3, $vf3
    ctx->pc = 0x17fcb0u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x17fcb4: 0x218c0010  addi        $t4, $t4, 0x10
    ctx->pc = 0x17fcb4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 12), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
    // 0x17fcb8: 0x4be10b3d  vmr32.xyzw  $vf1, $vf1
    ctx->pc = 0x17fcb8u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x17fcbc: 0x4bc3333c  vmove.xyz   $vf3, $vf6
    ctx->pc = 0x17fcbcu;
    { __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], ctx->vu0_vf[6], _mm_castsi128_ps(mask)); }
    // 0x17fcc0: 0x4be6333d  vmr32.xyzw  $vf6, $vf6
    ctx->pc = 0x17fcc0u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x17fcc4: 0x4be10b3d  vmr32.xyzw  $vf1, $vf1
    ctx->pc = 0x17fcc4u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x17fcc8: 0x216b0010  addi        $t3, $t3, 0x10
    ctx->pc = 0x17fcc8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 11), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 11, (int32_t)tmp); }
    // 0x17fccc: 0x21290010  addi        $t1, $t1, 0x10
    ctx->pc = 0x17fcccu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 9), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
    // 0x17fcd0: 0x4be6333d  vmr32.xyzw  $vf6, $vf6
    ctx->pc = 0x17fcd0u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x17fcd4: 0x4be10b3d  vmr32.xyzw  $vf1, $vf1
    ctx->pc = 0x17fcd4u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x17fcd8: 0x4be520ac  vsub.xyzw   $vf2, $vf4, $vf5
    ctx->pc = 0x17fcd8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x17fcdc: 0x2084ffff  addi        $a0, $a0, -0x1
    ctx->pc = 0x17fcdcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x17fce0: 0x4a0002ff  vnop
    ctx->pc = 0x17fce0u;
    // NOP operation, no action needed for VU0
    // 0x17fce4: 0x4ae1333c  vmove.yzw   $vf1, $vf6
    ctx->pc = 0x17fce4u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[6], _mm_castsi128_ps(mask)); }
    // 0x17fce8: 0x4a0002ff  vnop
    ctx->pc = 0x17fce8u;
    // NOP operation, no action needed for VU0
    // 0x17fcec: 0x4a0002ff  vnop
    ctx->pc = 0x17fcecu;
    // NOP operation, no action needed for VU0
    // 0x17fcf0: 0x4a0002ff  vnop
    ctx->pc = 0x17fcf0u;
    // NOP operation, no action needed for VU0
    // 0x17fcf4: 0x4be309ec  vsub.xyzw   $vf7, $vf1, $vf3
    ctx->pc = 0x17fcf4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x17fcf8: 0xf9070000  sqc2        $vf7, 0x0($t0)
    ctx->pc = 0x17fcf8u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x17fcfc: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x17fcfcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x17fd00: 0x21080010  addi        $t0, $t0, 0x10
    ctx->pc = 0x17fd00u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 8), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
    // 0x17fd04: 0x1404ffe4  bne         $zero, $a0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x17FD04u;
    {
        const bool branch_taken_0x17fd04 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 4));
        ctx->pc = 0x17FD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FD04u;
        // 0x17fd08: 0x20c60010  addi        $a2, $a2, 0x10 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 6), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fd04) {
            ctx->pc = 0x17FC98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17fc98;
        }
    }
    ctx->pc = 0x17FD0Cu;
    // 0x17fd0c: 0x0  nop
    ctx->pc = 0x17fd0cu;
    // NOP
    // 0x17fd10: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x17fd10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x17fd14: 0x0  nop
    ctx->pc = 0x17fd14u;
    // NOP
label_17fd18:
    // 0x17fd18: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x17fd18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17fd1c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x17fd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x17fd20: 0xe4202b  sltu        $a0, $a3, $a0
    ctx->pc = 0x17fd20u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x17fd24: 0x1480ffbe  bnez        $a0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x17FD24u;
    {
        const bool branch_taken_0x17fd24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x17fd24) {
            ctx->pc = 0x17FC20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17fc20;
        }
    }
    ctx->pc = 0x17FD2Cu;
    // 0x17fd2c: 0x0  nop
    ctx->pc = 0x17fd2cu;
    // NOP
label_17fd30:
    // 0x17fd30: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17fd30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17fd34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17fd34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17fd38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17fd38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fd3c: 0x3e00008  jr          $ra
    ctx->pc = 0x17FD3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FD3Cu;
        // 0x17fd40: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FD3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17FD44u;
}
