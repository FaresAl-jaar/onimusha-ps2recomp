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

// Function: sub_002E0030
// Address: 0x2e0030 - 0x2e0270
void sub_002E0030_0x2e0030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0030_0x2e0030");
#endif

    switch (ctx->pc) {
        case 0x2e00a8u: goto label_2e00a8;
        case 0x2e021cu: goto label_2e021c;
        default: break;
    }

    ctx->pc = 0x2e0030u;

    // 0x2e0030: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e0030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e0034: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2e0034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2e0038: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e0038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e003c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2e003cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2e0040: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e0040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e0044: 0x24637aa8  addiu       $v1, $v1, 0x7AA8
    ctx->pc = 0x2e0044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31400));
    // 0x2e0048: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e0048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e004c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e004cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0050: 0xaca60044  sw          $a2, 0x44($a1)
    ctx->pc = 0x2e0050u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 6));
    // 0x2e0054: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2e0054u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0058: 0xaca70048  sw          $a3, 0x48($a1)
    ctx->pc = 0x2e0058u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 72), GPR_U32(ctx, 7));
    // 0x2e005c: 0x8f8680e0  lw          $a2, -0x7F20($gp)
    ctx->pc = 0x2e005cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2e0060: 0x34450dcd  ori         $a1, $v0, 0xDCD
    ctx->pc = 0x2e0060u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x2e0064: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2e0064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2e0068: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e0068u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e006c: 0xc51018  mult        $v0, $a2, $a1
    ctx->pc = 0x2e006cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2e0070: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e0070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e0074: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x2e0074u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x2e0078: 0x908560b3  lbu         $a1, 0x60B3($a0)
    ctx->pc = 0x2e0078u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 24755)));
    // 0x2e007c: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x2e007cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2e0080: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x2e0080u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2e0084: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2e0084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2e0088: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x2e0088u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x2e008c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2e008cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2e0090: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e0090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e0094: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2e0094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e0098: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E0098u;
    {
        const bool branch_taken_0x2e0098 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2E009Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0098u;
        // 0x2e009c: 0x460008c2  mul.s       $f3, $f1, $f0 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0098) {
            ctx->pc = 0x2E00ACu;
            goto label_2e00ac;
        }
    }
    ctx->pc = 0x2E00A0u;
    // 0x2e00a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e00a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e00a4: 0x10000008  b           . + 4 + (0x8 << 2)
label_2e00a8:
    if (ctx->pc == 0x2E00A8u) {
        ctx->pc = 0x2E00A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E00A4u;
        // 0x2e00a8: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E00ACu;
        goto label_2e00ac;
    }
    ctx->pc = 0x2E00A4u;
    {
        const bool branch_taken_0x2e00a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E00A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E00A4u;
        // 0x2e00a8: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e00a4) {
            ctx->pc = 0x2E00C8u;
            goto label_2e00c8;
        }
    }
    ctx->pc = 0x2E00ACu;
label_2e00ac:
    // 0x2e00ac: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2e00acu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2e00b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e00b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e00b4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e00b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e00b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e00b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e00bc: 0x0  nop
    ctx->pc = 0x2e00bcu;
    // NOP
    // 0x2e00c0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x2e00c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2e00c4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2e00c4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2e00c8:
    // 0x2e00c8: 0x3c023600  lui         $v0, 0x3600
    ctx->pc = 0x2e00c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13824 << 16));
    // 0x2e00cc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2e00ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2e00d0: 0x34440008  ori         $a0, $v0, 0x8
    ctx->pc = 0x2e00d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2e00d4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2e00d4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e00d8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2e00d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2e00dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e00dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e00e0: 0x0  nop
    ctx->pc = 0x2e00e0u;
    // NOP
    // 0x2e00e4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2e00e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2e00e8: 0x34440dcd  ori         $a0, $v0, 0xDCD
    ctx->pc = 0x2e00e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x2e00ec: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2e00ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2e00f0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2e00f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2e00f4: 0x24637aa8  addiu       $v1, $v1, 0x7AA8
    ctx->pc = 0x2e00f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31400));
    // 0x2e00f8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e00f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e00fc: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2e00fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2e0100: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e0100u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e0104: 0x0  nop
    ctx->pc = 0x2e0104u;
    // NOP
    // 0x2e0108: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2e0108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2e010c: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x2e010cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2e0110: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x2e0110u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2e0114: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e0114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e0118: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x2e0118u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x2e011c: 0x922560b3  lbu         $a1, 0x60B3($s1)
    ctx->pc = 0x2e011cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24755)));
    // 0x2e0120: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x2e0120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2e0124: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x2e0124u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2e0128: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2e0128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2e012c: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x2e012cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x2e0130: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2e0130u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2e0134: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e0134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e0138: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2e0138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e013c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E013Cu;
    {
        const bool branch_taken_0x2e013c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2E0140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E013Cu;
        // 0x2e0140: 0x460008c2  mul.s       $f3, $f1, $f0 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e013c) {
            ctx->pc = 0x2E0150u;
            goto label_2e0150;
        }
    }
    ctx->pc = 0x2E0144u;
    // 0x2e0144: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e0144u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e0148: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E0148u;
    {
        const bool branch_taken_0x2e0148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E014Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0148u;
        // 0x2e014c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0148) {
            ctx->pc = 0x2E016Cu;
            goto label_2e016c;
        }
    }
    ctx->pc = 0x2E0150u;
