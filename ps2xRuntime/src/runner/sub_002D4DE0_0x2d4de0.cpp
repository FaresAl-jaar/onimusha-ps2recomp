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

// Function: sub_002D4DE0
// Address: 0x2d4de0 - 0x2d51ac
void sub_002D4DE0_0x2d4de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4DE0_0x2d4de0");
#endif

    switch (ctx->pc) {
        case 0x2d4f10u: goto label_2d4f10;
        case 0x2d4f7cu: goto label_2d4f7c;
        case 0x2d4fe0u: goto label_2d4fe0;
        case 0x2d504cu: goto label_2d504c;
        case 0x2d505cu: goto label_2d505c;
        case 0x2d50b0u: goto label_2d50b0;
        case 0x2d5110u: goto label_2d5110;
        case 0x2d5164u: goto label_2d5164;
        case 0x2d5170u: goto label_2d5170;
        default: break;
    }

    ctx->pc = 0x2d4de0u;

    // 0x2d4de0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2d4de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2d4de4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2d4de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2d4de8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2d4de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2d4dec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2d4decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2d4df0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2d4df0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4df4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d4df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d4df8: 0x92c3c  dsll32      $a1, $t1, 16
    ctx->pc = 0x2d4df8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) << (32 + 16));
    // 0x2d4dfc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d4dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d4e00: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x2d4e00u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x2d4e04: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d4e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d4e08: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2d4e08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4e0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d4e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d4e10: 0x8343c  dsll32      $a2, $t0, 16
    ctx->pc = 0x2d4e10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) << (32 + 16));
    // 0x2d4e14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d4e14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4e18: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d4e18u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d4e1c: 0xa443c  dsll32      $t0, $t2, 16
    ctx->pc = 0x2d4e1cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) << (32 + 16));
    // 0x2d4e20: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2d4e20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2d4e24: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x2d4e24u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x2d4e28: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x2d4e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2d4e2c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2d4e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2d4e30: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x2d4e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2d4e34: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2d4e34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d4e38: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2d4e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2d4e3c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2d4e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d4e40: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2d4e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d4e44: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2d4e44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d4e48: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2d4e48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d4e4c: 0x68001a  div         $zero, $v1, $t0
    ctx->pc = 0x2d4e4cu;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2d4e50: 0x0  nop
    ctx->pc = 0x2d4e50u;
    // NOP
    // 0x2d4e54: 0x0  nop
    ctx->pc = 0x2d4e54u;
    // NOP
    // 0x2d4e58: 0xa012  mflo        $s4
    ctx->pc = 0x2d4e58u;
    SET_GPR_U64(ctx, 20, ctx->lo);
    // 0x2d4e5c: 0x7048001a  div1        $zero, $v0, $t0
    ctx->pc = 0x2d4e5cu;
    { int32_t divisor = GPR_S32(ctx, 8); int32_t dividend = GPR_S32(ctx, 2); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
    // 0x2d4e60: 0x0  nop
    ctx->pc = 0x2d4e60u;
    // NOP
    // 0x2d4e64: 0x0  nop
    ctx->pc = 0x2d4e64u;
    // NOP
    // 0x2d4e68: 0x70009812  mflo1       $s3
    ctx->pc = 0x2d4e68u;
    SET_GPR_U64(ctx, 19, ctx->lo1);
    // 0x2d4e6c: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D4E6Cu;
    {
        const bool branch_taken_0x2d4e6c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d4e6c) {
            ctx->pc = 0x2D4E80u;
            goto label_2d4e80;
        }
    }
    ctx->pc = 0x2D4E74u;
    // 0x2d4e74: 0x18c00002  blez        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D4E74u;
    {
        const bool branch_taken_0x2d4e74 = (GPR_S64(ctx, 6) <= 0);
        if (branch_taken_0x2d4e74) {
            ctx->pc = 0x2D4E80u;
            goto label_2d4e80;
        }
    }
    ctx->pc = 0x2D4E7Cu;
    // 0x2d4e7c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2d4e7cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2d4e80:
    // 0x2d4e80: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D4E80u;
    {
        const bool branch_taken_0x2d4e80 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d4e80) {
            ctx->pc = 0x2D4E98u;
            goto label_2d4e98;
        }
    }
    ctx->pc = 0x2D4E88u;
    // 0x2d4e88: 0x18a00003  blez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D4E88u;
    {
        const bool branch_taken_0x2d4e88 = (GPR_S64(ctx, 5) <= 0);
        if (branch_taken_0x2d4e88) {
            ctx->pc = 0x2D4E98u;
            goto label_2d4e98;
        }
    }
    ctx->pc = 0x2D4E90u;
    // 0x2d4e90: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2d4e90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2d4e94: 0x0  nop
    ctx->pc = 0x2d4e94u;
    // NOP
