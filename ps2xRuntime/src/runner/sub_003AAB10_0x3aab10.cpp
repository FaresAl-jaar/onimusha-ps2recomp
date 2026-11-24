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

// Function: sub_003AAB10
// Address: 0x3aab10 - 0x3aad34
void sub_003AAB10_0x3aab10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AAB10_0x3aab10");
#endif

    switch (ctx->pc) {
        case 0x3aab7cu: goto label_3aab7c;
        case 0x3aab94u: goto label_3aab94;
        case 0x3aaba4u: goto label_3aaba4;
        case 0x3aabecu: goto label_3aabec;
        case 0x3aabfcu: goto label_3aabfc;
        case 0x3aac2cu: goto label_3aac2c;
        case 0x3aac3cu: goto label_3aac3c;
        case 0x3aac64u: goto label_3aac64;
        case 0x3aacacu: goto label_3aacac;
        case 0x3aace0u: goto label_3aace0;
        default: break;
    }

    ctx->pc = 0x3aab10u;

    // 0x3aab10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3aab10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3aab14: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3aab14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3aab18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3aab18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3aab1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3aab1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3aab20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3aab20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3aab24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3aab24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aab28: 0x90840003  lbu         $a0, 0x3($a0)
    ctx->pc = 0x3aab28u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x3aab2c: 0x1082003a  beq         $a0, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x3AAB2Cu;
    {
        const bool branch_taken_0x3aab2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3AAB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAB2Cu;
        // 0x3aab30: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aab2c) {
            ctx->pc = 0x3AAC18u;
            goto label_3aac18;
        }
    }
    ctx->pc = 0x3AAB34u;
    // 0x3aab34: 0x10820028  beq         $a0, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x3AAB34u;
    {
        const bool branch_taken_0x3aab34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3AAB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAB34u;
        // 0x3aab38: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aab34) {
            ctx->pc = 0x3AABD8u;
            goto label_3aabd8;
        }
    }
    ctx->pc = 0x3AAB3Cu;
    // 0x3aab3c: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3AAB3Cu;
    {
        const bool branch_taken_0x3aab3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3aab3c) {
            ctx->pc = 0x3AAB80u;
            goto label_3aab80;
        }
    }
    ctx->pc = 0x3AAB44u;
    // 0x3aab44: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AAB44u;
    {
        const bool branch_taken_0x3aab44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aab44) {
            ctx->pc = 0x3AAB58u;
            goto label_3aab58;
        }
    }
    ctx->pc = 0x3AAB4Cu;
    // 0x3aab4c: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x3AAB4Cu;
    {
        const bool branch_taken_0x3aab4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aab4c) {
            ctx->pc = 0x3AAD18u;
            goto label_3aad18;
        }
    }
    ctx->pc = 0x3AAB54u;
    // 0x3aab54: 0x0  nop
    ctx->pc = 0x3aab54u;
    // NOP
label_3aab58:
    // 0x3aab58: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x3aab58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3aab5c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3aab5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3aab60: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x3aab60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x3aab64: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x3aab64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x3aab68: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x3aab68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
    // 0x3aab6c: 0x24848c30  addiu       $a0, $a0, -0x73D0
    ctx->pc = 0x3aab6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937648));
    // 0x3aab70: 0xa4238c12  sh          $v1, -0x73EE($at)
    ctx->pc = 0x3aab70u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B8C12u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x6B8C12u, _value); } while (0);
    // 0x3aab74: 0xc049ed2  jal         func_127B48
    ctx->pc = 0x3AAB74u;
    SET_GPR_U32(ctx, 31, 0x3AAB7Cu);
    ctx->pc = 0x3AAB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAB74u;
    // 0x3aab78: 0x24a52930  addiu       $a1, $a1, 0x2930 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B48u, 0x3AAB74u, 0x3AAB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAB7Cu;
label_3aab7c:
    // 0x3aab7c: 0x0  nop
    ctx->pc = 0x3aab7cu;
    // NOP
