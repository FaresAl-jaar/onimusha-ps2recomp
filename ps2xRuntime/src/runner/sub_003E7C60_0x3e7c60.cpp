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

// Function: sub_003E7C60
// Address: 0x3e7c60 - 0x3e7dd0
void sub_003E7C60_0x3e7c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E7C60_0x3e7c60");
#endif

    switch (ctx->pc) {
        case 0x3e7cacu: goto label_3e7cac;
        case 0x3e7cb8u: goto label_3e7cb8;
        case 0x3e7cc0u: goto label_3e7cc0;
        case 0x3e7d48u: goto label_3e7d48;
        case 0x3e7d60u: goto label_3e7d60;
        case 0x3e7d74u: goto label_3e7d74;
        case 0x3e7d88u: goto label_3e7d88;
        default: break;
    }

    ctx->pc = 0x3e7c60u;

    // 0x3e7c60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3e7c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3e7c64: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3e7c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3e7c68: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3e7c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3e7c6c: 0x2442f9f0  addiu       $v0, $v0, -0x610
    ctx->pc = 0x3e7c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965744));
    // 0x3e7c70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3e7c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3e7c74: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3e7c74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e7c78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e7c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3e7c7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e7c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e7c80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e7c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3e7c84: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3e7c84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7c88: 0x80850084  lb          $a1, 0x84($a0)
    ctx->pc = 0x3e7c88u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x3e7c8c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x3e7c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3e7c90: 0x80a50014  lb          $a1, 0x14($a1)
    ctx->pc = 0x3e7c90u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x3e7c94: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3e7c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3e7c98: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x3e7c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3e7c9c: 0xa0a6001e  sb          $a2, 0x1E($a1)
    ctx->pc = 0x3e7c9cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 30), (uint8_t)GPR_U32(ctx, 6));
    // 0x3e7ca0: 0xa0830086  sb          $v1, 0x86($a0)
    ctx->pc = 0x3e7ca0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 134), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e7ca4: 0xc0f8ca0  jal         func_3E3280
    ctx->pc = 0x3E7CA4u;
    SET_GPR_U32(ctx, 31, 0x3E7CACu);
    ctx->pc = 0x3E7CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7CA4u;
    // 0x3e7ca8: 0x80440000  lb          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3280u, 0x3E7CA4u, 0x3E7CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7CACu;
label_3e7cac:
    // 0x3e7cac: 0x3c100066  lui         $s0, 0x66
    ctx->pc = 0x3e7cacu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)102 << 16));
    // 0x3e7cb0: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x3e7cb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3e7cb4: 0x2610f9f5  addiu       $s0, $s0, -0x60B
    ctx->pc = 0x3e7cb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965749));
label_3e7cb8:
    // 0x3e7cb8: 0xc0f8cb8  jal         func_3E32E0
    ctx->pc = 0x3E7CB8u;
    SET_GPR_U32(ctx, 31, 0x3E7CC0u);
    ctx->pc = 0x3E7CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7CB8u;
    // 0x3e7cbc: 0x82040000  lb          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E32E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E32E0u, 0x3E7CB8u, 0x3E7CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7CC0u;
label_3e7cc0:
    // 0x3e7cc0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3e7cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e7cc4: 0x1443001a  bne         $v0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3E7CC4u;
    {
        const bool branch_taken_0x3e7cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3E7CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7CC4u;
        // 0x3e7cc8: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7cc4) {
            ctx->pc = 0x3E7D30u;
            goto label_3e7d30;
        }
    }
    ctx->pc = 0x3E7CCCu;
    // 0x3e7ccc: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x3e7cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x3e7cd0: 0x223001a  div         $zero, $s1, $v1
    ctx->pc = 0x3e7cd0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3e7cd4: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x3e7cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x3e7cd8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3e7cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e7cdc: 0x1147c2  srl         $t0, $s1, 31
    ctx->pc = 0x3e7cdcu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 17), 31));
    // 0x3e7ce0: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x3e7ce0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3e7ce4: 0x1810  mfhi        $v1
    ctx->pc = 0x3e7ce4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3e7ce8: 0x510018  mult        $zero, $v0, $s1
    ctx->pc = 0x3e7ce8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3e7cec: 0x2432821  addu        $a1, $s2, $v1
    ctx->pc = 0x3e7cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x3e7cf0: 0x80a4000a  lb          $a0, 0xA($a1)
    ctx->pc = 0x3e7cf0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x3e7cf4: 0x661004  sllv        $v0, $a2, $v1
    ctx->pc = 0x3e7cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
    // 0x3e7cf8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x3e7cf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3e7cfc: 0x1010  mfhi        $v0
    ctx->pc = 0x3e7cfcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3e7d00: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3e7d00u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3e7d04: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3e7d04u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x3e7d08: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x3e7d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x3e7d0c: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x3e7d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3e7d10: 0x461004  sllv        $v0, $a2, $v0
    ctx->pc = 0x3e7d10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
    // 0x3e7d14: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x3e7d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x3e7d18: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x3e7d18u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x3e7d1c: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x3e7d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3e7d20: 0xa0a2000a  sb          $v0, 0xA($a1)
    ctx->pc = 0x3e7d20u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e7d24: 0x86420008  lh          $v0, 0x8($s2)
    ctx->pc = 0x3e7d24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3e7d28: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3e7d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3e7d2c: 0xa6420008  sh          $v0, 0x8($s2)
    ctx->pc = 0x3e7d2cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 8), (uint16_t)GPR_U32(ctx, 2));
