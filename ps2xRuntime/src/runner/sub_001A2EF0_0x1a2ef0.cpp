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

// Function: sub_001A2EF0
// Address: 0x1a2ef0 - 0x1a3280
void sub_001A2EF0_0x1a2ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A2EF0_0x1a2ef0");
#endif

    switch (ctx->pc) {
        case 0x1a2f50u: goto label_1a2f50;
        case 0x1a30d4u: goto label_1a30d4;
        case 0x1a3108u: goto label_1a3108;
        case 0x1a314cu: goto label_1a314c;
        case 0x1a31e4u: goto label_1a31e4;
        case 0x1a31f8u: goto label_1a31f8;
        default: break;
    }

    ctx->pc = 0x1a2ef0u;

    // 0x1a2ef0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1a2ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1a2ef4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a2ef4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2ef8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a2ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a2efc: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1a2efcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1a2f00: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1a2f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1a2f04: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a2f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a2f08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a2f08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2f0c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1a2f0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1a2f10: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a2f10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2f14: 0x93828784  lbu         $v0, -0x787C($gp)
    ctx->pc = 0x1a2f14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x1a2f18: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1a2f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1a2f1c: 0x8f84877c  lw          $a0, -0x7884($gp)
    ctx->pc = 0x1a2f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936444)));
    // 0x1a2f20: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1a2f20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1a2f24: 0x8c820094  lw          $v0, 0x94($a0)
    ctx->pc = 0x1a2f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x1a2f28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a2f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a2f2c: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x1a2f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1a2f30: 0x3c030085  lui         $v1, 0x85
    ctx->pc = 0x1a2f30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)133 << 16));
    // 0x1a2f34: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x1a2f34u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a2f38: 0x2463f170  addiu       $v1, $v1, -0xE90
    ctx->pc = 0x1a2f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963568));
    // 0x1a2f3c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1a2f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1a2f40: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x1a2f40u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x1a2f44: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1A2F44u;
    {
        const bool branch_taken_0x1a2f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2F44u;
        // 0x1a2f48: 0xae2202a0  sw          $v0, 0x2A0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 672), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2f44) {
            ctx->pc = 0x1A2F80u;
            goto label_1a2f80;
        }
    }
    ctx->pc = 0x1A2F4Cu;
    // 0x1a2f4c: 0x0  nop
    ctx->pc = 0x1a2f4cu;
    // NOP
label_1a2f50:
    // 0x1a2f50: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a2f50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2f54: 0x78a70000  lq          $a3, 0x0($a1)
    ctx->pc = 0x1a2f54u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a2f58: 0x81100  sll         $v0, $t0, 4
    ctx->pc = 0x1a2f58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x1a2f5c: 0x2223021  addu        $a2, $s1, $v0
    ctx->pc = 0x1a2f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a2f60: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a2f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2f64: 0x81100  sll         $v0, $t0, 4
    ctx->pc = 0x1a2f64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x1a2f68: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a2f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a2f6c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1a2f6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1a2f70: 0x24420140  addiu       $v0, $v0, 0x140
    ctx->pc = 0x1a2f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x1a2f74: 0x7cc70000  sq          $a3, 0x0($a2)
    ctx->pc = 0x1a2f74u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 7));
    // 0x1a2f78: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x1a2f78u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a2f7c: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x1a2f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
label_1a2f80:
    // 0x1a2f80: 0x8e2202a0  lw          $v0, 0x2A0($s1)
    ctx->pc = 0x1a2f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 672)));
    // 0x1a2f84: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x1a2f84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a2f88: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1A2F88u;
    {
        const bool branch_taken_0x1a2f88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2f88) {
            ctx->pc = 0x1A2F50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a2f50;
        }
    }
    ctx->pc = 0x1A2F90u;
    // 0x1a2f90: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1a2f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1a2f94: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x1a2f94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1a2f98: 0x2442eff0  addiu       $v0, $v0, -0x1010
    ctx->pc = 0x1a2f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963184));
    // 0x1a2f9c: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x1a2f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1a2fa0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1a2fa0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x40EFF0u));
    // 0x1a2fa4: 0x240503c0  addiu       $a1, $zero, 0x3C0
    ctx->pc = 0x1a2fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 960));
    // 0x1a2fa8: 0x620c3  sra         $a0, $a2, 3
    ctx->pc = 0x1a2fa8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 3));
    // 0x1a2fac: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A2FACu;
    {
        const bool branch_taken_0x1a2fac = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x1A2FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2FACu;
        // 0x1a2fb0: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2fac) {
            ctx->pc = 0x1A2FBCu;
            goto label_1a2fbc;
        }
    }
    ctx->pc = 0x1A2FB4u;
    // 0x1a2fb4: 0x24c20007  addiu       $v0, $a2, 0x7
    ctx->pc = 0x1a2fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
    // 0x1a2fb8: 0x220c3  sra         $a0, $v0, 3
    ctx->pc = 0x1a2fb8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 3));