label_3aab80:
    // 0x3aab80: 0x82050007  lb          $a1, 0x7($s0)
    ctx->pc = 0x3aab80u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3aab84: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3aab84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3aab88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3aab88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aab8c: 0xc052840  jal         func_14A100
    ctx->pc = 0x3AAB8Cu;
    SET_GPR_U32(ctx, 31, 0x3AAB94u);
    ctx->pc = 0x3AAB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAB8Cu;
    // 0x3aab90: 0x24848c10  addiu       $a0, $a0, -0x73F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A100u, 0x3AAB8Cu, 0x3AAB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAB94u;
label_3aab94:
    // 0x3aab94: 0x14400060  bnez        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x3AAB94u;
    {
        const bool branch_taken_0x3aab94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AAB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAB94u;
        // 0x3aab98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aab94) {
            ctx->pc = 0x3AAD18u;
            goto label_3aad18;
        }
    }
    ctx->pc = 0x3AAB9Cu;
    // 0x3aab9c: 0xc0ea8f0  jal         func_3AA3C0
    ctx->pc = 0x3AAB9Cu;
    SET_GPR_U32(ctx, 31, 0x3AABA4u);
    ctx->pc = 0x3AA3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA3C0u, 0x3AAB9Cu, 0x3AABA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AABA4u;
label_3aaba4:
    // 0x3aaba4: 0x440005c  bltz        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x3AABA4u;
    {
        const bool branch_taken_0x3aaba4 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x3aaba4) {
            ctx->pc = 0x3AAD18u;
            goto label_3aad18;
        }
    }
    ctx->pc = 0x3AABACu;
    // 0x3aabac: 0x92040003  lbu         $a0, 0x3($s0)
    ctx->pc = 0x3aabacu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x3aabb0: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x3aabb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x3aabb4: 0x246399e0  addiu       $v1, $v1, -0x6620
    ctx->pc = 0x3aabb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941152));
    // 0x3aabb8: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x3aabb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
    // 0x3aabbc: 0x24020090  addiu       $v0, $zero, 0x90
    ctx->pc = 0x3aabbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x3aabc0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3aabc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3aabc4: 0xa2040003  sb          $a0, 0x3($s0)
    ctx->pc = 0x3aabc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x3aabc8: 0xac238c28  sw          $v1, -0x73D8($at)
    ctx->pc = 0x3aabc8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B8C28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B8C28u, _value); } while (0);
    // 0x3aabcc: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x3aabccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
    // 0x3aabd0: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x3AABD0u;
    {
        const bool branch_taken_0x3aabd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AABD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AABD0u;
        // 0x3aabd4: 0xac228c2c  sw          $v0, -0x73D4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294937644), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aabd0) {
            ctx->pc = 0x3AAD18u;
            goto label_3aad18;
        }
    }
    ctx->pc = 0x3AABD8u;
label_3aabd8:
    // 0x3aabd8: 0x82050007  lb          $a1, 0x7($s0)
    ctx->pc = 0x3aabd8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3aabdc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3aabdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3aabe0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3aabe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aabe4: 0xc052970  jal         func_14A5C0
    ctx->pc = 0x3AABE4u;
    SET_GPR_U32(ctx, 31, 0x3AABECu);
    ctx->pc = 0x3AABE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AABE4u;
    // 0x3aabe8: 0x24848c10  addiu       $a0, $a0, -0x73F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A5C0u, 0x3AABE4u, 0x3AABECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AABECu;
label_3aabec:
    // 0x3aabec: 0x1440004a  bnez        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x3AABECu;
    {
        const bool branch_taken_0x3aabec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AABF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AABECu;
        // 0x3aabf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aabec) {
            ctx->pc = 0x3AAD18u;
            goto label_3aad18;
        }
    }
    ctx->pc = 0x3AABF4u;
    // 0x3aabf4: 0xc0ea8f0  jal         func_3AA3C0
    ctx->pc = 0x3AABF4u;
    SET_GPR_U32(ctx, 31, 0x3AABFCu);
    ctx->pc = 0x3AA3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA3C0u, 0x3AABF4u, 0x3AABFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AABFCu;
