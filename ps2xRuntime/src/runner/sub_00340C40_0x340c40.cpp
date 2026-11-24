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

// Function: sub_00340C40
// Address: 0x340c40 - 0x340e70
void sub_00340C40_0x340c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00340C40_0x340c40");
#endif

    switch (ctx->pc) {
        case 0x340d18u: goto label_340d18;
        case 0x340d78u: goto label_340d78;
        case 0x340dd8u: goto label_340dd8;
        case 0x340e54u: goto label_340e54;
        default: break;
    }

    ctx->pc = 0x340c40u;

    // 0x340c40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x340c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x340c44: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x340c44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x340c48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x340c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x340c4c: 0x3c090065  lui         $t1, 0x65
    ctx->pc = 0x340c4cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)101 << 16));
    // 0x340c50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x340c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x340c54: 0x24637840  addiu       $v1, $v1, 0x7840
    ctx->pc = 0x340c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30784));
    // 0x340c58: 0xdc6a0000  ld          $t2, 0x0($v1)
    ctx->pc = 0x340c58u;
    SET_GPR_U64(ctx, 10, FAST_READ64(0x657840u));
    // 0x340c5c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x340c5cu;
    { uint32_t bits = FAST_READ32(0x657848u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x340c60: 0x8467000c  lh          $a3, 0xC($v1)
    ctx->pc = 0x340c60u;
    SET_GPR_S32(ctx, 7, (int16_t)FAST_READ16(0x65784Cu));
    // 0x340c64: 0x3c050081  lui         $a1, 0x81
    ctx->pc = 0x340c64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)129 << 16));
    // 0x340c68: 0x27ab0050  addiu       $t3, $sp, 0x50
    ctx->pc = 0x340c68u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x340c6c: 0x25297850  addiu       $t1, $t1, 0x7850
    ctx->pc = 0x340c6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 30800));
    // 0x340c70: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x340c70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x340c74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x340c74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340c78: 0x24a50fe0  addiu       $a1, $a1, 0xFE0
    ctx->pc = 0x340c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4064));
    // 0x340c7c: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x340c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x340c80: 0x9063000e  lbu         $v1, 0xE($v1)
    ctx->pc = 0x340c80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x65784Eu));
    // 0x340c84: 0xfd6a0000  sd          $t2, 0x0($t3)
    ctx->pc = 0x340c84u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 10));
    // 0x340c88: 0xe5600008  swc1        $f0, 0x8($t3)
    ctx->pc = 0x340c88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 8), bits); }
    // 0x340c8c: 0xa567000c  sh          $a3, 0xC($t3)
    ctx->pc = 0x340c8cu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 12), (uint16_t)GPR_U32(ctx, 7));
    // 0x340c90: 0xa163000e  sb          $v1, 0xE($t3)
    ctx->pc = 0x340c90u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 14), (uint8_t)GPR_U32(ctx, 3));
    // 0x340c94: 0x79270000  lq          $a3, 0x0($t1)
    ctx->pc = 0x340c94u;
    SET_GPR_VEC(ctx, 7, FAST_READ128(0x657850u));
    // 0x340c98: 0xc5200020  lwc1        $f0, 0x20($t1)
    ctx->pc = 0x340c98u;
    { uint32_t bits = FAST_READ32(0x657870u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x340c9c: 0x79230010  lq          $v1, 0x10($t1)
    ctx->pc = 0x340c9cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x657860u));
    // 0x340ca0: 0x7d070000  sq          $a3, 0x0($t0)
    ctx->pc = 0x340ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 7));
    // 0x340ca4: 0x7d030010  sq          $v1, 0x10($t0)
    ctx->pc = 0x340ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), GPR_VEC(ctx, 3));
    // 0x340ca8: 0xe5000020  swc1        $f0, 0x20($t0)
    ctx->pc = 0x340ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
    // 0x340cac: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x340cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x340cb0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x340cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x340cb4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x340cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x340cb8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x340cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x340cbc: 0x7d3821  addu        $a3, $v1, $sp
    ctx->pc = 0x340cbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x340cc0: 0x8ce30028  lw          $v1, 0x28($a3)
    ctx->pc = 0x340cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x340cc4: 0x24630100  addiu       $v1, $v1, 0x100
    ctx->pc = 0x340cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x340cc8: 0x3064001f  andi        $a0, $v1, 0x1F
    ctx->pc = 0x340cc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x340ccc: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x340cccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x340cd0: 0x862006  srlv        $a0, $a2, $a0
    ctx->pc = 0x340cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
    // 0x340cd4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x340cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x340cd8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x340cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x340cdc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x340cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x340ce0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x340ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x340ce4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x340CE4u;
    {
        const bool branch_taken_0x340ce4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x340ce4) {
            ctx->pc = 0x340D20u;
            goto label_340d20;
        }
    }
    ctx->pc = 0x340CECu;
    // 0x340cec: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x340cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x340cf0: 0x2c610003  sltiu       $at, $v1, 0x3
    ctx->pc = 0x340cf0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x340cf4: 0x10200032  beqz        $at, . + 4 + (0x32 << 2)
    ctx->pc = 0x340CF4u;
    {
        const bool branch_taken_0x340cf4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x340cf4) {
            ctx->pc = 0x340DC0u;
            goto label_340dc0;
        }
    }
    ctx->pc = 0x340CFCu;
    // 0x340cfc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x340cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x340d00: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x340d00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x340d04: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x340d04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x340d08: 0x24842160  addiu       $a0, $a0, 0x2160
    ctx->pc = 0x340d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8544));
    // 0x340d0c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x340d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x340d10: 0xc0e1ad8  jal         func_386B60
    ctx->pc = 0x340D10u;
    SET_GPR_U32(ctx, 31, 0x340D18u);
    ctx->pc = 0x340D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340D10u;
    // 0x340d14: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386B60u, 0x340D10u, 0x340D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340D18u;