label_2d4e98:
    // 0x2d4e98: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2d4e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2d4e9c: 0x16820004  bne         $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D4E9Cu;
    {
        const bool branch_taken_0x2d4e9c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D4EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4E9Cu;
        // 0x2d4ea0: 0xc8082a  slt         $at, $a2, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4e9c) {
            ctx->pc = 0x2D4EB0u;
            goto label_2d4eb0;
        }
    }
    ctx->pc = 0x2D4EA4u;
    // 0x2d4ea4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D4EA4u;
    {
        const bool branch_taken_0x2d4ea4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4ea4) {
            ctx->pc = 0x2D4EB0u;
            goto label_2d4eb0;
        }
    }
    ctx->pc = 0x2D4EACu;
    // 0x2d4eac: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x2d4eacu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_2d4eb0:
    // 0x2d4eb0: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2d4eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2d4eb4: 0x16620004  bne         $s3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D4EB4u;
    {
        const bool branch_taken_0x2d4eb4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D4EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4EB4u;
        // 0x2d4eb8: 0xa8082a  slt         $at, $a1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4eb4) {
            ctx->pc = 0x2D4EC8u;
            goto label_2d4ec8;
        }
    }
    ctx->pc = 0x2D4EBCu;
    // 0x2d4ebc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D4EBCu;
    {
        const bool branch_taken_0x2d4ebc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4ebc) {
            ctx->pc = 0x2D4EC8u;
            goto label_2d4ec8;
        }
    }
    ctx->pc = 0x2D4EC4u;
    // 0x2d4ec4: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x2d4ec4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_2d4ec8:
    // 0x2d4ec8: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x2d4ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2d4ecc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2d4eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2d4ed0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2d4ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2d4ed4: 0x62182f  dsubu       $v1, $v1, $v0
    ctx->pc = 0x2d4ed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x2d4ed8: 0xae070040  sw          $a3, 0x40($s0)
    ctx->pc = 0x2d4ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 7));
    // 0x2d4edc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2d4edcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2d4ee0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2d4ee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2d4ee4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2d4ee4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2d4ee8: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x2d4ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2d4eec: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x2d4eecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x2d4ef0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d4ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4ef4: 0xa6000034  sh          $zero, 0x34($s0)
    ctx->pc = 0x2d4ef4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 52), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d4ef8: 0xa6000036  sh          $zero, 0x36($s0)
    ctx->pc = 0x2d4ef8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 54), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d4efc: 0x8c23fc90  lw          $v1, -0x370($at)
    ctx->pc = 0x2d4efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966416)));
    // 0x2d4f00: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x2d4f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x2d4f04: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2d4f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2d4f08: 0xc0b522c  jal         func_2D48B0
    ctx->pc = 0x2D4F08u;
    SET_GPR_U32(ctx, 31, 0x2D4F10u);
    ctx->pc = 0x2D4F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4F08u;
    // 0x2d4f0c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D48B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D48B0u, 0x2D4F08u, 0x2D4F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4F10u;