label_3aabfc:
    // 0x3aabfc: 0x4400046  bltz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x3AABFCu;
    {
        const bool branch_taken_0x3aabfc = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x3aabfc) {
            ctx->pc = 0x3AAD18u;
            goto label_3aad18;
        }
    }
    ctx->pc = 0x3AAC04u;
    // 0x3aac04: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x3aac04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x3aac08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3aac08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3aac0c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x3AAC0Cu;
    {
        const bool branch_taken_0x3aac0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAC0Cu;
        // 0x3aac10: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aac0c) {
            ctx->pc = 0x3AAD18u;
            goto label_3aad18;
        }
    }
    ctx->pc = 0x3AAC14u;
    // 0x3aac14: 0x0  nop
    ctx->pc = 0x3aac14u;
    // NOP
label_3aac18:
    // 0x3aac18: 0x82050007  lb          $a1, 0x7($s0)
    ctx->pc = 0x3aac18u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3aac1c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3aac1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3aac20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3aac20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aac24: 0xc0528b4  jal         func_14A2D0
    ctx->pc = 0x3AAC24u;
    SET_GPR_U32(ctx, 31, 0x3AAC2Cu);
    ctx->pc = 0x3AAC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAC24u;
    // 0x3aac28: 0x24848c10  addiu       $a0, $a0, -0x73F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A2D0u, 0x3AAC24u, 0x3AAC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAC2Cu;
label_3aac2c:
    // 0x3aac2c: 0x1c40003a  bgtz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x3AAC2Cu;
    {
        const bool branch_taken_0x3aac2c = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x3AAC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAC2Cu;
        // 0x3aac30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aac2c) {
            ctx->pc = 0x3AAD18u;
            goto label_3aad18;
        }
    }
    ctx->pc = 0x3AAC34u;
    // 0x3aac34: 0xc0ea8f0  jal         func_3AA3C0
    ctx->pc = 0x3AAC34u;
    SET_GPR_U32(ctx, 31, 0x3AAC3Cu);
    ctx->pc = 0x3AA3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA3C0u, 0x3AAC34u, 0x3AAC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAC3Cu;
label_3aac3c:
    // 0x3aac3c: 0x4400036  bltz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x3AAC3Cu;
    {
        const bool branch_taken_0x3aac3c = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x3aac3c) {
            ctx->pc = 0x3AAD18u;
            goto label_3aad18;
        }
    }
    ctx->pc = 0x3AAC44u;
    // 0x3aac44: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x3aac44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aac48: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3aac48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3aac4c: 0x8c319a68  lw          $s1, -0x6598($at)
    ctx->pc = 0x3aac4cu;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x929A68u));
    // 0x3aac50: 0x3c050093  lui         $a1, 0x93
    ctx->pc = 0x3aac50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)147 << 16));
    // 0x3aac54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3aac54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aac58: 0x24a599e0  addiu       $a1, $a1, -0x6620
    ctx->pc = 0x3aac58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941152));
    // 0x3aac5c: 0xc0eb0c4  jal         func_3AC310
    ctx->pc = 0x3AAC5Cu;
    SET_GPR_U32(ctx, 31, 0x3AAC64u);
    ctx->pc = 0x3AAC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAC5Cu;
    // 0x3aac60: 0x24060090  addiu       $a2, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC310u, 0x3AAC5Cu, 0x3AAC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAC64u;
label_3aac64:
    // 0x3aac64: 0x1222000a  beq         $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3AAC64u;
    {
        const bool branch_taken_0x3aac64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x3aac64) {
            ctx->pc = 0x3AAC90u;
            goto label_3aac90;
        }
    }
    ctx->pc = 0x3AAC6Cu;
    // 0x3aac6c: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x3aac6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aac70: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3aac70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3aac74: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x3aac74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aac78: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3aac78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3aac7c: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x3aac7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aac80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3aac80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aac84: 0xa204000a  sb          $a0, 0xA($s0)
    ctx->pc = 0x3aac84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 4));
    // 0x3aac88: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x3AAC88u;
    {
        const bool branch_taken_0x3aac88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAC88u;
        // 0x3aac8c: 0xa6030014  sh          $v1, 0x14($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aac88) {
            ctx->pc = 0x3AAD20u;
            goto label_3aad20;
        }
    }
    ctx->pc = 0x3AAC90u;