label_1a2fbc:
    // 0x1a2fbc: 0x32020007  andi        $v0, $s0, 0x7
    ctx->pc = 0x1a2fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
    // 0x1a2fc0: 0x61c3c  dsll32      $v1, $a2, 16
    ctx->pc = 0x1a2fc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 16));
    // 0x1a2fc4: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x1a2fc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1a2fc8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1a2fc8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1a2fcc: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x1a2fccu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x1a2fd0: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1a2fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1a2fd4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1a2fd4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1a2fd8: 0x230c3  sra         $a2, $v0, 3
    ctx->pc = 0x1a2fd8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 3));
    // 0x1a2fdc: 0x1810  mfhi        $v1
    ctx->pc = 0x1a2fdcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1a2fe0: 0x24630600  addiu       $v1, $v1, 0x600
    ctx->pc = 0x1a2fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1536));
    // 0x1a2fe4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1a2fe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1a2fe8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A2FE8u;
    {
        const bool branch_taken_0x1a2fe8 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x1A2FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2FE8u;
        // 0x1a2fec: 0x31c3f  dsra32      $v1, $v1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2fe8) {
            ctx->pc = 0x1A2FF8u;
            goto label_1a2ff8;
        }
    }
    ctx->pc = 0x1A2FF0u;
    // 0x1a2ff0: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x1a2ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x1a2ff4: 0x230c3  sra         $a2, $v0, 3
    ctx->pc = 0x1a2ff4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 3));
label_1a2ff8:
    // 0x1a2ff8: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1a2ff8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1a2ffc: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x1a2ffcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1a3000: 0x1018c2  srl         $v1, $s0, 3
    ctx->pc = 0x1a3000u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 3));
    // 0x1a3004: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1a3004u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1a3008: 0xc33018  mult        $a2, $a2, $v1
    ctx->pc = 0x1a3008u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1a300c: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1a300cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1a3010: 0x30820fff  andi        $v0, $a0, 0xFFF
    ctx->pc = 0x1a3010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x1a3014: 0xc5001b  divu        $zero, $a2, $a1
    ctx->pc = 0x1a3014u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
    // 0x1a3018: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1a3018u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a301c: 0x24820400  addiu       $v0, $a0, 0x400
    ctx->pc = 0x1a301cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1024));
    // 0x1a3020: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x1a3020u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x1a3024: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1a3024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x1a3028: 0x24846540  addiu       $a0, $a0, 0x6540
    ctx->pc = 0x1a3028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25920));
    // 0x1a302c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a302cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a3030: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1a3030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a3034: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1a3034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a3038: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1a3038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a303c: 0xe6200280  swc1        $f0, 0x280($s1)
    ctx->pc = 0x1a303cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 640), bits); }
    // 0x1a3040: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1a3040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a3044: 0x1010  mfhi        $v0
    ctx->pc = 0x1a3044u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1a3048: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1a3048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1a304c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1a304cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1a3050: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1a3050u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1a3054: 0x28620400  slti        $v0, $v1, 0x400
    ctx->pc = 0x1a3054u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1a3058: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A3058u;
    {
        const bool branch_taken_0x1a3058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A305Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3058u;
        // 0x1a305c: 0xe6200288  swc1        $f0, 0x288($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 648), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3058) {
            ctx->pc = 0x1A3070u;
            goto label_1a3070;
        }
    }
    ctx->pc = 0x1A3060u;
    // 0x1a3060: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1a3060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1a3064: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1a3064u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a3068: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1a3068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1a306c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1a306cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_1a3070:
    // 0x1a3070: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x1a3070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1a3074: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1a3074u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1a3078: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x1a3078u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x1a307c: 0x24430400  addiu       $v1, $v0, 0x400
    ctx->pc = 0x1a307cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x1a3080: 0x24846540  addiu       $a0, $a0, 0x6540
    ctx->pc = 0x1a3080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25920));
    // 0x1a3084: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1a3084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x1a3088: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x1a3088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x1a308c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a308cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a3090: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a3090u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a3094: 0xc6220280  lwc1        $f2, 0x280($s1)
    ctx->pc = 0x1a3094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a3098: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1a3098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a309c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1a309cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a30a0: 0xc6210288  lwc1        $f1, 0x288($s1)
    ctx->pc = 0x1a30a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a30a4: 0x26240280  addiu       $a0, $s1, 0x280
    ctx->pc = 0x1a30a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 640));
    // 0x1a30a8: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x1a30a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a30ac: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1a30acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a30b0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1a30b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a30b4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1a30b4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1a30b8: 0x4601085c  madd.s      $f1, $f1, $f1
    ctx->pc = 0x1a30b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x1a30bc: 0x46010044  c1          0x10044
    ctx->pc = 0x1a30bcu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[1]);
    // 0x1a30c0: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x1a30c0u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x1a30c4: 0x0  nop
    ctx->pc = 0x1a30c4u;
    // NOP
    // 0x1a30c8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a30c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a30cc: 0xc041472  jal         func_1051C8
    ctx->pc = 0x1A30CCu;
    SET_GPR_U32(ctx, 31, 0x1A30D4u);
    ctx->pc = 0x1A30D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A30CCu;
    // 0x1a30d0: 0xe6200284  swc1        $f0, 0x284($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 644), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x1A30CCu, 0x1A30D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A30D4u;