label_340d18:
    // 0x340d18: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x340D18u;
    {
        const bool branch_taken_0x340d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340d18) {
            ctx->pc = 0x340DC0u;
            goto label_340dc0;
        }
    }
    ctx->pc = 0x340D20u;
label_340d20:
    // 0x340d20: 0x8ce30024  lw          $v1, 0x24($a3)
    ctx->pc = 0x340d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x340d24: 0x24630100  addiu       $v1, $v1, 0x100
    ctx->pc = 0x340d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x340d28: 0x3064001f  andi        $a0, $v1, 0x1F
    ctx->pc = 0x340d28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x340d2c: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x340d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x340d30: 0x862006  srlv        $a0, $a2, $a0
    ctx->pc = 0x340d30u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
    // 0x340d34: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x340d34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x340d38: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x340d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x340d3c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x340d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x340d40: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x340d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x340d44: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x340D44u;
    {
        const bool branch_taken_0x340d44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x340d44) {
            ctx->pc = 0x340D80u;
            goto label_340d80;
        }
    }
    ctx->pc = 0x340D4Cu;
    // 0x340d4c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x340d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x340d50: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x340d50u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x340d54: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x340D54u;
    {
        const bool branch_taken_0x340d54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x340d54) {
            ctx->pc = 0x340DC0u;
            goto label_340dc0;
        }
    }
    ctx->pc = 0x340D5Cu;
    // 0x340d5c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x340d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x340d60: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x340d60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x340d64: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x340d64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x340d68: 0x24842160  addiu       $a0, $a0, 0x2160
    ctx->pc = 0x340d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8544));
    // 0x340d6c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x340d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x340d70: 0xc0e1ad8  jal         func_386B60
    ctx->pc = 0x340D70u;
    SET_GPR_U32(ctx, 31, 0x340D78u);
    ctx->pc = 0x340D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340D70u;
    // 0x340d74: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386B60u, 0x340D70u, 0x340D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340D78u;
label_340d78:
    // 0x340d78: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x340D78u;
    {
        const bool branch_taken_0x340d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340d78) {
            ctx->pc = 0x340DC0u;
            goto label_340dc0;
        }
    }
    ctx->pc = 0x340D80u;