label_3e7d30:
    // 0x3e7d30: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3e7d30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3e7d34: 0x2a220014  slti        $v0, $s1, 0x14
    ctx->pc = 0x3e7d34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x3e7d38: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x3E7D38u;
    {
        const bool branch_taken_0x3e7d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E7D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7D38u;
        // 0x3e7d3c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7d38) {
            ctx->pc = 0x3E7CB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e7cb8;
        }
    }
    ctx->pc = 0x3E7D40u;
    // 0x3e7d40: 0xc0f8fac  jal         func_3E3EB0
    ctx->pc = 0x3E7D40u;
    SET_GPR_U32(ctx, 31, 0x3E7D48u);
    ctx->pc = 0x3E7D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7D40u;
    // 0x3e7d44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3EB0u, 0x3E7D40u, 0x3E7D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7D48u;
label_3e7d48:
    // 0x3e7d48: 0x82430058  lb          $v1, 0x58($s2)
    ctx->pc = 0x3e7d48u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x3e7d4c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3e7d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3e7d50: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E7D50u;
    {
        const bool branch_taken_0x3e7d50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E7D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7D50u;
        // 0x3e7d54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7d50) {
            ctx->pc = 0x3E7D68u;
            goto label_3e7d68;
        }
    }
    ctx->pc = 0x3E7D58u;
    // 0x3e7d58: 0xc0f9e88  jal         func_3E7A20
    ctx->pc = 0x3E7D58u;
    SET_GPR_U32(ctx, 31, 0x3E7D60u);
    ctx->pc = 0x3E7D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7D58u;
    // 0x3e7d5c: 0x240500f0  addiu       $a1, $zero, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7A20u, 0x3E7D58u, 0x3E7D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7D60u;
label_3e7d60:
    // 0x3e7d60: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3E7D60u;
    {
        const bool branch_taken_0x3e7d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e7d60) {
            ctx->pc = 0x3E7D78u;
            goto label_3e7d78;
        }
    }
    ctx->pc = 0x3E7D68u;
label_3e7d68:
    // 0x3e7d68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e7d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7d6c: 0xc0f9e88  jal         func_3E7A20
    ctx->pc = 0x3E7D6Cu;
    SET_GPR_U32(ctx, 31, 0x3E7D74u);
    ctx->pc = 0x3E7D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7D6Cu;
    // 0x3e7d70: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7A20u, 0x3E7D6Cu, 0x3E7D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7D74u;
label_3e7d74:
    // 0x3e7d74: 0x0  nop
    ctx->pc = 0x3e7d74u;
    // NOP
label_3e7d78:
    // 0x3e7d78: 0x86460008  lh          $a2, 0x8($s2)
    ctx->pc = 0x3e7d78u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3e7d7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e7d7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7d80: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3e7d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e7d84: 0x0  nop
    ctx->pc = 0x3e7d84u;
    // NOP
label_3e7d88:
    // 0x3e7d88: 0xa41804  sllv        $v1, $a0, $a1
    ctx->pc = 0x3e7d88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x3e7d8c: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x3e7d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x3e7d90: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x3e7d90u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3e7d94: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x3e7d94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x3e7d98: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E7D98u;
    {
        const bool branch_taken_0x3e7d98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e7d98) {
            ctx->pc = 0x3E7DA8u;
            goto label_3e7da8;
        }
    }
    ctx->pc = 0x3E7DA0u;
    // 0x3e7da0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3E7DA0u;
    {
        const bool branch_taken_0x3e7da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7DA0u;
        // 0x3e7da4: 0xa2450059  sb          $a1, 0x59($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 89), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7da0) {
            ctx->pc = 0x3E7DB8u;
            goto label_3e7db8;
        }
    }
    ctx->pc = 0x3E7DA8u;
label_3e7da8:
    // 0x3e7da8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3e7da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3e7dac: 0x28a10008  slti        $at, $a1, 0x8
    ctx->pc = 0x3e7dacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x3e7db0: 0x1420fff5  bnez        $at, . + 4 + (-0xB << 2)
    ctx->pc = 0x3E7DB0u;
    {
        const bool branch_taken_0x3e7db0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e7db0) {
            ctx->pc = 0x3E7D88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e7d88;
        }
    }
    ctx->pc = 0x3E7DB8u;
label_3e7db8:
    // 0x3e7db8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3e7db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e7dbc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3e7dbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e7dc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e7dc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e7dc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e7dc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e7dc8: 0x3e00008  jr          $ra
    ctx->pc = 0x3E7DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E7DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7DC8u;
        // 0x3e7dcc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E7DC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E7DD0u;
}