label_1a30d4:
    // 0x1a30d4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a30d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a30d8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1a30d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1a30dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a30dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a30e0: 0x26250280  addiu       $a1, $s1, 0x280
    ctx->pc = 0x1a30e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 640));
    // 0x1a30e4: 0xc6210284  lwc1        $f1, 0x284($s1)
    ctx->pc = 0x1a30e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a30e8: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1a30e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1a30ec: 0x2442f000  addiu       $v0, $v0, -0x1000
    ctx->pc = 0x1a30ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
    // 0x1a30f0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1a30f0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x40F000u));
    // 0x1a30f4: 0x46010501  sub.s       $f20, $f0, $f1
    ctx->pc = 0x1a30f4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1a30f8: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x1a30f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
    // 0x1a30fc: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x1a30fcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x1a3100: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1A3100u;
    SET_GPR_U32(ctx, 31, 0x1A3108u);
    ctx->pc = 0x1A3104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3100u;
    // 0x1a3104: 0xae2202c0  sw          $v0, 0x2C0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 704), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1A3100u, 0x1A3108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3108u;
label_1a3108:
    // 0x1a3108: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1a3108u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1a310c: 0x3c023f59  lui         $v0, 0x3F59
    ctx->pc = 0x1a310cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16217 << 16));
    // 0x1a3110: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x1a3110u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a3114: 0x3444999a  ori         $a0, $v0, 0x999A
    ctx->pc = 0x1a3114u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x1a3118: 0xc62102c0  lwc1        $f1, 0x2C0($s1)
    ctx->pc = 0x1a3118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a311c: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x1a311cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x1a3120: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1a3120u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1a3124: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x1a3124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x1a3128: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x1a3128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x1a312c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1a312cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x1a3130: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a3130u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a3134: 0xe62002c0  swc1        $f0, 0x2C0($s1)
    ctx->pc = 0x1a3134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 704), bits); }
    // 0x1a3138: 0xae2402ac  sw          $a0, 0x2AC($s1)
    ctx->pc = 0x1a3138u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 684), GPR_U32(ctx, 4));
    // 0x1a313c: 0xae2302b4  sw          $v1, 0x2B4($s1)
    ctx->pc = 0x1a313cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 692), GPR_U32(ctx, 3));
    // 0x1a3140: 0xae2202b8  sw          $v0, 0x2B8($s1)
    ctx->pc = 0x1a3140u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 696), GPR_U32(ctx, 2));
    // 0x1a3144: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x1A3144u;
    SET_GPR_U32(ctx, 31, 0x1A314Cu);
    ctx->pc = 0x1A3148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3144u;
    // 0x1a3148: 0xae2502bc  sw          $a1, 0x2BC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 700), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x1A3144u, 0x1A314Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A314Cu;
label_1a314c:
    // 0x1a314c: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x1a314cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x1a3150: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x1a3150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1a3154: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1a3154u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a3158: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1a3158u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a315c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1a315cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1a3160: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x1a3160u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x1a3164: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a3164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3168: 0x0  nop
    ctx->pc = 0x1a3168u;
    // NOP
    // 0x1a316c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1a316cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a3170: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1A3170u;
    {
        const bool branch_taken_0x1a3170 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A3174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3170u;
        // 0x1a3174: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3170) {
            ctx->pc = 0x1A3188u;
            goto label_1a3188;
        }
    }
    ctx->pc = 0x1A3178u;
    // 0x1a3178: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a3178u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1a317c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1a317cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1a3180: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A3180u;
    {
        const bool branch_taken_0x1a3180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3180u;
        // 0x1a3184: 0x24620004  addiu       $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3180) {
            ctx->pc = 0x1A31A4u;
            goto label_1a31a4;
        }
    }
    ctx->pc = 0x1A3188u;