label_340d80:
    // 0x340d80: 0x8ce30020  lw          $v1, 0x20($a3)
    ctx->pc = 0x340d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x340d84: 0x24630100  addiu       $v1, $v1, 0x100
    ctx->pc = 0x340d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x340d88: 0x3064001f  andi        $a0, $v1, 0x1F
    ctx->pc = 0x340d88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x340d8c: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x340d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x340d90: 0x862006  srlv        $a0, $a2, $a0
    ctx->pc = 0x340d90u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
    // 0x340d94: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x340d94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x340d98: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x340d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x340d9c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x340d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x340da0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x340da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x340da4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x340DA4u;
    {
        const bool branch_taken_0x340da4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x340da4) {
            ctx->pc = 0x340DC0u;
            goto label_340dc0;
        }
    }
    ctx->pc = 0x340DACu;
    // 0x340dac: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x340dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x340db0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x340DB0u;
    {
        const bool branch_taken_0x340db0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x340DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340DB0u;
        // 0x340db4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340db0) {
            ctx->pc = 0x340DC0u;
            goto label_340dc0;
        }
    }
    ctx->pc = 0x340DB8u;
    // 0x340db8: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x340db8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x340dbc: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x340dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_340dc0:
    // 0x340dc0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x340dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x340dc4: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x340DC4u;
    {
        const bool branch_taken_0x340dc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x340DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340DC4u;
        // 0x340dc8: 0x3c040092  lui         $a0, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340dc4) {
            ctx->pc = 0x340E60u;
            goto label_340e60;
        }
    }
    ctx->pc = 0x340DCCu;
    // 0x340dcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x340dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340dd0: 0xc0e1cf0  jal         func_3873C0
    ctx->pc = 0x340DD0u;
    SET_GPR_U32(ctx, 31, 0x340DD8u);
    ctx->pc = 0x340DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340DD0u;
    // 0x340dd4: 0x24842160  addiu       $a0, $a0, 0x2160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3873C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3873C0u, 0x340DD0u, 0x340DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340DD8u;
label_340dd8:
    // 0x340dd8: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x340DD8u;
    {
        const bool branch_taken_0x340dd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x340dd8) {
            ctx->pc = 0x340E60u;
            goto label_340e60;
        }
    }
    ctx->pc = 0x340DE0u;
    // 0x340de0: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x340de0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x340de4: 0x28a10005  slti        $at, $a1, 0x5
    ctx->pc = 0x340de4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x340de8: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x340DE8u;
    {
        const bool branch_taken_0x340de8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x340de8) {
            ctx->pc = 0x340E18u;
            goto label_340e18;
        }
    }
    ctx->pc = 0x340DF0u;
    // 0x340df0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x340df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x340df4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x340df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x340df8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x340df8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x340dfc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x340dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x340e00: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x340e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x340e04: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x340e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x340e08: 0x9063004b  lbu         $v1, 0x4B($v1)
    ctx->pc = 0x340e08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 75)));
    // 0x340e0c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x340E0Cu;
    {
        const bool branch_taken_0x340e0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x340e0c) {
            ctx->pc = 0x340E20u;
            goto label_340e20;
        }
    }
    ctx->pc = 0x340E14u;
    // 0x340e14: 0x0  nop
    ctx->pc = 0x340e14u;
    // NOP
label_340e18:
    // 0x340e18: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x340e18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x340e1c: 0x0  nop
    ctx->pc = 0x340e1cu;
    // NOP
label_340e20:
    // 0x340e20: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x340e20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x340e24: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x340e24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x340e28: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x340e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x340e2c: 0x24842160  addiu       $a0, $a0, 0x2160
    ctx->pc = 0x340e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8544));
    // 0x340e30: 0x2406012c  addiu       $a2, $zero, 0x12C
    ctx->pc = 0x340e30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x340e34: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x340e34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340e38: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x340e38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x340e3c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x340e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x340e40: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x340e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x340e44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x340e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x340e48: 0x9045004b  lbu         $a1, 0x4B($v0)
    ctx->pc = 0x340e48u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 75)));
    // 0x340e4c: 0xc0e1a40  jal         func_386900
    ctx->pc = 0x340E4Cu;
    SET_GPR_U32(ctx, 31, 0x340E54u);
    ctx->pc = 0x340E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340E4Cu;
    // 0x340e50: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386900u, 0x340E4Cu, 0x340E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340E54u;
label_340e54:
    // 0x340e54: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x340e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x340e58: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x340e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x340e5c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x340e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_340e60:
    // 0x340e60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x340e60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x340e64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x340e64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x340e68: 0x3e00008  jr          $ra
    ctx->pc = 0x340E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x340E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340E68u;
        // 0x340e6c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340E68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x340E70u;
}