label_2e0150:
    // 0x2e0150: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2e0150u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2e0154: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e0154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e0158: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e0158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e015c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e015cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e0160: 0x0  nop
    ctx->pc = 0x2e0160u;
    // NOP
    // 0x2e0164: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x2e0164u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2e0168: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2e0168u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2e016c:
    // 0x2e016c: 0x3c023600  lui         $v0, 0x3600
    ctx->pc = 0x2e016cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13824 << 16));
    // 0x2e0170: 0x3c093f80  lui         $t1, 0x3F80
    ctx->pc = 0x2e0170u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16256 << 16));
    // 0x2e0174: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x2e0174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2e0178: 0x3c070067  lui         $a3, 0x67
    ctx->pc = 0x2e0178u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)103 << 16));
    // 0x2e017c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e017cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e0180: 0x24e77aa8  addiu       $a3, $a3, 0x7AA8
    ctx->pc = 0x2e0180u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 31400));
    // 0x2e0184: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x2e0184u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e0188: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x2e0188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x2e018c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2e018cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2e0190: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2e0190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e0194: 0x2605004c  addiu       $a1, $s0, 0x4C
    ctx->pc = 0x2e0194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    // 0x2e0198: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e0198u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e019c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e019cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e01a0: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2e01a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2e01a4: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2e01a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2e01a8: 0xc6010044  lwc1        $f1, 0x44($s0)
    ctx->pc = 0x2e01a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e01ac: 0x922860b3  lbu         $t0, 0x60B3($s1)
    ctx->pc = 0x2e01acu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24755)));
    // 0x2e01b0: 0xc6000050  lwc1        $f0, 0x50($s0)
    ctx->pc = 0x2e01b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e01b4: 0x8c2295b4  lw          $v0, -0x6A4C($at)
    ctx->pc = 0x2e01b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8095B4u));
    // 0x2e01b8: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x2e01b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2e01bc: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x2e01bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x2e01c0: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2e01c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2e01c4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2e01c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e01c8: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x2e01c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2e01cc: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2e01ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e01d0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2e01d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2e01d4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e01d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e01d8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2e01d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2e01dc: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x2e01dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e01e0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2e01e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2e01e4: 0xc6010048  lwc1        $f1, 0x48($s0)
    ctx->pc = 0x2e01e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e01e8: 0x922360b3  lbu         $v1, 0x60B3($s1)
    ctx->pc = 0x2e01e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24755)));
    // 0x2e01ec: 0xc6000054  lwc1        $f0, 0x54($s0)
    ctx->pc = 0x2e01ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e01f0: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x2e01f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2e01f4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2e01f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2e01f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e01f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e01fc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e01fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e0200: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2e0200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2e0204: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2e0204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e0208: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2e0208u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2e020c: 0xafa9003c  sw          $t1, 0x3C($sp)
    ctx->pc = 0x2e020cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 9));
    // 0x2e0210: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e0210u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e0214: 0xc096cb8  jal         func_25B2E0
    ctx->pc = 0x2E0214u;
    SET_GPR_U32(ctx, 31, 0x2E021Cu);
    ctx->pc = 0x2E0218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0214u;
    // 0x2e0218: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B2E0u, 0x2E0214u, 0x2E021Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E021Cu;
label_2e021c:
    // 0x2e021c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E021Cu;
    {
        const bool branch_taken_0x2e021c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E021Cu;
        // 0x2e0220: 0x3c010081  lui         $at, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e021c) {
            ctx->pc = 0x2E0230u;
            goto label_2e0230;
        }
    }
    ctx->pc = 0x2E0224u;
    // 0x2e0224: 0x8c2395b4  lw          $v1, -0x6A4C($at)
    ctx->pc = 0x2e0224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940084)));
    // 0x2e0228: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x2e0228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e022c: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x2e022cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
label_2e0230:
    // 0x2e0230: 0x922560b3  lbu         $a1, 0x60B3($s1)
    ctx->pc = 0x2e0230u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24755)));
    // 0x2e0234: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2e0234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2e0238: 0x24637a98  addiu       $v1, $v1, 0x7A98
    ctx->pc = 0x2e0238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31384));
    // 0x2e023c: 0xc600004c  lwc1        $f0, 0x4C($s0)
    ctx->pc = 0x2e023cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e0240: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x2e0240u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2e0244: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2e0244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2e0248: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2e0248u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2e024c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e024cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e0250: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2e0250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e0254: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e0254u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e0258: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x2e0258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x2e025c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e025cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e0260: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e0260u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0264: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e0264u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0268: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0268u;
        // 0x2e026c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0270u;
}