label_1a3188:
    // 0x1a3188: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1a3188u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1a318c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1a318cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1a3190: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a3190u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1a3194: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1a3194u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1a3198: 0x0  nop
    ctx->pc = 0x1a3198u;
    // NOP
    // 0x1a319c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a319cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a31a0: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x1a31a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_1a31a4:
    // 0x1a31a4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1a31a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a31a8: 0xae2202a0  sw          $v0, 0x2A0($s1)
    ctx->pc = 0x1a31a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 672), GPR_U32(ctx, 2));
    // 0x1a31ac: 0x8e2202a0  lw          $v0, 0x2A0($s1)
    ctx->pc = 0x1a31acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 672)));
    // 0x1a31b0: 0x2c410015  sltiu       $at, $v0, 0x15
    ctx->pc = 0x1a31b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x1a31b4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A31B4u;
    {
        const bool branch_taken_0x1a31b4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a31b4) {
            ctx->pc = 0x1A31C8u;
            goto label_1a31c8;
        }
    }
    ctx->pc = 0x1A31BCu;
    // 0x1a31bc: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1a31bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1a31c0: 0xae2202a0  sw          $v0, 0x2A0($s1)
    ctx->pc = 0x1a31c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 672), GPR_U32(ctx, 2));
    // 0x1a31c4: 0x0  nop
    ctx->pc = 0x1a31c4u;
    // NOP
label_1a31c8:
    // 0x1a31c8: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1a31c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1a31cc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1a31ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1a31d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a31d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a31d4: 0x0  nop
    ctx->pc = 0x1a31d4u;
    // NOP
    // 0x1a31d8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1a31d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1a31dc: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x1A31DCu;
    SET_GPR_U32(ctx, 31, 0x1A31E4u);
    ctx->pc = 0x1A31E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A31DCu;
    // 0x1a31e0: 0xe62002b0  swc1        $f0, 0x2B0($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 688), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x1A31DCu, 0x1A31E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A31E4u;
label_1a31e4:
    // 0x1a31e4: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x1a31e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x1a31e8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a31e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a31ec: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1a31ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1a31f0: 0xc04d4c0  jal         func_135300
    ctx->pc = 0x1A31F0u;
    SET_GPR_U32(ctx, 31, 0x1A31F8u);
    ctx->pc = 0x1A31F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A31F0u;
    // 0x1a31f4: 0xae2202a8  sw          $v0, 0x2A8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 680), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135300u, 0x1A31F0u, 0x1A31F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A31F8u;
label_1a31f8:
    // 0x1a31f8: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x1a31f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
    // 0x1a31fc: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x1a31fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
    // 0x1a3200: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1a3200u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a3204: 0x3c064080  lui         $a2, 0x4080
    ctx->pc = 0x1a3204u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16512 << 16));
    // 0x1a3208: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1a3208u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a320c: 0x102940  sll         $a1, $s0, 5
    ctx->pc = 0x1a320cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x1a3210: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1a3210u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1a3214: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a3214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3218: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1a3218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1a321c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a321cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3220: 0x2463e7f0  addiu       $v1, $v1, -0x1810
    ctx->pc = 0x1a3220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961136));
    // 0x1a3224: 0x102140  sll         $a0, $s0, 5
    ctx->pc = 0x1a3224u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x1a3228: 0x653821  addu        $a3, $v1, $a1
    ctx->pc = 0x1a3228u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a322c: 0x26280280  addiu       $t0, $s1, 0x280
    ctx->pc = 0x1a322cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 640));
    // 0x1a3230: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1a3230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1a3234: 0x26250290  addiu       $a1, $s1, 0x290
    ctx->pc = 0x1a3234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 656));
    // 0x1a3238: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a3238u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a323c: 0x2463e7f0  addiu       $v1, $v1, -0x1810
    ctx->pc = 0x1a323cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961136));
    // 0x1a3240: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a3240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a3244: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1a3244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1a3248: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1a3248u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a324c: 0x0  nop
    ctx->pc = 0x1a324cu;
    // NOP
    // 0x1a3250: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a3250u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a3254: 0xe62002a4  swc1        $f0, 0x2A4($s1)
    ctx->pc = 0x1a3254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 676), bits); }
    // 0x1a3258: 0x78e40000  lq          $a0, 0x0($a3)
    ctx->pc = 0x1a3258u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1a325c: 0x7d040000  sq          $a0, 0x0($t0)
    ctx->pc = 0x1a325cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 4));
    // 0x1a3260: 0x78670000  lq          $a3, 0x0($v1)
    ctx->pc = 0x1a3260u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a3264: 0x7ca70000  sq          $a3, 0x0($a1)
    ctx->pc = 0x1a3264u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 7));
    // 0x1a3268: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a3268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a326c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1a326cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a3270: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1a3270u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a3274: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a3274u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3278: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A327Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3278u;
        // 0x1a327c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A3280u;
}