label_2d4f10:
    // 0x2d4f10: 0x293082a  slt         $at, $s4, $s3
    ctx->pc = 0x2d4f10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2d4f14: 0x10200034  beqz        $at, . + 4 + (0x34 << 2)
    ctx->pc = 0x2D4F14u;
    {
        const bool branch_taken_0x2d4f14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4F14u;
        // 0x2d4f18: 0x3c01004e  lui         $at, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4f14) {
            ctx->pc = 0x2D4FE8u;
            goto label_2d4fe8;
        }
    }
    ctx->pc = 0x2D4F1Cu;
    // 0x2d4f1c: 0x11943c  dsll32      $s2, $s1, 16
    ctx->pc = 0x2d4f1cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2d4f20: 0x84266084  lh          $a2, 0x6084($at)
    ctx->pc = 0x2d4f20u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 24708)));
    // 0x2d4f24: 0x158c3c  dsll32      $s1, $s5, 16
    ctx->pc = 0x2d4f24u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 21) << (32 + 16));
    // 0x2d4f28: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x2d4f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
    // 0x2d4f2c: 0x14443c  dsll32      $t0, $s4, 16
    ctx->pc = 0x2d4f2cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 20) << (32 + 16));
    // 0x2d4f30: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2d4f30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2d4f34: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x2d4f34u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x2d4f38: 0x344a1880  ori         $t2, $v0, 0x1880
    ctx->pc = 0x2d4f38u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6272);
    // 0x2d4f3c: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x2d4f3cu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x2d4f40: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x2d4f40u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x2d4f44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d4f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4f48: 0x24a56080  addiu       $a1, $a1, 0x6080
    ctx->pc = 0x2d4f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24704));
    // 0x2d4f4c: 0x240b001a  addiu       $t3, $zero, 0x1A
    ctx->pc = 0x2d4f4cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2d4f50: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d4f50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d4f54: 0xd11021  addu        $v0, $a2, $s1
    ctx->pc = 0x2d4f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x2d4f58: 0x84236086  lh          $v1, 0x6086($at)
    ctx->pc = 0x2d4f58u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x4E6086u));
    // 0x2d4f5c: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x2d4f5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d4f60: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d4f60u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d4f64: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d4f64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d4f68: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x2d4f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2d4f6c: 0x8429608a  lh          $t1, 0x608A($at)
    ctx->pc = 0x2d4f6cu;
    SET_GPR_S32(ctx, 9, (int16_t)FAST_READ16(0x4E608Au));
    // 0x2d4f70: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x2d4f70u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d4f74: 0xc0b506c  jal         func_2D41B0
    ctx->pc = 0x2D4F74u;
    SET_GPR_U32(ctx, 31, 0x2D4F7Cu);
    ctx->pc = 0x2D4F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4F74u;
    // 0x2d4f78: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41B0u, 0x2D4F74u, 0x2D4F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4F7Cu;
label_2d4f7c:
    // 0x2d4f7c: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d4f7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d4f80: 0x2341821  addu        $v1, $s1, $s4
    ctx->pc = 0x2d4f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x2d4f84: 0x842660a0  lh          $a2, 0x60A0($at)
    ctx->pc = 0x2d4f84u;
    SET_GPR_S32(ctx, 6, (int16_t)FAST_READ16(0x4E60A0u));
    // 0x2d4f88: 0x33c3c  dsll32      $a3, $v1, 16
    ctx->pc = 0x2d4f88u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d4f8c: 0x2741023  subu        $v0, $s3, $s4
    ctx->pc = 0x2d4f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x2d4f90: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2d4f90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2d4f94: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x2d4f94u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d4f98: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x2d4f98u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x2d4f9c: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x2d4f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x2d4fa0: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x2d4fa0u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x2d4fa4: 0x344a28b0  ori         $t2, $v0, 0x28B0
    ctx->pc = 0x2d4fa4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10416);
    // 0x2d4fa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d4fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4fac: 0x24a5609c  addiu       $a1, $a1, 0x609C
    ctx->pc = 0x2d4facu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24732));
    // 0x2d4fb0: 0x240b001a  addiu       $t3, $zero, 0x1A
    ctx->pc = 0x2d4fb0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2d4fb4: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d4fb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d4fb8: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x2d4fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2d4fbc: 0x842360a2  lh          $v1, 0x60A2($at)
    ctx->pc = 0x2d4fbcu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x4E60A2u));
    // 0x2d4fc0: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x2d4fc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d4fc4: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d4fc4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d4fc8: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d4fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d4fcc: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x2d4fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2d4fd0: 0x842960a6  lh          $t1, 0x60A6($at)
    ctx->pc = 0x2d4fd0u;
    SET_GPR_S32(ctx, 9, (int16_t)FAST_READ16(0x4E60A6u));
    // 0x2d4fd4: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x2d4fd4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d4fd8: 0xc0b506c  jal         func_2D41B0
    ctx->pc = 0x2D4FD8u;
    SET_GPR_U32(ctx, 31, 0x2D4FE0u);
    ctx->pc = 0x2D4FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4FD8u;
    // 0x2d4fdc: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41B0u, 0x2D4FD8u, 0x2D4FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4FE0u;
label_2d4fe0:
    // 0x2d4fe0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2D4FE0u;
    {
        const bool branch_taken_0x2d4fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4fe0) {
            ctx->pc = 0x2D5050u;
            goto label_2d5050;
        }
    }
    ctx->pc = 0x2D4FE8u;