label_3aac90:
    // 0x3aac90: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3aac90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3aac94: 0x8c319a6c  lw          $s1, -0x6594($at)
    ctx->pc = 0x3aac94u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x929A6Cu));
    // 0x3aac98: 0x3c050093  lui         $a1, 0x93
    ctx->pc = 0x3aac98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)147 << 16));
    // 0x3aac9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3aac9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aaca0: 0x24a599e0  addiu       $a1, $a1, -0x6620
    ctx->pc = 0x3aaca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941152));
    // 0x3aaca4: 0xc0eb0f4  jal         func_3AC3D0
    ctx->pc = 0x3AACA4u;
    SET_GPR_U32(ctx, 31, 0x3AACACu);
    ctx->pc = 0x3AACA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AACA4u;
    // 0x3aaca8: 0x24060090  addiu       $a2, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC3D0u, 0x3AACA4u, 0x3AACACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AACACu;
label_3aacac:
    // 0x3aacac: 0x1222000a  beq         $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3AACACu;
    {
        const bool branch_taken_0x3aacac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x3aacac) {
            ctx->pc = 0x3AACD8u;
            goto label_3aacd8;
        }
    }
    ctx->pc = 0x3AACB4u;
    // 0x3aacb4: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x3aacb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aacb8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3aacb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3aacbc: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x3aacbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aacc0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3aacc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3aacc4: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x3aacc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aacc8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3aacc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aaccc: 0xa204000a  sb          $a0, 0xA($s0)
    ctx->pc = 0x3aacccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 4));
    // 0x3aacd0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3AACD0u;
    {
        const bool branch_taken_0x3aacd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AACD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AACD0u;
        // 0x3aacd4: 0xa6030014  sh          $v1, 0x14($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aacd0) {
            ctx->pc = 0x3AAD20u;
            goto label_3aad20;
        }
    }
    ctx->pc = 0x3AACD8u;
label_3aacd8:
    // 0x3aacd8: 0xc0eb64c  jal         func_3AD930
    ctx->pc = 0x3AACD8u;
    SET_GPR_U32(ctx, 31, 0x3AACE0u);
    ctx->pc = 0x3AACDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AACD8u;
    // 0x3aacdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD930u, 0x3AACD8u, 0x3AACE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AACE0u;
label_3aace0:
    // 0x3aace0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3AACE0u;
    {
        const bool branch_taken_0x3aace0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aace0) {
            ctx->pc = 0x3AAD10u;
            goto label_3aad10;
        }
    }
    ctx->pc = 0x3AACE8u;
    // 0x3aace8: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x3aace8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aacec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3aacecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3aacf0: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x3aacf0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aacf4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3aacf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3aacf8: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x3aacf8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aacfc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3aacfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aad00: 0xa204000a  sb          $a0, 0xA($s0)
    ctx->pc = 0x3aad00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 4));
    // 0x3aad04: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3AAD04u;
    {
        const bool branch_taken_0x3aad04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAD04u;
        // 0x3aad08: 0xa6030014  sh          $v1, 0x14($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aad04) {
            ctx->pc = 0x3AAD20u;
            goto label_3aad20;
        }
    }
    ctx->pc = 0x3AAD0Cu;
    // 0x3aad0c: 0x0  nop
    ctx->pc = 0x3aad0cu;
    // NOP
label_3aad10:
    // 0x3aad10: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3AAD10u;
    {
        const bool branch_taken_0x3aad10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAD10u;
        // 0x3aad14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aad10) {
            ctx->pc = 0x3AAD20u;
            goto label_3aad20;
        }
    }
    ctx->pc = 0x3AAD18u;
label_3aad18:
    // 0x3aad18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3aad18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aad1c: 0x0  nop
    ctx->pc = 0x3aad1cu;
    // NOP
label_3aad20:
    // 0x3aad20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3aad20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3aad24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3aad24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3aad28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3aad28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3aad2c: 0x3e00008  jr          $ra
    ctx->pc = 0x3AAD2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AAD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAD2Cu;
        // 0x3aad30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AAD2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AAD34u;
}