label_2d4fe8:
    // 0x2d4fe8: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d4fe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d4fec: 0x84266084  lh          $a2, 0x6084($at)
    ctx->pc = 0x2d4fecu;
    SET_GPR_S32(ctx, 6, (int16_t)FAST_READ16(0x4E6084u));
    // 0x2d4ff0: 0x11943c  dsll32      $s2, $s1, 16
    ctx->pc = 0x2d4ff0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2d4ff4: 0x158c3c  dsll32      $s1, $s5, 16
    ctx->pc = 0x2d4ff4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 21) << (32 + 16));
    // 0x2d4ff8: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x2d4ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
    // 0x2d4ffc: 0x13443c  dsll32      $t0, $s3, 16
    ctx->pc = 0x2d4ffcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 19) << (32 + 16));
    // 0x2d5000: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2d5000u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2d5004: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x2d5004u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x2d5008: 0x344a1880  ori         $t2, $v0, 0x1880
    ctx->pc = 0x2d5008u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6272);
    // 0x2d500c: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x2d500cu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x2d5010: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x2d5010u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x2d5014: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d5014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5018: 0x24a56080  addiu       $a1, $a1, 0x6080
    ctx->pc = 0x2d5018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24704));
    // 0x2d501c: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d501cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d5020: 0xd11021  addu        $v0, $a2, $s1
    ctx->pc = 0x2d5020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x2d5024: 0x84236086  lh          $v1, 0x6086($at)
    ctx->pc = 0x2d5024u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x4E6086u));
    // 0x2d5028: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x2d5028u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d502c: 0x240b001a  addiu       $t3, $zero, 0x1A
    ctx->pc = 0x2d502cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2d5030: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d5030u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d5034: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d5034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d5038: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x2d5038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2d503c: 0x8429608a  lh          $t1, 0x608A($at)
    ctx->pc = 0x2d503cu;
    SET_GPR_S32(ctx, 9, (int16_t)FAST_READ16(0x4E608Au));
    // 0x2d5040: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x2d5040u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d5044: 0xc0b506c  jal         func_2D41B0
    ctx->pc = 0x2D5044u;
    SET_GPR_U32(ctx, 31, 0x2D504Cu);
    ctx->pc = 0x2D5048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5044u;
    // 0x2d5048: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41B0u, 0x2D5044u, 0x2D504Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D504Cu;
label_2d504c:
    // 0x2d504c: 0x0  nop
    ctx->pc = 0x2d504cu;
    // NOP
label_2d5050:
    // 0x2d5050: 0x92130047  lbu         $s3, 0x47($s0)
    ctx->pc = 0x2d5050u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 71)));
    // 0x2d5054: 0xc0b4344  jal         func_2D0D10
    ctx->pc = 0x2D5054u;
    SET_GPR_U32(ctx, 31, 0x2D505Cu);
    ctx->pc = 0x2D5058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5054u;
    // 0x2d5058: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0D10u, 0x2D5054u, 0x2D505Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D505Cu;
label_2d505c:
    // 0x2d505c: 0xa2020047  sb          $v0, 0x47($s0)
    ctx->pc = 0x2d505cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 71), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d5060: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d5060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d5064: 0x84236040  lh          $v1, 0x6040($at)
    ctx->pc = 0x2d5064u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x4E6040u));
    // 0x2d5068: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2d5068u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2d506c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d506cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5070: 0x24a5603c  addiu       $a1, $a1, 0x603C
    ctx->pc = 0x2d5070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24636));
    // 0x2d5074: 0x24080064  addiu       $t0, $zero, 0x64
    ctx->pc = 0x2d5074u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2d5078: 0x240b001a  addiu       $t3, $zero, 0x1A
    ctx->pc = 0x2d5078u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2d507c: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d507cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d5080: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2d5080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2d5084: 0x84226042  lh          $v0, 0x6042($at)
    ctx->pc = 0x2d5084u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x4E6042u));
    // 0x2d5088: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x2d5088u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d508c: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d508cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d5090: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d5090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d5094: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2d5094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2d5098: 0x84296046  lh          $t1, 0x6046($at)
    ctx->pc = 0x2d5098u;
    SET_GPR_S32(ctx, 9, (int16_t)FAST_READ16(0x4E6046u));
    // 0x2d509c: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x2d509cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d50a0: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d50a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d50a4: 0x8c2a603c  lw          $t2, 0x603C($at)
    ctx->pc = 0x2d50a4u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x4E603Cu));
    // 0x2d50a8: 0xc0b506c  jal         func_2D41B0
    ctx->pc = 0x2D50A8u;
    SET_GPR_U32(ctx, 31, 0x2D50B0u);
    ctx->pc = 0x2D50ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D50A8u;
    // 0x2d50ac: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41B0u, 0x2D50A8u, 0x2D50B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D50B0u;
label_2d50b0:
    // 0x2d50b0: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d50b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d50b4: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x2d50b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
    // 0x2d50b8: 0x8423605c  lh          $v1, 0x605C($at)
    ctx->pc = 0x2d50b8u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x4E605Cu));
    // 0x2d50bc: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x2d50bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d50c0: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d50c0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d50c4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2d50c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2d50c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d50c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d50cc: 0x24a56058  addiu       $a1, $a1, 0x6058
    ctx->pc = 0x2d50ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24664));
    // 0x2d50d0: 0x240b001a  addiu       $t3, $zero, 0x1A
    ctx->pc = 0x2d50d0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2d50d4: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d50d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d50d8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2d50d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2d50dc: 0x8422605e  lh          $v0, 0x605E($at)
    ctx->pc = 0x2d50dcu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x4E605Eu));
    // 0x2d50e0: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x2d50e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d50e4: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d50e4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d50e8: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d50e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d50ec: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2d50ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2d50f0: 0x84286060  lh          $t0, 0x6060($at)
    ctx->pc = 0x2d50f0u;
    SET_GPR_S32(ctx, 8, (int16_t)FAST_READ16(0x4E6060u));
    // 0x2d50f4: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x2d50f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d50f8: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d50f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d50fc: 0x84296062  lh          $t1, 0x6062($at)
    ctx->pc = 0x2d50fcu;
    SET_GPR_S32(ctx, 9, (int16_t)FAST_READ16(0x4E6062u));
    // 0x2d5100: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d5100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d5104: 0x8c2a6058  lw          $t2, 0x6058($at)
    ctx->pc = 0x2d5104u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x4E6058u));
    // 0x2d5108: 0xc0b506c  jal         func_2D41B0
    ctx->pc = 0x2D5108u;
    SET_GPR_U32(ctx, 31, 0x2D5110u);
    ctx->pc = 0x2D510Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5108u;
    // 0x2d510c: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41B0u, 0x2D5108u, 0x2D5110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5110u;
label_2d5110:
    // 0x2d5110: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d5110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d5114: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2d5114u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2d5118: 0x84236024  lh          $v1, 0x6024($at)
    ctx->pc = 0x2d5118u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x4E6024u));
    // 0x2d511c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d511cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5120: 0x24a56020  addiu       $a1, $a1, 0x6020
    ctx->pc = 0x2d5120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24608));
    // 0x2d5124: 0x240b001a  addiu       $t3, $zero, 0x1A
    ctx->pc = 0x2d5124u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2d5128: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d5128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d512c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2d512cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2d5130: 0x84226026  lh          $v0, 0x6026($at)
    ctx->pc = 0x2d5130u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x4E6026u));
    // 0x2d5134: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x2d5134u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d5138: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d5138u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d513c: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d513cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d5140: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2d5140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2d5144: 0x84286028  lh          $t0, 0x6028($at)
    ctx->pc = 0x2d5144u;
    SET_GPR_S32(ctx, 8, (int16_t)FAST_READ16(0x4E6028u));
    // 0x2d5148: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x2d5148u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d514c: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d514cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d5150: 0x8429602a  lh          $t1, 0x602A($at)
    ctx->pc = 0x2d5150u;
    SET_GPR_S32(ctx, 9, (int16_t)FAST_READ16(0x4E602Au));
    // 0x2d5154: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d5154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d5158: 0x8c2a6020  lw          $t2, 0x6020($at)
    ctx->pc = 0x2d5158u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x4E6020u));
    // 0x2d515c: 0xc0b506c  jal         func_2D41B0
    ctx->pc = 0x2D515Cu;
    SET_GPR_U32(ctx, 31, 0x2D5164u);
    ctx->pc = 0x2D5160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D515Cu;
    // 0x2d5160: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41B0u, 0x2D515Cu, 0x2D5164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5164u;
label_2d5164:
    // 0x2d5164: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d5164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5168: 0xc0b5204  jal         func_2D4810
    ctx->pc = 0x2D5168u;
    SET_GPR_U32(ctx, 31, 0x2D5170u);
    ctx->pc = 0x2D516Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5168u;
    // 0x2d516c: 0xa2130047  sb          $s3, 0x47($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 71), (uint8_t)GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4810u, 0x2D5168u, 0x2D5170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5170u;
label_2d5170:
    // 0x2d5170: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d5170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d5174: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x2d5174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2d5178: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2d5178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2d517c: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x2d517cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x2d5180: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d5180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d5184: 0xac23fc90  sw          $v1, -0x370($at)
    ctx->pc = 0x2d5184u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 3));
    // 0x2d5188: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2d5188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d518c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2d518cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d5190: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2d5190u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d5194: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d5194u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d5198: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d5198u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d519c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d519cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d51a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d51a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d51a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D51A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D51A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D51A4u;
        // 0x2d51a8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D51A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D51ACu;
}
