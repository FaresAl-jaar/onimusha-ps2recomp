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

// Function: sub_0014BBE0
// Address: 0x14bbe0 - 0x14d2ac
void sub_0014BBE0_0x14bbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014BBE0_0x14bbe0");
#endif

    switch (ctx->pc) {
        case 0x14bc8cu: goto label_14bc8c;
        case 0x14bfd8u: goto label_14bfd8;
        case 0x14bff0u: goto label_14bff0;
        case 0x14c000u: goto label_14c000;
        case 0x14c01cu: goto label_14c01c;
        case 0x14c064u: goto label_14c064;
        case 0x14c088u: goto label_14c088;
        case 0x14c09cu: goto label_14c09c;
        case 0x14c0d4u: goto label_14c0d4;
        case 0x14c0ecu: goto label_14c0ec;
        case 0x14c17cu: goto label_14c17c;
        case 0x14c1a4u: goto label_14c1a4;
        case 0x14c1b8u: goto label_14c1b8;
        case 0x14c1f4u: goto label_14c1f4;
        case 0x14c20cu: goto label_14c20c;
        case 0x14c228u: goto label_14c228;
        case 0x14c25cu: goto label_14c25c;
        case 0x14c268u: goto label_14c268;
        case 0x14c280u: goto label_14c280;
        case 0x14c298u: goto label_14c298;
        case 0x14c2acu: goto label_14c2ac;
        case 0x14c2c0u: goto label_14c2c0;
        case 0x14c2e4u: goto label_14c2e4;
        case 0x14c30cu: goto label_14c30c;
        case 0x14c324u: goto label_14c324;
        case 0x14c334u: goto label_14c334;
        case 0x14c350u: goto label_14c350;
        case 0x14c368u: goto label_14c368;
        case 0x14c37cu: goto label_14c37c;
        case 0x14c39cu: goto label_14c39c;
        case 0x14c3b4u: goto label_14c3b4;
        case 0x14c3ccu: goto label_14c3cc;
        case 0x14c3f8u: goto label_14c3f8;
        case 0x14c410u: goto label_14c410;
        case 0x14c434u: goto label_14c434;
        case 0x14c450u: goto label_14c450;
        case 0x14c468u: goto label_14c468;
        case 0x14c4a4u: goto label_14c4a4;
        case 0x14c500u: goto label_14c500;
        case 0x14c51cu: goto label_14c51c;
        case 0x14c52cu: goto label_14c52c;
        case 0x14c584u: goto label_14c584;
        case 0x14c5c8u: goto label_14c5c8;
        case 0x14c600u: goto label_14c600;
        case 0x14c63cu: goto label_14c63c;
        case 0x14c67cu: goto label_14c67c;
        case 0x14c698u: goto label_14c698;
        case 0x14c738u: goto label_14c738;
        case 0x14c760u: goto label_14c760;
        case 0x14c7acu: goto label_14c7ac;
        case 0x14c7e4u: goto label_14c7e4;
        case 0x14c7f8u: goto label_14c7f8;
        case 0x14c808u: goto label_14c808;
        case 0x14c820u: goto label_14c820;
        case 0x14c848u: goto label_14c848;
        case 0x14c868u: goto label_14c868;
        case 0x14c89cu: goto label_14c89c;
        case 0x14c8c8u: goto label_14c8c8;
        case 0x14c924u: goto label_14c924;
        case 0x14c938u: goto label_14c938;
        case 0x14ca50u: goto label_14ca50;
        case 0x14ca74u: goto label_14ca74;
        case 0x14ca80u: goto label_14ca80;
        case 0x14caa0u: goto label_14caa0;
        case 0x14caacu: goto label_14caac;
        case 0x14cac0u: goto label_14cac0;
        case 0x14cad8u: goto label_14cad8;
        case 0x14cae8u: goto label_14cae8;
        case 0x14cb00u: goto label_14cb00;
        case 0x14cb30u: goto label_14cb30;
        case 0x14cb80u: goto label_14cb80;
        case 0x14cbd0u: goto label_14cbd0;
        case 0x14cc20u: goto label_14cc20;
        case 0x14cc70u: goto label_14cc70;
        case 0x14cc90u: goto label_14cc90;
        case 0x14ccc8u: goto label_14ccc8;
        case 0x14ccf0u: goto label_14ccf0;
        case 0x14cd24u: goto label_14cd24;
        case 0x14cd5cu: goto label_14cd5c;
        case 0x14cd6cu: goto label_14cd6c;
        case 0x14cd90u: goto label_14cd90;
        case 0x14cdb0u: goto label_14cdb0;
        case 0x14cdd0u: goto label_14cdd0;
        case 0x14cdf0u: goto label_14cdf0;
        case 0x14ce20u: goto label_14ce20;
        case 0x14ce40u: goto label_14ce40;
        case 0x14ce68u: goto label_14ce68;
        case 0x14ce8cu: goto label_14ce8c;
        case 0x14cec0u: goto label_14cec0;
        case 0x14ced4u: goto label_14ced4;
        case 0x14cefcu: goto label_14cefc;
        case 0x14cf24u: goto label_14cf24;
        case 0x14cf40u: goto label_14cf40;
        case 0x14cf64u: goto label_14cf64;
        case 0x14cf80u: goto label_14cf80;
        case 0x14cf90u: goto label_14cf90;
        case 0x14cfc0u: goto label_14cfc0;
        case 0x14cff4u: goto label_14cff4;
        case 0x14d038u: goto label_14d038;
        case 0x14d040u: goto label_14d040;
        case 0x14d060u: goto label_14d060;
        case 0x14d06cu: goto label_14d06c;
        case 0x14d080u: goto label_14d080;
        case 0x14d098u: goto label_14d098;
        case 0x14d0b0u: goto label_14d0b0;
        case 0x14d0c8u: goto label_14d0c8;
        case 0x14d0fcu: goto label_14d0fc;
        case 0x14d118u: goto label_14d118;
        case 0x14d134u: goto label_14d134;
        case 0x14d148u: goto label_14d148;
        case 0x14d16cu: goto label_14d16c;
        case 0x14d17cu: goto label_14d17c;
        case 0x14d190u: goto label_14d190;
        case 0x14d1a0u: goto label_14d1a0;
        case 0x14d1bcu: goto label_14d1bc;
        case 0x14d1d0u: goto label_14d1d0;
        case 0x14d1f0u: goto label_14d1f0;
        case 0x14d248u: goto label_14d248;
        case 0x14d258u: goto label_14d258;
        case 0x14d278u: goto label_14d278;
        case 0x14d288u: goto label_14d288;
        default: break;
    }

    ctx->pc = 0x14bbe0u;

    // 0x14bbe0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x14bbe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x14bbe4: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x14bbe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x14bbe8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x14bbe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x14bbec: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x14bbecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x14bbf0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x14bbf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x14bbf4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14bbf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x14bbf8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x14bbf8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bbfc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14bbfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14bc00: 0x5203c  dsll32      $a0, $a1, 0
    ctx->pc = 0x14bc00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 0));
    // 0x14bc04: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14bc04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14bc08: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x14bc08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x14bc0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14bc0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14bc10: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x14bc10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x14bc14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14bc14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14bc18: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x14bc18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bc1c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x14bc1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bc20: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14BC20u;
    {
        const bool branch_taken_0x14bc20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BC20u;
        // 0x14bc24: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bc20) {
            ctx->pc = 0x14BC30u;
            goto label_14bc30;
        }
    }
    ctx->pc = 0x14BC28u;
    // 0x14bc28: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14BC28u;
    {
        const bool branch_taken_0x14bc28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BC28u;
        // 0x14bc2c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bc28) {
            ctx->pc = 0x14BC38u;
            goto label_14bc38;
        }
    }
    ctx->pc = 0x14BC30u;
label_14bc30:
    // 0x14bc30: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x14bc30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bc34: 0x0  nop
    ctx->pc = 0x14bc34u;
    // NOP
label_14bc38:
    // 0x14bc38: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x14bc38u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x14bc3c: 0x13187c  dsll32      $v1, $s3, 1
    ctx->pc = 0x14bc3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 1));
    // 0x14bc40: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x14bc40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x14bc44: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x14bc44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x14bc48: 0xa391855c  sb          $s1, -0x7AA4($gp)
    ctx->pc = 0x14bc48u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935900), (uint8_t)GPR_U32(ctx, 17));
    // 0x14bc4c: 0x3983c  dsll32      $s3, $v1, 0
    ctx->pc = 0x14bc4cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) << (32 + 0));
    // 0x14bc50: 0x28830080  slti        $v1, $a0, 0x80
    ctx->pc = 0x14bc50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x14bc54: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x14BC54u;
    {
        const bool branch_taken_0x14bc54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14BC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BC54u;
        // 0x14bc58: 0x13983f  dsra32      $s3, $s3, 0 (Delay Slot)
        SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bc54) {
            ctx->pc = 0x14BC90u;
            goto label_14bc90;
        }
    }
    ctx->pc = 0x14BC5Cu;
    // 0x14bc5c: 0x92470001  lbu         $a3, 0x1($s2)
    ctx->pc = 0x14bc5cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x14bc60: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x14bc60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x14bc64: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x14bc64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x14bc68: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14bc68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bc6c: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x14bc6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x14bc70: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x14bc70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x14bc74: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x14bc74u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x14bc78: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x14bc78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x14bc7c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x14bc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x14bc80: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x14bc80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x14bc84: 0xc0a2b18  jal         func_28AC60
    ctx->pc = 0x14BC84u;
    SET_GPR_U32(ctx, 31, 0x14BC8Cu);
    ctx->pc = 0x14BC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BC84u;
    // 0x14bc88: 0x432025  or          $a0, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AC60u, 0x14BC84u, 0x14BC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BC8Cu;
label_14bc8c:
    // 0x14bc8c: 0x0  nop
    ctx->pc = 0x14bc8cu;
    // NOP
label_14bc90:
    // 0x14bc90: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x14bc90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14bc94: 0x240400c9  addiu       $a0, $zero, 0xC9
    ctx->pc = 0x14bc94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
    // 0x14bc98: 0x1064056d  beq         $v1, $a0, . + 4 + (0x56D << 2)
    ctx->pc = 0x14BC98u;
    {
        const bool branch_taken_0x14bc98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x14BC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BC98u;
        // 0x14bc9c: 0x240400a1  addiu       $a0, $zero, 0xA1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bc98) {
            ctx->pc = 0x14D250u;
            goto label_14d250;
        }
    }
    ctx->pc = 0x14BCA0u;
    // 0x14bca0: 0x10640555  beq         $v1, $a0, . + 4 + (0x555 << 2)
    ctx->pc = 0x14BCA0u;
    {
        const bool branch_taken_0x14bca0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x14bca0) {
            ctx->pc = 0x14D1F8u;
            goto label_14d1f8;
        }
    }
    ctx->pc = 0x14BCA8u;
    // 0x14bca8: 0x2404009a  addiu       $a0, $zero, 0x9A
    ctx->pc = 0x14bca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
    // 0x14bcac: 0x10640546  beq         $v1, $a0, . + 4 + (0x546 << 2)
    ctx->pc = 0x14BCACu;
    {
        const bool branch_taken_0x14bcac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x14BCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BCACu;
        // 0x14bcb0: 0x240400a5  addiu       $a0, $zero, 0xA5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 165));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bcac) {
            ctx->pc = 0x14D1C8u;
            goto label_14d1c8;
        }
    }
    ctx->pc = 0x14BCB4u;
    // 0x14bcb4: 0x1064053c  beq         $v1, $a0, . + 4 + (0x53C << 2)
    ctx->pc = 0x14BCB4u;
    {
        const bool branch_taken_0x14bcb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x14bcb4) {
            ctx->pc = 0x14D1A8u;
            goto label_14d1a8;
        }
    }
    ctx->pc = 0x14BCBCu;
    // 0x14bcbc: 0x240400a3  addiu       $a0, $zero, 0xA3
    ctx->pc = 0x14bcbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 163));
    // 0x14bcc0: 0x10640531  beq         $v1, $a0, . + 4 + (0x531 << 2)
    ctx->pc = 0x14BCC0u;
    {
        const bool branch_taken_0x14bcc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x14BCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BCC0u;
        // 0x14bcc4: 0x240400a6  addiu       $a0, $zero, 0xA6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bcc0) {
            ctx->pc = 0x14D188u;
            goto label_14d188;
        }
    }
    ctx->pc = 0x14BCC8u;
    // 0x14bcc8: 0x10640523  beq         $v1, $a0, . + 4 + (0x523 << 2)
    ctx->pc = 0x14BCC8u;
    {
        const bool branch_taken_0x14bcc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x14bcc8) {
            ctx->pc = 0x14D158u;
            goto label_14d158;
        }
    }
    ctx->pc = 0x14BCD0u;
    // 0x14bcd0: 0x2404009f  addiu       $a0, $zero, 0x9F
    ctx->pc = 0x14bcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
    // 0x14bcd4: 0x1064051e  beq         $v1, $a0, . + 4 + (0x51E << 2)
    ctx->pc = 0x14BCD4u;
    {
        const bool branch_taken_0x14bcd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x14BCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BCD4u;
        // 0x14bcd8: 0x24040099  addiu       $a0, $zero, 0x99 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bcd4) {
            ctx->pc = 0x14D150u;
            goto label_14d150;
        }
    }
    ctx->pc = 0x14BCDCu;
    // 0x14bcdc: 0x10640510  beq         $v1, $a0, . + 4 + (0x510 << 2)
    ctx->pc = 0x14BCDCu;
    {
        const bool branch_taken_0x14bcdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x14bcdc) {
            ctx->pc = 0x14D120u;
            goto label_14d120;
        }
    }
    ctx->pc = 0x14BCE4u;
    // 0x14bce4: 0x2404002a  addiu       $a0, $zero, 0x2A
    ctx->pc = 0x14bce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x14bce8: 0x1064050d  beq         $v1, $a0, . + 4 + (0x50D << 2)
    ctx->pc = 0x14BCE8u;
    {
        const bool branch_taken_0x14bce8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x14BCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BCE8u;
        // 0x14bcec: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bce8) {
            ctx->pc = 0x14D120u;
            goto label_14d120;
        }
    }
    ctx->pc = 0x14BCF0u;
    // 0x14bcf0: 0x1064050b  beq         $v1, $a0, . + 4 + (0x50B << 2)
    ctx->pc = 0x14BCF0u;
    {
        const bool branch_taken_0x14bcf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x14bcf0) {
            ctx->pc = 0x14D120u;
            goto label_14d120;
        }
    }
    ctx->pc = 0x14BCF8u;
    // 0x14bcf8: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x14bcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x14bcfc: 0x10640508  beq         $v1, $a0, . + 4 + (0x508 << 2)
    ctx->pc = 0x14BCFCu;
    {
        const bool branch_taken_0x14bcfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x14BD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BCFCu;
        // 0x14bd00: 0x240400c6  addiu       $a0, $zero, 0xC6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 198));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bcfc) {
            ctx->pc = 0x14D120u;
            goto label_14d120;
        }
    }
    ctx->pc = 0x14BD04u;
    // 0x14bd04: 0x106404f2  beq         $v1, $a0, . + 4 + (0x4F2 << 2)
    ctx->pc = 0x14BD04u;
    {
        const bool branch_taken_0x14bd04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x14bd04) {
            ctx->pc = 0x14D0D0u;
            goto label_14d0d0;
        }
    }
    ctx->pc = 0x14BD0Cu;
    // 0x14bd0c: 0x240400c5  addiu       $a0, $zero, 0xC5
    ctx->pc = 0x14bd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 197));
    // 0x14bd10: 0x106404e9  beq         $v1, $a0, . + 4 + (0x4E9 << 2)
    ctx->pc = 0x14BD10u;
    {
        const bool branch_taken_0x14bd10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x14BD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BD10u;
        // 0x14bd14: 0x240400c4  addiu       $a0, $zero, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bd10) {
            ctx->pc = 0x14D0B8u;
            goto label_14d0b8;
        }
    }
    ctx->pc = 0x14BD18u;
    // 0x14bd18: 0x106404e1  beq         $v1, $a0, . + 4 + (0x4E1 << 2)
    ctx->pc = 0x14BD18u;
    {
        const bool branch_taken_0x14bd18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x14bd18) {
            ctx->pc = 0x14D0A0u;
            goto label_14d0a0;
        }
    }
    ctx->pc = 0x14BD20u;
    // 0x14bd20: 0x240400c3  addiu       $a0, $zero, 0xC3
    ctx->pc = 0x14bd20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 195));
    // 0x14bd24: 0x106404d8  beq         $v1, $a0, . + 4 + (0x4D8 << 2)
    ctx->pc = 0x14BD24u;
    {
        const bool branch_taken_0x14bd24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x14BD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BD24u;
        // 0x14bd28: 0x240400c2  addiu       $a0, $zero, 0xC2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 194));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bd24) {
            ctx->pc = 0x14D088u;
            goto label_14d088;
        }
    }
    ctx->pc = 0x14BD2Cu;
    // 0x14bd2c: 0x106404b4  beq         $v1, $a0, . + 4 + (0x4B4 << 2)
    ctx->pc = 0x14BD2Cu;
    {
        const bool branch_taken_0x14bd2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x14bd2c) {
            ctx->pc = 0x14D000u;
            goto label_14d000;
        }
    }
    ctx->pc = 0x14BD34u;
    // 0x14bd34: 0x240400c1  addiu       $a0, $zero, 0xC1
    ctx->pc = 0x14bd34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
    // 0x14bd38: 0x10640497  beq         $v1, $a0, . + 4 + (0x497 << 2)
    ctx->pc = 0x14BD38u;
    {
        const bool branch_taken_0x14bd38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x14BD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BD38u;
        // 0x14bd3c: 0x240400a0  addiu       $a0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bd38) {
            ctx->pc = 0x14CF98u;
            goto label_14cf98;
        }
    }
    ctx->pc = 0x14BD40u;
    // 0x14bd40: 0x1064048b  beq         $v1, $a0, . + 4 + (0x48B << 2)
    ctx->pc = 0x14BD40u;
    {
        const bool branch_taken_0x14bd40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x14BD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BD40u;
        // 0x14bd44: 0x2406009e  addiu       $a2, $zero, 0x9E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bd40) {
            ctx->pc = 0x14CF70u;
            goto label_14cf70;
        }
    }
    ctx->pc = 0x14BD48u;
    // 0x14bd48: 0x1066047f  beq         $v1, $a2, . + 4 + (0x47F << 2)
    ctx->pc = 0x14BD48u;
    {
        const bool branch_taken_0x14bd48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x14BD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BD48u;
        // 0x14bd4c: 0x2404009d  addiu       $a0, $zero, 0x9D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bd48) {
            ctx->pc = 0x14CF48u;
            goto label_14cf48;
        }
    }
    ctx->pc = 0x14BD50u;
    // 0x14bd50: 0x10640477  beq         $v1, $a0, . + 4 + (0x477 << 2)
    ctx->pc = 0x14BD50u;
    {
        const bool branch_taken_0x14bd50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x14BD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BD50u;
        // 0x14bd54: 0x2406009b  addiu       $a2, $zero, 0x9B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bd50) {
            ctx->pc = 0x14CF30u;
            goto label_14cf30;
        }
    }
    ctx->pc = 0x14BD58u;
    // 0x14bd58: 0x1066046b  beq         $v1, $a2, . + 4 + (0x46B << 2)
    ctx->pc = 0x14BD58u;
    {
        const bool branch_taken_0x14bd58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x14BD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BD58u;
        // 0x14bd5c: 0x24040097  addiu       $a0, $zero, 0x97 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bd58) {
            ctx->pc = 0x14CF08u;
            goto label_14cf08;
        }
    }
    ctx->pc = 0x14BD60u;
    // 0x14bd60: 0x1064044d  beq         $v1, $a0, . + 4 + (0x44D << 2)
    ctx->pc = 0x14BD60u;
    {
        const bool branch_taken_0x14bd60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x14bd60) {
            ctx->pc = 0x14CE98u;
            goto label_14ce98;
        }
    }
    ctx->pc = 0x14BD68u;
    // 0x14bd68: 0x240400a4  addiu       $a0, $zero, 0xA4
    ctx->pc = 0x14bd68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
    // 0x14bd6c: 0x10640436  beq         $v1, $a0, . + 4 + (0x436 << 2)
    ctx->pc = 0x14BD6Cu;
    {
        const bool branch_taken_0x14bd6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x14BD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BD6Cu;
        // 0x14bd70: 0x2404009c  addiu       $a0, $zero, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bd6c) {
            ctx->pc = 0x14CE48u;
            goto label_14ce48;
        }
    }
    ctx->pc = 0x14BD74u;
    // 0x14bd74: 0x10640420  beq         $v1, $a0, . + 4 + (0x420 << 2)
    ctx->pc = 0x14BD74u;
    {
        const bool branch_taken_0x14bd74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x14bd74) {
            ctx->pc = 0x14CDF8u;
            goto label_14cdf8;
        }
    }
    ctx->pc = 0x14BD7Cu;
    // 0x14bd7c: 0x24040098  addiu       $a0, $zero, 0x98
    ctx->pc = 0x14bd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x14bd80: 0x10640415  beq         $v1, $a0, . + 4 + (0x415 << 2)
    ctx->pc = 0x14BD80u;
    {
        const bool branch_taken_0x14bd80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x14BD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BD80u;
        // 0x14bd84: 0x24040096  addiu       $a0, $zero, 0x96 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bd80) {
            ctx->pc = 0x14CDD8u;
            goto label_14cdd8;
        }
    }
    ctx->pc = 0x14BD88u;
    // 0x14bd88: 0x1064040b  beq         $v1, $a0, . + 4 + (0x40B << 2)
    ctx->pc = 0x14BD88u;
    {
        const bool branch_taken_0x14bd88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x14bd88) {
            ctx->pc = 0x14CDB8u;
            goto label_14cdb8;
        }
    }
    ctx->pc = 0x14BD90u;
    // 0x14bd90: 0x24040093  addiu       $a0, $zero, 0x93
    ctx->pc = 0x14bd90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
    // 0x14bd94: 0x10640400  beq         $v1, $a0, . + 4 + (0x400 << 2)
    ctx->pc = 0x14BD94u;
    {
        const bool branch_taken_0x14bd94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x14BD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BD94u;
        // 0x14bd98: 0x24040091  addiu       $a0, $zero, 0x91 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bd94) {
            ctx->pc = 0x14CD98u;
            goto label_14cd98;
        }
    }
    ctx->pc = 0x14BD9Cu;
    // 0x14bd9c: 0x106403f6  beq         $v1, $a0, . + 4 + (0x3F6 << 2)
    ctx->pc = 0x14BD9Cu;
    {
        const bool branch_taken_0x14bd9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x14bd9c) {
            ctx->pc = 0x14CD78u;
            goto label_14cd78;
        }
    }
    ctx->pc = 0x14BDA4u;
    // 0x14bda4: 0x24040090  addiu       $a0, $zero, 0x90
    ctx->pc = 0x14bda4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x14bda8: 0x106403e1  beq         $v1, $a0, . + 4 + (0x3E1 << 2)
    ctx->pc = 0x14BDA8u;
    {
        const bool branch_taken_0x14bda8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x14BDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BDA8u;
        // 0x14bdac: 0x2404008f  addiu       $a0, $zero, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bda8) {
            ctx->pc = 0x14CD30u;
            goto label_14cd30;
        }
    }
    ctx->pc = 0x14BDB0u;
    // 0x14bdb0: 0x106403c7  beq         $v1, $a0, . + 4 + (0x3C7 << 2)
    ctx->pc = 0x14BDB0u;
    {
        const bool branch_taken_0x14bdb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x14bdb0) {
            ctx->pc = 0x14CCD0u;
            goto label_14ccd0;
        }
    }
    ctx->pc = 0x14BDB8u;
    // 0x14bdb8: 0x2404008e  addiu       $a0, $zero, 0x8E
    ctx->pc = 0x14bdb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x14bdbc: 0x106403b6  beq         $v1, $a0, . + 4 + (0x3B6 << 2)
    ctx->pc = 0x14BDBCu;
    {
        const bool branch_taken_0x14bdbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x14BDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BDBCu;
        // 0x14bdc0: 0x2404008d  addiu       $a0, $zero, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bdbc) {
            ctx->pc = 0x14CC98u;
            goto label_14cc98;
        }
    }
    ctx->pc = 0x14BDC4u;
    // 0x14bdc4: 0x106403ac  beq         $v1, $a0, . + 4 + (0x3AC << 2)
    ctx->pc = 0x14BDC4u;
    {
        const bool branch_taken_0x14bdc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x14bdc4) {
            ctx->pc = 0x14CC78u;
            goto label_14cc78;
        }
    }
    ctx->pc = 0x14BDCCu;
    // 0x14bdcc: 0x2404008c  addiu       $a0, $zero, 0x8C
    ctx->pc = 0x14bdccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x14bdd0: 0x10640395  beq         $v1, $a0, . + 4 + (0x395 << 2)
    ctx->pc = 0x14BDD0u;
    {
        const bool branch_taken_0x14bdd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x14BDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BDD0u;
        // 0x14bdd4: 0x2404008b  addiu       $a0, $zero, 0x8B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 139));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bdd0) {
            ctx->pc = 0x14CC28u;
            goto label_14cc28;
        }
    }
    ctx->pc = 0x14BDD8u;
    // 0x14bdd8: 0x1064037f  beq         $v1, $a0, . + 4 + (0x37F << 2)
    ctx->pc = 0x14BDD8u;
    {
        const bool branch_taken_0x14bdd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x14bdd8) {
            ctx->pc = 0x14CBD8u;
            goto label_14cbd8;
        }
    }
    ctx->pc = 0x14BDE0u;
    // 0x14bde0: 0x2404008a  addiu       $a0, $zero, 0x8A
    ctx->pc = 0x14bde0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
    // 0x14bde4: 0x10640368  beq         $v1, $a0, . + 4 + (0x368 << 2)
    ctx->pc = 0x14BDE4u;
    {
        const bool branch_taken_0x14bde4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x14BDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BDE4u;
        // 0x14bde8: 0x24040089  addiu       $a0, $zero, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bde4) {
            ctx->pc = 0x14CB88u;
            goto label_14cb88;
        }
    }
    ctx->pc = 0x14BDECu;
    // 0x14bdec: 0x10640352  beq         $v1, $a0, . + 4 + (0x352 << 2)
    ctx->pc = 0x14BDECu;
    {
        const bool branch_taken_0x14bdec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x14bdec) {
            ctx->pc = 0x14CB38u;
            goto label_14cb38;
        }
    }
    ctx->pc = 0x14BDF4u;
    // 0x14bdf4: 0x24040088  addiu       $a0, $zero, 0x88
    ctx->pc = 0x14bdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x14bdf8: 0x10640341  beq         $v1, $a0, . + 4 + (0x341 << 2)
    ctx->pc = 0x14BDF8u;
    {
        const bool branch_taken_0x14bdf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x14BDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BDF8u;
        // 0x14bdfc: 0x24040087  addiu       $a0, $zero, 0x87 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bdf8) {
            ctx->pc = 0x14CB00u;
            goto label_14cb00;
        }
    }
    ctx->pc = 0x14BE00u;
    // 0x14be00: 0x1064033f  beq         $v1, $a0, . + 4 + (0x33F << 2)
    ctx->pc = 0x14BE00u;
    {
        const bool branch_taken_0x14be00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x14be00) {
            ctx->pc = 0x14CB00u;
            goto label_14cb00;
        }
    }
    ctx->pc = 0x14BE08u;
    // 0x14be08: 0x24040086  addiu       $a0, $zero, 0x86
    ctx->pc = 0x14be08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
    // 0x14be0c: 0x1064033c  beq         $v1, $a0, . + 4 + (0x33C << 2)
    ctx->pc = 0x14BE0Cu;
    {
        const bool branch_taken_0x14be0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x14BE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BE0Cu;
        // 0x14be10: 0x24040085  addiu       $a0, $zero, 0x85 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14be0c) {
            ctx->pc = 0x14CB00u;
            goto label_14cb00;
        }
    }
    ctx->pc = 0x14BE14u;
    // 0x14be14: 0x10640336  beq         $v1, $a0, . + 4 + (0x336 << 2)
    ctx->pc = 0x14BE14u;
    {
        const bool branch_taken_0x14be14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x14be14) {
            ctx->pc = 0x14CAF0u;
            goto label_14caf0;
        }
    }
    ctx->pc = 0x14BE1Cu;
    // 0x14be1c: 0x240400c0  addiu       $a0, $zero, 0xC0
    ctx->pc = 0x14be1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x14be20: 0x10640329  beq         $v1, $a0, . + 4 + (0x329 << 2)
    ctx->pc = 0x14BE20u;
    {
        const bool branch_taken_0x14be20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x14BE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BE20u;
        // 0x14be24: 0x24040084  addiu       $a0, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14be20) {
            ctx->pc = 0x14CAC8u;
            goto label_14cac8;
        }
    }
    ctx->pc = 0x14BE28u;
    // 0x14be28: 0x10640327  beq         $v1, $a0, . + 4 + (0x327 << 2)
    ctx->pc = 0x14BE28u;
    {
        const bool branch_taken_0x14be28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x14be28) {
            ctx->pc = 0x14CAC8u;
            goto label_14cac8;
        }
    }
    ctx->pc = 0x14BE30u;
    // 0x14be30: 0x24040083  addiu       $a0, $zero, 0x83
    ctx->pc = 0x14be30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
    // 0x14be34: 0x106402a6  beq         $v1, $a0, . + 4 + (0x2A6 << 2)
    ctx->pc = 0x14BE34u;
    {
        const bool branch_taken_0x14be34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x14BE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BE34u;
        // 0x14be38: 0x240400c7  addiu       $a0, $zero, 0xC7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14be34) {
            ctx->pc = 0x14C8D0u;
            goto label_14c8d0;
        }
    }
    ctx->pc = 0x14BE3Cu;
    // 0x14be3c: 0x106402a4  beq         $v1, $a0, . + 4 + (0x2A4 << 2)
    ctx->pc = 0x14BE3Cu;
    {
        const bool branch_taken_0x14be3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x14be3c) {
            ctx->pc = 0x14C8D0u;
            goto label_14c8d0;
        }
    }
    ctx->pc = 0x14BE44u;
    // 0x14be44: 0x240400a2  addiu       $a0, $zero, 0xA2
    ctx->pc = 0x14be44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
    // 0x14be48: 0x10640297  beq         $v1, $a0, . + 4 + (0x297 << 2)
    ctx->pc = 0x14BE48u;
    {
        const bool branch_taken_0x14be48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x14BE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BE48u;
        // 0x14be4c: 0x240400c8  addiu       $a0, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14be48) {
            ctx->pc = 0x14C8A8u;
            goto label_14c8a8;
        }
    }
    ctx->pc = 0x14BE50u;
    // 0x14be50: 0x10640295  beq         $v1, $a0, . + 4 + (0x295 << 2)
    ctx->pc = 0x14BE50u;
    {
        const bool branch_taken_0x14be50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x14be50) {
            ctx->pc = 0x14C8A8u;
            goto label_14c8a8;
        }
    }
    ctx->pc = 0x14BE58u;
    // 0x14be58: 0x24040095  addiu       $a0, $zero, 0x95
    ctx->pc = 0x14be58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
    // 0x14be5c: 0x10640288  beq         $v1, $a0, . + 4 + (0x288 << 2)
    ctx->pc = 0x14BE5Cu;
    {
        const bool branch_taken_0x14be5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x14BE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BE5Cu;
        // 0x14be60: 0x2404003b  addiu       $a0, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14be5c) {
            ctx->pc = 0x14C880u;
            goto label_14c880;
        }
    }
    ctx->pc = 0x14BE64u;
    // 0x14be64: 0x10640282  beq         $v1, $a0, . + 4 + (0x282 << 2)
    ctx->pc = 0x14BE64u;
    {
        const bool branch_taken_0x14be64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x14be64) {
            ctx->pc = 0x14C870u;
            goto label_14c870;
        }
    }
    ctx->pc = 0x14BE6Cu;
    // 0x14be6c: 0x2404002b  addiu       $a0, $zero, 0x2B
    ctx->pc = 0x14be6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x14be70: 0x10640277  beq         $v1, $a0, . + 4 + (0x277 << 2)
    ctx->pc = 0x14BE70u;
    {
        const bool branch_taken_0x14be70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x14BE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BE70u;
        // 0x14be74: 0x24040082  addiu       $a0, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14be70) {
            ctx->pc = 0x14C850u;
            goto label_14c850;
        }
    }
    ctx->pc = 0x14BE78u;
    // 0x14be78: 0x1064026b  beq         $v1, $a0, . + 4 + (0x26B << 2)
    ctx->pc = 0x14BE78u;
    {
        const bool branch_taken_0x14be78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x14be78) {
            ctx->pc = 0x14C828u;
            goto label_14c828;
        }
    }
    ctx->pc = 0x14BE80u;
    // 0x14be80: 0x24040081  addiu       $a0, $zero, 0x81
    ctx->pc = 0x14be80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x14be84: 0x10640262  beq         $v1, $a0, . + 4 + (0x262 << 2)
    ctx->pc = 0x14BE84u;
    {
        const bool branch_taken_0x14be84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x14BE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BE84u;
        // 0x14be88: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14be84) {
            ctx->pc = 0x14C810u;
            goto label_14c810;
        }
    }
    ctx->pc = 0x14BE8Cu;
    // 0x14be8c: 0x10640178  beq         $v1, $a0, . + 4 + (0x178 << 2)
    ctx->pc = 0x14BE8Cu;
    {
        const bool branch_taken_0x14be8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x14be8c) {
            ctx->pc = 0x14C470u;
            goto label_14c470;
        }
    }
    ctx->pc = 0x14BE94u;
    // 0x14be94: 0x24040029  addiu       $a0, $zero, 0x29
    ctx->pc = 0x14be94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x14be98: 0x1064016f  beq         $v1, $a0, . + 4 + (0x16F << 2)
    ctx->pc = 0x14BE98u;
    {
        const bool branch_taken_0x14be98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x14BE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BE98u;
        // 0x14be9c: 0x24040037  addiu       $a0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14be98) {
            ctx->pc = 0x14C458u;
            goto label_14c458;
        }
    }
    ctx->pc = 0x14BEA0u;
    // 0x14bea0: 0x10640167  beq         $v1, $a0, . + 4 + (0x167 << 2)
    ctx->pc = 0x14BEA0u;
    {
        const bool branch_taken_0x14bea0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x14bea0) {
            ctx->pc = 0x14C440u;
            goto label_14c440;
        }
    }
    ctx->pc = 0x14BEA8u;
    // 0x14bea8: 0x24040027  addiu       $a0, $zero, 0x27
    ctx->pc = 0x14bea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x14beac: 0x106404f6  beq         $v1, $a0, . + 4 + (0x4F6 << 2)
    ctx->pc = 0x14BEACu;
    {
        const bool branch_taken_0x14beac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x14BEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BEACu;
        // 0x14beb0: 0x24040025  addiu       $a0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14beac) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14BEB4u;
    // 0x14beb4: 0x1064015a  beq         $v1, $a0, . + 4 + (0x15A << 2)
    ctx->pc = 0x14BEB4u;
    {
        const bool branch_taken_0x14beb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x14beb4) {
            ctx->pc = 0x14C420u;
            goto label_14c420;
        }
    }
    ctx->pc = 0x14BEBCu;
    // 0x14bebc: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x14bebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x14bec0: 0x10640155  beq         $v1, $a0, . + 4 + (0x155 << 2)
    ctx->pc = 0x14BEC0u;
    {
        const bool branch_taken_0x14bec0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x14BEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BEC0u;
        // 0x14bec4: 0x24040023  addiu       $a0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bec0) {
            ctx->pc = 0x14C418u;
            goto label_14c418;
        }
    }
    ctx->pc = 0x14BEC8u;
    // 0x14bec8: 0x1064014d  beq         $v1, $a0, . + 4 + (0x14D << 2)
    ctx->pc = 0x14BEC8u;
    {
        const bool branch_taken_0x14bec8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x14bec8) {
            ctx->pc = 0x14C400u;
            goto label_14c400;
        }
    }
    ctx->pc = 0x14BED0u;
    // 0x14bed0: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x14bed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x14bed4: 0x10640144  beq         $v1, $a0, . + 4 + (0x144 << 2)
    ctx->pc = 0x14BED4u;
    {
        const bool branch_taken_0x14bed4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x14BED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BED4u;
        // 0x14bed8: 0x24040021  addiu       $a0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bed4) {
            ctx->pc = 0x14C3E8u;
            goto label_14c3e8;
        }
    }
    ctx->pc = 0x14BEDCu;
    // 0x14bedc: 0x10640140  beq         $v1, $a0, . + 4 + (0x140 << 2)
    ctx->pc = 0x14BEDCu;
    {
        const bool branch_taken_0x14bedc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x14bedc) {
            ctx->pc = 0x14C3E0u;
            goto label_14c3e0;
        }
    }
    ctx->pc = 0x14BEE4u;
    // 0x14bee4: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x14bee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x14bee8: 0x1064013b  beq         $v1, $a0, . + 4 + (0x13B << 2)
    ctx->pc = 0x14BEE8u;
    {
        const bool branch_taken_0x14bee8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x14BEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BEE8u;
        // 0x14beec: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bee8) {
            ctx->pc = 0x14C3D8u;
            goto label_14c3d8;
        }
    }
    ctx->pc = 0x14BEF0u;
    // 0x14bef0: 0x10640133  beq         $v1, $a0, . + 4 + (0x133 << 2)
    ctx->pc = 0x14BEF0u;
    {
        const bool branch_taken_0x14bef0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x14bef0) {
            ctx->pc = 0x14C3C0u;
            goto label_14c3c0;
        }
    }
    ctx->pc = 0x14BEF8u;
    // 0x14bef8: 0x2404001d  addiu       $a0, $zero, 0x1D
    ctx->pc = 0x14bef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x14befc: 0x1064012a  beq         $v1, $a0, . + 4 + (0x12A << 2)
    ctx->pc = 0x14BEFCu;
    {
        const bool branch_taken_0x14befc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x14BF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BEFCu;
        // 0x14bf00: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14befc) {
            ctx->pc = 0x14C3A8u;
            goto label_14c3a8;
        }
    }
    ctx->pc = 0x14BF04u;
    // 0x14bf04: 0x10640120  beq         $v1, $a0, . + 4 + (0x120 << 2)
    ctx->pc = 0x14BF04u;
    {
        const bool branch_taken_0x14bf04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x14bf04) {
            ctx->pc = 0x14C388u;
            goto label_14c388;
        }
    }
    ctx->pc = 0x14BF0Cu;
    // 0x14bf0c: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x14bf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x14bf10: 0x10640111  beq         $v1, $a0, . + 4 + (0x111 << 2)
    ctx->pc = 0x14BF10u;
    {
        const bool branch_taken_0x14bf10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x14BF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BF10u;
        // 0x14bf14: 0x2404002f  addiu       $a0, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bf10) {
            ctx->pc = 0x14C358u;
            goto label_14c358;
        }
    }
    ctx->pc = 0x14BF18u;
    // 0x14bf18: 0x10640109  beq         $v1, $a0, . + 4 + (0x109 << 2)
    ctx->pc = 0x14BF18u;
    {
        const bool branch_taken_0x14bf18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x14bf18) {
            ctx->pc = 0x14C340u;
            goto label_14c340;
        }
    }
    ctx->pc = 0x14BF20u;
    // 0x14bf20: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x14bf20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x14bf24: 0x106400fc  beq         $v1, $a0, . + 4 + (0xFC << 2)
    ctx->pc = 0x14BF24u;
    {
        const bool branch_taken_0x14bf24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x14BF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BF24u;
        // 0x14bf28: 0x24060036  addiu       $a2, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bf24) {
            ctx->pc = 0x14C318u;
            goto label_14c318;
        }
    }
    ctx->pc = 0x14BF2Cu;
    // 0x14bf2c: 0x106600f0  beq         $v1, $a2, . + 4 + (0xF0 << 2)
    ctx->pc = 0x14BF2Cu;
    {
        const bool branch_taken_0x14bf2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x14bf2c) {
            ctx->pc = 0x14C2F0u;
            goto label_14c2f0;
        }
    }
    ctx->pc = 0x14BF34u;
    // 0x14bf34: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x14bf34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x14bf38: 0x106600e3  beq         $v1, $a2, . + 4 + (0xE3 << 2)
    ctx->pc = 0x14BF38u;
    {
        const bool branch_taken_0x14bf38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x14BF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BF38u;
        // 0x14bf3c: 0x24040033  addiu       $a0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bf38) {
            ctx->pc = 0x14C2C8u;
            goto label_14c2c8;
        }
    }
    ctx->pc = 0x14BF40u;
    // 0x14bf40: 0x106400dd  beq         $v1, $a0, . + 4 + (0xDD << 2)
    ctx->pc = 0x14BF40u;
    {
        const bool branch_taken_0x14bf40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x14bf40) {
            ctx->pc = 0x14C2B8u;
            goto label_14c2b8;
        }
    }
    ctx->pc = 0x14BF48u;
    // 0x14bf48: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x14bf48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x14bf4c: 0x106400d4  beq         $v1, $a0, . + 4 + (0xD4 << 2)
    ctx->pc = 0x14BF4Cu;
    {
        const bool branch_taken_0x14bf4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x14BF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BF4Cu;
        // 0x14bf50: 0x24040031  addiu       $a0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bf4c) {
            ctx->pc = 0x14C2A0u;
            goto label_14c2a0;
        }
    }
    ctx->pc = 0x14BF54u;
    // 0x14bf54: 0x106400cc  beq         $v1, $a0, . + 4 + (0xCC << 2)
    ctx->pc = 0x14BF54u;
    {
        const bool branch_taken_0x14bf54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x14bf54) {
            ctx->pc = 0x14C288u;
            goto label_14c288;
        }
    }
    ctx->pc = 0x14BF5Cu;
    // 0x14bf5c: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x14bf5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x14bf60: 0x106400c3  beq         $v1, $a0, . + 4 + (0xC3 << 2)
    ctx->pc = 0x14BF60u;
    {
        const bool branch_taken_0x14bf60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x14BF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BF60u;
        // 0x14bf64: 0x24040019  addiu       $a0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bf60) {
            ctx->pc = 0x14C270u;
            goto label_14c270;
        }
    }
    ctx->pc = 0x14BF68u;
    // 0x14bf68: 0x106400b5  beq         $v1, $a0, . + 4 + (0xB5 << 2)
    ctx->pc = 0x14BF68u;
    {
        const bool branch_taken_0x14bf68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x14bf68) {
            ctx->pc = 0x14C240u;
            goto label_14c240;
        }
    }
    ctx->pc = 0x14BF70u;
    // 0x14bf70: 0x24040038  addiu       $a0, $zero, 0x38
    ctx->pc = 0x14bf70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x14bf74: 0x10640084  beq         $v1, $a0, . + 4 + (0x84 << 2)
    ctx->pc = 0x14BF74u;
    {
        const bool branch_taken_0x14bf74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x14BF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BF74u;
        // 0x14bf78: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bf74) {
            ctx->pc = 0x14C188u;
            goto label_14c188;
        }
    }
    ctx->pc = 0x14BF7Cu;
    // 0x14bf7c: 0x1064002a  beq         $v1, $a0, . + 4 + (0x2A << 2)
    ctx->pc = 0x14BF7Cu;
    {
        const bool branch_taken_0x14bf7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x14bf7c) {
            ctx->pc = 0x14C028u;
            goto label_14c028;
        }
    }
    ctx->pc = 0x14BF84u;
    // 0x14bf84: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x14bf84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x14bf88: 0x106404bf  beq         $v1, $a0, . + 4 + (0x4BF << 2)
    ctx->pc = 0x14BF88u;
    {
        const bool branch_taken_0x14bf88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x14BF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BF88u;
        // 0x14bf8c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bf88) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14BF90u;
    // 0x14bf90: 0x1064001d  beq         $v1, $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x14BF90u;
    {
        const bool branch_taken_0x14bf90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x14bf90) {
            ctx->pc = 0x14C008u;
            goto label_14c008;
        }
    }
    ctx->pc = 0x14BF98u;
    // 0x14bf98: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x14bf98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14bf9c: 0x10640010  beq         $v1, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x14BF9Cu;
    {
        const bool branch_taken_0x14bf9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x14BFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BF9Cu;
        // 0x14bfa0: 0x24040094  addiu       $a0, $zero, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bf9c) {
            ctx->pc = 0x14BFE0u;
            goto label_14bfe0;
        }
    }
    ctx->pc = 0x14BFA4u;
    // 0x14bfa4: 0x106404b8  beq         $v1, $a0, . + 4 + (0x4B8 << 2)
    ctx->pc = 0x14BFA4u;
    {
        const bool branch_taken_0x14bfa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x14bfa4) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14BFACu;
    // 0x14bfac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14bfacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14bfb0: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14BFB0u;
    {
        const bool branch_taken_0x14bfb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x14BFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BFB0u;
        // 0x14bfb4: 0x240400ff  addiu       $a0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bfb0) {
            ctx->pc = 0x14BFC8u;
            goto label_14bfc8;
        }
    }
    ctx->pc = 0x14BFB8u;
    // 0x14bfb8: 0x106404b3  beq         $v1, $a0, . + 4 + (0x4B3 << 2)
    ctx->pc = 0x14BFB8u;
    {
        const bool branch_taken_0x14bfb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x14bfb8) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14BFC0u;
    // 0x14bfc0: 0x100004b1  b           . + 4 + (0x4B1 << 2)
    ctx->pc = 0x14BFC0u;
    {
        const bool branch_taken_0x14bfc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bfc0) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14BFC8u;
label_14bfc8:
    // 0x14bfc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14bfc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bfcc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14bfccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bfd0: 0xc0535ac  jal         func_14D6B0
    ctx->pc = 0x14BFD0u;
    SET_GPR_U32(ctx, 31, 0x14BFD8u);
    ctx->pc = 0x14BFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BFD0u;
    // 0x14bfd4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D6B0u, 0x14BFD0u, 0x14BFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BFD8u;
label_14bfd8:
    // 0x14bfd8: 0x100004ab  b           . + 4 + (0x4AB << 2)
    ctx->pc = 0x14BFD8u;
    {
        const bool branch_taken_0x14bfd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bfd8) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14BFE0u;
label_14bfe0:
    // 0x14bfe0: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x14bfe0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x14bfe4: 0x3c0400b5  lui         $a0, 0xB5
    ctx->pc = 0x14bfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)181 << 16));
    // 0x14bfe8: 0xc049522  jal         func_125488
    ctx->pc = 0x14BFE8u;
    SET_GPR_U32(ctx, 31, 0x14BFF0u);
    ctx->pc = 0x14BFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BFE8u;
    // 0x14bfec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x14BFE8u, 0x14BFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BFF0u;
label_14bff0:
    // 0x14bff0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x14bff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bff4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14bff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bff8: 0xc0536fc  jal         func_14DBF0
    ctx->pc = 0x14BFF8u;
    SET_GPR_U32(ctx, 31, 0x14C000u);
    ctx->pc = 0x14BFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BFF8u;
    // 0x14bffc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DBF0u, 0x14BFF8u, 0x14C000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C000u;
label_14c000:
    // 0x14c000: 0x100004a1  b           . + 4 + (0x4A1 << 2)
    ctx->pc = 0x14C000u;
    {
        const bool branch_taken_0x14c000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c000) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14C008u;
label_14c008:
    // 0x14c008: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x14c008u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x14c00c: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x14c00cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x14c010: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14c010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c014: 0xc0ea954  jal         func_3AA550
    ctx->pc = 0x14C014u;
    SET_GPR_U32(ctx, 31, 0x14C01Cu);
    ctx->pc = 0x14C018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C014u;
    // 0x14c018: 0x24843340  addiu       $a0, $a0, 0x3340 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AA550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA550u, 0x14C014u, 0x14C01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C01Cu;
label_14c01c:
    // 0x14c01c: 0x1000049a  b           . + 4 + (0x49A << 2)
    ctx->pc = 0x14C01Cu;
    {
        const bool branch_taken_0x14c01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c01c) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14C024u;
    // 0x14c024: 0x0  nop
    ctx->pc = 0x14c024u;
    // NOP
label_14c028:
    // 0x14c028: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x14c028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x14c02c: 0x902495a1  lbu         $a0, -0x6A5F($at)
    ctx->pc = 0x14c02cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x8095A1u));
    // 0x14c030: 0x240322b0  addiu       $v1, $zero, 0x22B0
    ctx->pc = 0x14c030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8880));
    // 0x14c034: 0x3c020081  lui         $v0, 0x81
    ctx->pc = 0x14c034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)129 << 16));
    // 0x14c038: 0x244295a0  addiu       $v0, $v0, -0x6A60
    ctx->pc = 0x14c038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940064));
    // 0x14c03c: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x14c03cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x14c040: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14c040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14c044: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x14C044u;
    {
        const bool branch_taken_0x14c044 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C044u;
        // 0x14c048: 0x24540020  addiu       $s4, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c044) {
            ctx->pc = 0x14C070u;
            goto label_14c070;
        }
    }
    ctx->pc = 0x14C04Cu;
    // 0x14c04c: 0x41200  sll         $v0, $a0, 8
    ctx->pc = 0x14c04cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x14c050: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x14c050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14c054: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x14c054u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x14c058: 0x2446000d  addiu       $a2, $v0, 0xD
    ctx->pc = 0x14c058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 13));
    // 0x14c05c: 0xc04cd28  jal         func_1334A0
    ctx->pc = 0x14C05Cu;
    SET_GPR_U32(ctx, 31, 0x14C064u);
    ctx->pc = 0x14C060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C05Cu;
    // 0x14c060: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A0u, 0x14C05Cu, 0x14C064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C064u;
label_14c064:
    // 0x14c064: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x14C064u;
    {
        const bool branch_taken_0x14c064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C064u;
        // 0x14c068: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c064) {
            ctx->pc = 0x14C090u;
            goto label_14c090;
        }
    }
    ctx->pc = 0x14C06Cu;
    // 0x14c06c: 0x0  nop
    ctx->pc = 0x14c06cu;
    // NOP
label_14c070:
    // 0x14c070: 0x41200  sll         $v0, $a0, 8
    ctx->pc = 0x14c070u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x14c074: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x14c074u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x14c078: 0x2446000d  addiu       $a2, $v0, 0xD
    ctx->pc = 0x14c078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 13));
    // 0x14c07c: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x14c07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x14c080: 0xc04cd28  jal         func_1334A0
    ctx->pc = 0x14C080u;
    SET_GPR_U32(ctx, 31, 0x14C088u);
    ctx->pc = 0x14C084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C080u;
    // 0x14c084: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A0u, 0x14C080u, 0x14C088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C088u;
label_14c088:
    // 0x14c088: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x14c088u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c08c: 0x0  nop
    ctx->pc = 0x14c08cu;
    // NOP
label_14c090:
    // 0x14c090: 0x24040170  addiu       $a0, $zero, 0x170
    ctx->pc = 0x14c090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 368));
    // 0x14c094: 0xc05e664  jal         func_179990
    ctx->pc = 0x14C094u;
    SET_GPR_U32(ctx, 31, 0x14C09Cu);
    ctx->pc = 0x14C098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C094u;
    // 0x14c098: 0x26850010  addiu       $a1, $s4, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179990u, 0x14C094u, 0x14C09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C09Cu;
label_14c09c:
    // 0x14c09c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14C09Cu;
    {
        const bool branch_taken_0x14c09c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C09Cu;
        // 0x14c0a0: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c09c) {
            ctx->pc = 0x14C0B8u;
            goto label_14c0b8;
        }
    }
    ctx->pc = 0x14C0A4u;
    // 0x14c0a4: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x14c0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x14c0a8: 0x24845fd0  addiu       $a0, $a0, 0x5FD0
    ctx->pc = 0x14c0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24528));
    // 0x14c0ac: 0x24635fe0  addiu       $v1, $v1, 0x5FE0
    ctx->pc = 0x14c0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24544));
    // 0x14c0b0: 0xac440144  sw          $a0, 0x144($v0)
    ctx->pc = 0x14c0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 324), GPR_U32(ctx, 4));
    // 0x14c0b4: 0xac430144  sw          $v1, 0x144($v0)
    ctx->pc = 0x14c0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 324), GPR_U32(ctx, 3));
label_14c0b8:
    // 0x14c0b8: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x14c0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x14c0bc: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x14c0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x14c0c0: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x14c0c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c0c4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14C0C4u;
    {
        const bool branch_taken_0x14c0c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C0C4u;
        // 0x14c0c8: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c0c4) {
            ctx->pc = 0x14C0D8u;
            goto label_14c0d8;
        }
    }
    ctx->pc = 0x14C0CCu;
    // 0x14c0cc: 0xc0a81f8  jal         func_2A07E0
    ctx->pc = 0x14C0CCu;
    SET_GPR_U32(ctx, 31, 0x14C0D4u);
    ctx->pc = 0x14C0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C0CCu;
    // 0x14c0d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A07E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A07E0u, 0x14C0CCu, 0x14C0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C0D4u;
label_14c0d4:
    // 0x14c0d4: 0x0  nop
    ctx->pc = 0x14c0d4u;
    // NOP
label_14c0d8:
    // 0x14c0d8: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x14c0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x14c0dc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14c0dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c0e0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x14c0e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c0e4: 0xc059d14  jal         func_167450
    ctx->pc = 0x14C0E4u;
    SET_GPR_U32(ctx, 31, 0x14C0ECu);
    ctx->pc = 0x14C0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C0E4u;
    // 0x14c0e8: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167450u, 0x14C0E4u, 0x14C0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C0ECu;
label_14c0ec:
    // 0x14c0ec: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x14c0ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c0f0: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x14c0f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x14c0f4: 0x902295a1  lbu         $v0, -0x6A5F($at)
    ctx->pc = 0x14c0f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x8095A1u));
    // 0x14c0f8: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x14C0F8u;
    {
        const bool branch_taken_0x14c0f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14C0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C0F8u;
        // 0x14c0fc: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c0f8) {
            ctx->pc = 0x14C148u;
            goto label_14c148;
        }
    }
    ctx->pc = 0x14C100u;
    // 0x14c100: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14c100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c104: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x14c104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
    // 0x14c108: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x14c108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x14c10c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x14c10cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x14c110: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x14c110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x14c114: 0xac23cebc  sw          $v1, -0x3144($at)
    ctx->pc = 0x14c114u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 3));
    // 0x14c118: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x14c118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x14c11c: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x14c11cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x14c120: 0x8c630078  lw          $v1, 0x78($v1)
    ctx->pc = 0x14c120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x14c124: 0x90630005  lbu         $v1, 0x5($v1)
    ctx->pc = 0x14c124u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5)));
    // 0x14c128: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x14c128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x14c12c: 0xa0236ad1  sb          $v1, 0x6AD1($at)
    ctx->pc = 0x14c12cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7E6AD1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x7E6AD1u, _value); } while (0);
    // 0x14c130: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x14c130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x14c134: 0x90236ad1  lbu         $v1, 0x6AD1($at)
    ctx->pc = 0x14c134u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x7E6AD1u));
    // 0x14c138: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x14c138u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x14c13c: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x14c13cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x14c140: 0xa4226ad2  sh          $v0, 0x6AD2($at)
    ctx->pc = 0x14c140u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7E6AD2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7E6AD2u, _value); } while (0);
    // 0x14c144: 0x0  nop
    ctx->pc = 0x14c144u;
    // NOP
label_14c148:
    // 0x14c148: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x14c148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x14c14c: 0x902295a1  lbu         $v0, -0x6A5F($at)
    ctx->pc = 0x14c14cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x8095A1u));
    // 0x14c150: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x14c150u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x14c154: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14c154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c158: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x14c158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x14c15c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x14c15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x14c160: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x14c160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x14c164: 0xae8221a4  sw          $v0, 0x21A4($s4)
    ctx->pc = 0x14c164u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8612), GPR_U32(ctx, 2));
    // 0x14c168: 0x902295a1  lbu         $v0, -0x6A5F($at)
    ctx->pc = 0x14c168u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x8095A1u));
    // 0x14c16c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14c16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14c170: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x14c170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x14c174: 0xc05e390  jal         func_178E40
    ctx->pc = 0x14C174u;
    SET_GPR_U32(ctx, 31, 0x14C17Cu);
    ctx->pc = 0x14C178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C174u;
    // 0x14c178: 0xa02295a1  sb          $v0, -0x6A5F($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294940065), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178E40u, 0x14C174u, 0x14C17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C17Cu;
label_14c17c:
    // 0x14c17c: 0x10000442  b           . + 4 + (0x442 << 2)
    ctx->pc = 0x14C17Cu;
    {
        const bool branch_taken_0x14c17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c17c) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14C184u;
    // 0x14c184: 0x0  nop
    ctx->pc = 0x14c184u;
    // NOP
label_14c188:
    // 0x14c188: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x14c188u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x14c18c: 0x3c140081  lui         $s4, 0x81
    ctx->pc = 0x14c18cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)129 << 16));
    // 0x14c190: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x14c190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x14c194: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14c194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c198: 0x3406ff05  ori         $a2, $zero, 0xFF05
    ctx->pc = 0x14c198u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65285);
    // 0x14c19c: 0xc04cd28  jal         func_1334A0
    ctx->pc = 0x14C19Cu;
    SET_GPR_U32(ctx, 31, 0x14C1A4u);
    ctx->pc = 0x14C1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C19Cu;
    // 0x14c1a0: 0x2694db20  addiu       $s4, $s4, -0x24E0 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294957856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A0u, 0x14C19Cu, 0x14C1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C1A4u;
label_14c1a4:
    // 0x14c1a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x14c1a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c1a8: 0x12200437  beqz        $s1, . + 4 + (0x437 << 2)
    ctx->pc = 0x14C1A8u;
    {
        const bool branch_taken_0x14c1a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C1A8u;
        // 0x14c1ac: 0x24040170  addiu       $a0, $zero, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c1a8) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14C1B0u;
    // 0x14c1b0: 0xc05e664  jal         func_179990
    ctx->pc = 0x14C1B0u;
    SET_GPR_U32(ctx, 31, 0x14C1B8u);
    ctx->pc = 0x14C1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C1B0u;
    // 0x14c1b4: 0x26850010  addiu       $a1, $s4, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179990u, 0x14C1B0u, 0x14C1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C1B8u;
label_14c1b8:
    // 0x14c1b8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14C1B8u;
    {
        const bool branch_taken_0x14c1b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C1B8u;
        // 0x14c1bc: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c1b8) {
            ctx->pc = 0x14C1D8u;
            goto label_14c1d8;
        }
    }
    ctx->pc = 0x14C1C0u;
    // 0x14c1c0: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x14c1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x14c1c4: 0x24845fd0  addiu       $a0, $a0, 0x5FD0
    ctx->pc = 0x14c1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24528));
    // 0x14c1c8: 0x24635fe0  addiu       $v1, $v1, 0x5FE0
    ctx->pc = 0x14c1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24544));
    // 0x14c1cc: 0xac440144  sw          $a0, 0x144($v0)
    ctx->pc = 0x14c1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 324), GPR_U32(ctx, 4));
    // 0x14c1d0: 0xac430144  sw          $v1, 0x144($v0)
    ctx->pc = 0x14c1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 324), GPR_U32(ctx, 3));
    // 0x14c1d4: 0x0  nop
    ctx->pc = 0x14c1d4u;
    // NOP
label_14c1d8:
    // 0x14c1d8: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x14c1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x14c1dc: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x14c1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x14c1e0: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x14c1e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c1e4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14C1E4u;
    {
        const bool branch_taken_0x14c1e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C1E4u;
        // 0x14c1e8: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c1e4) {
            ctx->pc = 0x14C1F8u;
            goto label_14c1f8;
        }
    }
    ctx->pc = 0x14C1ECu;
    // 0x14c1ec: 0xc0a81f8  jal         func_2A07E0
    ctx->pc = 0x14C1ECu;
    SET_GPR_U32(ctx, 31, 0x14C1F4u);
    ctx->pc = 0x14C1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C1ECu;
    // 0x14c1f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A07E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A07E0u, 0x14C1ECu, 0x14C1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C1F4u;
label_14c1f4:
    // 0x14c1f4: 0x0  nop
    ctx->pc = 0x14c1f4u;
    // NOP
label_14c1f8:
    // 0x14c1f8: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x14c1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x14c1fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14c1fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c200: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x14c200u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c204: 0xc059d14  jal         func_167450
    ctx->pc = 0x14C204u;
    SET_GPR_U32(ctx, 31, 0x14C20Cu);
    ctx->pc = 0x14C208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C204u;
    // 0x14c208: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167450u, 0x14C204u, 0x14C20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C20Cu;
label_14c20c:
    // 0x14c20c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x14c20cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c210: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x14c210u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x14c214: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14c214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14c218: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14c218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c21c: 0xae8221a4  sw          $v0, 0x21A4($s4)
    ctx->pc = 0x14c21cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8612), GPR_U32(ctx, 2));
    // 0x14c220: 0xc05e390  jal         func_178E40
    ctx->pc = 0x14C220u;
    SET_GPR_U32(ctx, 31, 0x14C228u);
    ctx->pc = 0x14C224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C220u;
    // 0x14c224: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178E40u, 0x14C220u, 0x14C228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C228u;
label_14c228:
    // 0x14c228: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x14c228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x14c22c: 0x8423fdd8  lh          $v1, -0x228($at)
    ctx->pc = 0x14c22cu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x80FDD8u));
    // 0x14c230: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14c230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14c234: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x14c234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x14c238: 0x10000413  b           . + 4 + (0x413 << 2)
    ctx->pc = 0x14C238u;
    {
        const bool branch_taken_0x14c238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C238u;
        // 0x14c23c: 0xa423fdd8  sh          $v1, -0x228($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294966744), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c238) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14C240u;
label_14c240:
    // 0x14c240: 0xae93002c  sw          $s3, 0x2C($s4)
    ctx->pc = 0x14c240u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 19));
    // 0x14c244: 0x8e86002c  lw          $a2, 0x2C($s4)
    ctx->pc = 0x14c244u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x14c248: 0x3c040081  lui         $a0, 0x81
    ctx->pc = 0x14c248u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
    // 0x14c24c: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x14c24cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x14c250: 0x2484fde0  addiu       $a0, $a0, -0x220
    ctx->pc = 0x14c250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966752));
    // 0x14c254: 0xc0641f8  jal         func_1907E0
    ctx->pc = 0x14C254u;
    SET_GPR_U32(ctx, 31, 0x14C25Cu);
    ctx->pc = 0x14C258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C254u;
    // 0x14c258: 0x24a56ca0  addiu       $a1, $a1, 0x6CA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1907E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1907E0u, 0x14C254u, 0x14C25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C25Cu;
label_14c25c:
    // 0x14c25c: 0x3c040081  lui         $a0, 0x81
    ctx->pc = 0x14c25cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
    // 0x14c260: 0xc064324  jal         func_190C90
    ctx->pc = 0x14C260u;
    SET_GPR_U32(ctx, 31, 0x14C268u);
    ctx->pc = 0x14C264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C260u;
    // 0x14c264: 0x2484fde0  addiu       $a0, $a0, -0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190C90u, 0x14C260u, 0x14C268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C268u;
label_14c268:
    // 0x14c268: 0x10000407  b           . + 4 + (0x407 << 2)
    ctx->pc = 0x14C268u;
    {
        const bool branch_taken_0x14c268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c268) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14C270u;
label_14c270:
    // 0x14c270: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x14c270u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x14c274: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14c274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c278: 0xc0c2a4c  jal         func_30A930
    ctx->pc = 0x14C278u;
    SET_GPR_U32(ctx, 31, 0x14C280u);
    ctx->pc = 0x14C27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C278u;
    // 0x14c27c: 0x2484ff20  addiu       $a0, $a0, -0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A930u, 0x14C278u, 0x14C280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C280u;
label_14c280:
    // 0x14c280: 0x10000401  b           . + 4 + (0x401 << 2)
    ctx->pc = 0x14C280u;
    {
        const bool branch_taken_0x14c280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c280) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14C288u;
label_14c288:
    // 0x14c288: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x14c288u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x14c28c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14c28cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c290: 0xc0c2ae8  jal         func_30ABA0
    ctx->pc = 0x14C290u;
    SET_GPR_U32(ctx, 31, 0x14C298u);
    ctx->pc = 0x14C294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C290u;
    // 0x14c294: 0x2484ff20  addiu       $a0, $a0, -0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30ABA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30ABA0u, 0x14C290u, 0x14C298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C298u;
label_14c298:
    // 0x14c298: 0x100003fb  b           . + 4 + (0x3FB << 2)
    ctx->pc = 0x14C298u;
    {
        const bool branch_taken_0x14c298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c298) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14C2A0u;
label_14c2a0:
    // 0x14c2a0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14c2a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c2a4: 0xc0c300c  jal         func_30C030
    ctx->pc = 0x14C2A4u;
    SET_GPR_U32(ctx, 31, 0x14C2ACu);
    ctx->pc = 0x14C2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C2A4u;
    // 0x14c2a8: 0x27848b00  addiu       $a0, $gp, -0x7500 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C030u, 0x14C2A4u, 0x14C2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C2ACu;
label_14c2ac:
    // 0x14c2ac: 0x100003f6  b           . + 4 + (0x3F6 << 2)
    ctx->pc = 0x14C2ACu;
    {
        const bool branch_taken_0x14c2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c2ac) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14C2B4u;
    // 0x14c2b4: 0x0  nop
    ctx->pc = 0x14c2b4u;
    // NOP
label_14c2b8:
    // 0x14c2b8: 0xc0c74d8  jal         func_31D360
    ctx->pc = 0x14C2B8u;
    SET_GPR_U32(ctx, 31, 0x14C2C0u);
    ctx->pc = 0x14C2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C2B8u;
    // 0x14c2bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D360u, 0x14C2B8u, 0x14C2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C2C0u;
label_14c2c0:
    // 0x14c2c0: 0x100003f1  b           . + 4 + (0x3F1 << 2)
    ctx->pc = 0x14C2C0u;
    {
        const bool branch_taken_0x14c2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c2c0) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14C2C8u;
label_14c2c8:
    // 0x14c2c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14c2c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c2cc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14c2ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c2d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x14c2d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c2d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x14c2d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c2d8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x14c2d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c2dc: 0xc0a2964  jal         func_28A590
    ctx->pc = 0x14C2DCu;
    SET_GPR_U32(ctx, 31, 0x14C2E4u);
    ctx->pc = 0x14C2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C2DCu;
    // 0x14c2e0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A590u, 0x14C2DCu, 0x14C2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C2E4u;
label_14c2e4:
    // 0x14c2e4: 0x100003e8  b           . + 4 + (0x3E8 << 2)
    ctx->pc = 0x14C2E4u;
    {
        const bool branch_taken_0x14c2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c2e4) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14C2ECu;
    // 0x14c2ec: 0x0  nop
    ctx->pc = 0x14c2ecu;
    // NOP
label_14c2f0:
    // 0x14c2f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14c2f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c2f4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14c2f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c2f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x14c2f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c2fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x14c2fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c300: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x14c300u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c304: 0xc0a2964  jal         func_28A590
    ctx->pc = 0x14C304u;
    SET_GPR_U32(ctx, 31, 0x14C30Cu);
    ctx->pc = 0x14C308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C304u;
    // 0x14c308: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A590u, 0x14C304u, 0x14C30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C30Cu;
label_14c30c:
    // 0x14c30c: 0x100003de  b           . + 4 + (0x3DE << 2)
    ctx->pc = 0x14C30Cu;
    {
        const bool branch_taken_0x14c30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c30c) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14C314u;
    // 0x14c314: 0x0  nop
    ctx->pc = 0x14c314u;
    // NOP
label_14c318:
    // 0x14c318: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x14c318u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x14c31c: 0xc05161c  jal         func_145870
    ctx->pc = 0x14C31Cu;
    SET_GPR_U32(ctx, 31, 0x14C324u);
    ctx->pc = 0x14C320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C31Cu;
    // 0x14c320: 0x248487d0  addiu       $a0, $a0, -0x7830 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145870u, 0x14C31Cu, 0x14C324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C324u;
label_14c324:
    // 0x14c324: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x14c324u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x14c328: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14c328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c32c: 0xc05162c  jal         func_1458B0
    ctx->pc = 0x14C32Cu;
    SET_GPR_U32(ctx, 31, 0x14C334u);
    ctx->pc = 0x14C330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C32Cu;
    // 0x14c330: 0x248487d0  addiu       $a0, $a0, -0x7830 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1458B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1458B0u, 0x14C32Cu, 0x14C334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C334u;
label_14c334:
    // 0x14c334: 0x100003d4  b           . + 4 + (0x3D4 << 2)
    ctx->pc = 0x14C334u;
    {
        const bool branch_taken_0x14c334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c334) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14C33Cu;
    // 0x14c33c: 0x0  nop
    ctx->pc = 0x14c33cu;
    // NOP
label_14c340:
    // 0x14c340: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x14c340u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x14c344: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14c344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c348: 0xc0c0d38  jal         func_3034E0
    ctx->pc = 0x14C348u;
    SET_GPR_U32(ctx, 31, 0x14C350u);
    ctx->pc = 0x14C34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C348u;
    // 0x14c34c: 0x2484e080  addiu       $a0, $a0, -0x1F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3034E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3034E0u, 0x14C348u, 0x14C350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C350u;
label_14c350:
    // 0x14c350: 0x100003cd  b           . + 4 + (0x3CD << 2)
    ctx->pc = 0x14C350u;
    {
        const bool branch_taken_0x14c350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c350) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14C358u;
label_14c358:
    // 0x14c358: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x14c358u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x14c35c: 0x24846710  addiu       $a0, $a0, 0x6710
    ctx->pc = 0x14c35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26384));
    // 0x14c360: 0xc04dfd4  jal         func_137F50
    ctx->pc = 0x14C360u;
    SET_GPR_U32(ctx, 31, 0x14C368u);
    ctx->pc = 0x14C364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C360u;
    // 0x14c364: 0xae930030  sw          $s3, 0x30($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 48), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137F50u, 0x14C360u, 0x14C368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C368u;
label_14c368:
    // 0x14c368: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x14c368u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x14c36c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x14c36cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x14c370: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x14c370u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x14c374: 0xc04e360  jal         func_138D80
    ctx->pc = 0x14C374u;
    SET_GPR_U32(ctx, 31, 0x14C37Cu);
    ctx->pc = 0x14C378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C374u;
    // 0x14c378: 0x24846710  addiu       $a0, $a0, 0x6710 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138D80u, 0x14C374u, 0x14C37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C37Cu;
label_14c37c:
    // 0x14c37c: 0x100003c2  b           . + 4 + (0x3C2 << 2)
    ctx->pc = 0x14C37Cu;
    {
        const bool branch_taken_0x14c37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c37c) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14C384u;
    // 0x14c384: 0x0  nop
    ctx->pc = 0x14c384u;
    // NOP
label_14c388:
    // 0x14c388: 0xae930034  sw          $s3, 0x34($s4)
    ctx->pc = 0x14c388u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 19));
    // 0x14c38c: 0x8e850034  lw          $a1, 0x34($s4)
    ctx->pc = 0x14c38cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x14c390: 0x3c040081  lui         $a0, 0x81
    ctx->pc = 0x14c390u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
    // 0x14c394: 0xc0569cc  jal         func_15A730
    ctx->pc = 0x14C394u;
    SET_GPR_U32(ctx, 31, 0x14C39Cu);
    ctx->pc = 0x14C398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C394u;
    // 0x14c398: 0x24840fe0  addiu       $a0, $a0, 0xFE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A730u, 0x14C394u, 0x14C39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C39Cu;
label_14c39c:
    // 0x14c39c: 0x100003ba  b           . + 4 + (0x3BA << 2)
    ctx->pc = 0x14C39Cu;
    {
        const bool branch_taken_0x14c39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c39c) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14C3A4u;
    // 0x14c3a4: 0x0  nop
    ctx->pc = 0x14c3a4u;
    // NOP
label_14c3a8:
    // 0x14c3a8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14c3a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c3ac: 0xc0691bc  jal         func_1A46F0
    ctx->pc = 0x14C3ACu;
    SET_GPR_U32(ctx, 31, 0x14C3B4u);
    ctx->pc = 0x14C3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C3ACu;
    // 0x14c3b0: 0x278487c0  addiu       $a0, $gp, -0x7840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A46F0u, 0x14C3ACu, 0x14C3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C3B4u;
label_14c3b4:
    // 0x14c3b4: 0x100003b4  b           . + 4 + (0x3B4 << 2)
    ctx->pc = 0x14C3B4u;
    {
        const bool branch_taken_0x14c3b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c3b4) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14C3BCu;
    // 0x14c3bc: 0x0  nop
    ctx->pc = 0x14c3bcu;
    // NOP
label_14c3c0:
    // 0x14c3c0: 0xae93003c  sw          $s3, 0x3C($s4)
    ctx->pc = 0x14c3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 19));
    // 0x14c3c4: 0xc05a380  jal         func_168E00
    ctx->pc = 0x14C3C4u;
    SET_GPR_U32(ctx, 31, 0x14C3CCu);
    ctx->pc = 0x14C3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C3C4u;
    // 0x14c3c8: 0x8e84003c  lw          $a0, 0x3C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168E00u, 0x14C3C4u, 0x14C3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C3CCu;
label_14c3cc:
    // 0x14c3cc: 0x100003ae  b           . + 4 + (0x3AE << 2)
    ctx->pc = 0x14C3CCu;
    {
        const bool branch_taken_0x14c3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c3cc) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14C3D4u;
    // 0x14c3d4: 0x0  nop
    ctx->pc = 0x14c3d4u;
    // NOP
label_14c3d8:
    // 0x14c3d8: 0x100003ab  b           . + 4 + (0x3AB << 2)
    ctx->pc = 0x14C3D8u;
    {
        const bool branch_taken_0x14c3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C3D8u;
        // 0x14c3dc: 0xae930048  sw          $s3, 0x48($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 72), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c3d8) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14C3E0u;
label_14c3e0:
    // 0x14c3e0: 0x100003a9  b           . + 4 + (0x3A9 << 2)
    ctx->pc = 0x14C3E0u;
    {
        const bool branch_taken_0x14c3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C3E0u;
        // 0x14c3e4: 0xae93004c  sw          $s3, 0x4C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c3e0) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14C3E8u;
label_14c3e8:
    // 0x14c3e8: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x14c3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x14c3ec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14c3ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c3f0: 0xc05d634  jal         func_1758D0
    ctx->pc = 0x14C3F0u;
    SET_GPR_U32(ctx, 31, 0x14C3F8u);
    ctx->pc = 0x14C3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C3F0u;
    // 0x14c3f4: 0x24846690  addiu       $a0, $a0, 0x6690 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1758D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1758D0u, 0x14C3F0u, 0x14C3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C3F8u;
label_14c3f8:
    // 0x14c3f8: 0x100003a3  b           . + 4 + (0x3A3 << 2)
    ctx->pc = 0x14C3F8u;
    {
        const bool branch_taken_0x14c3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c3f8) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14C400u;
label_14c400:
    // 0x14c400: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x14c400u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x14c404: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14c404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c408: 0xc05eddc  jal         func_17B770
    ctx->pc = 0x14C408u;
    SET_GPR_U32(ctx, 31, 0x14C410u);
    ctx->pc = 0x14C40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C408u;
    // 0x14c40c: 0x2484d200  addiu       $a0, $a0, -0x2E00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B770u, 0x14C408u, 0x14C410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C410u;
label_14c410:
    // 0x14c410: 0x1000039d  b           . + 4 + (0x39D << 2)
    ctx->pc = 0x14C410u;
    {
        const bool branch_taken_0x14c410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c410) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14C418u;
label_14c418:
    // 0x14c418: 0x1000039b  b           . + 4 + (0x39B << 2)
    ctx->pc = 0x14C418u;
    {
        const bool branch_taken_0x14c418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C418u;
        // 0x14c41c: 0xae930040  sw          $s3, 0x40($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 64), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c418) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14C420u;
label_14c420:
    // 0x14c420: 0xae930038  sw          $s3, 0x38($s4)
    ctx->pc = 0x14c420u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 56), GPR_U32(ctx, 19));
    // 0x14c424: 0x8e850038  lw          $a1, 0x38($s4)
    ctx->pc = 0x14c424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x14c428: 0x3c040081  lui         $a0, 0x81
    ctx->pc = 0x14c428u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
    // 0x14c42c: 0xc0569d8  jal         func_15A760
    ctx->pc = 0x14C42Cu;
    SET_GPR_U32(ctx, 31, 0x14C434u);
    ctx->pc = 0x14C430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C42Cu;
    // 0x14c430: 0x24840fe0  addiu       $a0, $a0, 0xFE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A760u, 0x14C42Cu, 0x14C434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C434u;
label_14c434:
    // 0x14c434: 0x10000394  b           . + 4 + (0x394 << 2)
    ctx->pc = 0x14C434u;
    {
        const bool branch_taken_0x14c434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c434) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14C43Cu;
    // 0x14c43c: 0x0  nop
    ctx->pc = 0x14c43cu;
    // NOP
label_14c440:
    // 0x14c440: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x14c440u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x14c444: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14c444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c448: 0xc0f0138  jal         func_3C04E0
    ctx->pc = 0x14C448u;
    SET_GPR_U32(ctx, 31, 0x14C450u);
    ctx->pc = 0x14C44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C448u;
    // 0x14c44c: 0x2484fee0  addiu       $a0, $a0, -0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C04E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C04E0u, 0x14C448u, 0x14C450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C450u;
label_14c450:
    // 0x14c450: 0x1000038d  b           . + 4 + (0x38D << 2)
    ctx->pc = 0x14C450u;
    {
        const bool branch_taken_0x14c450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c450) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14C458u;
label_14c458:
    // 0x14c458: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x14c458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c45c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14c45cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c460: 0xc0536fc  jal         func_14DBF0
    ctx->pc = 0x14C460u;
    SET_GPR_U32(ctx, 31, 0x14C468u);
    ctx->pc = 0x14C464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C460u;
    // 0x14c464: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DBF0u, 0x14C460u, 0x14C468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C468u;
label_14c468:
    // 0x14c468: 0x10000387  b           . + 4 + (0x387 << 2)
    ctx->pc = 0x14C468u;
    {
        const bool branch_taken_0x14c468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c468) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14C470u;
label_14c470:
    // 0x14c470: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x14c470u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x14c474: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x14c474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x14c478: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x14C478u;
    {
        const bool branch_taken_0x14c478 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14c478) {
            ctx->pc = 0x14C4B0u;
            goto label_14c4b0;
        }
    }
    ctx->pc = 0x14C480u;
    // 0x14c480: 0x92420002  lbu         $v0, 0x2($s2)
    ctx->pc = 0x14c480u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x14c484: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x14C484u;
    {
        const bool branch_taken_0x14c484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c484) {
            ctx->pc = 0x14C4B0u;
            goto label_14c4b0;
        }
    }
    ctx->pc = 0x14C48Cu;
    // 0x14c48c: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x14c48cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x14c490: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14C490u;
    {
        const bool branch_taken_0x14c490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14C494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C490u;
        // 0x14c494: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c490) {
            ctx->pc = 0x14C4B0u;
            goto label_14c4b0;
        }
    }
    ctx->pc = 0x14C498u;
    // 0x14c498: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14c498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c49c: 0xc0536fc  jal         func_14DBF0
    ctx->pc = 0x14C49Cu;
    SET_GPR_U32(ctx, 31, 0x14C4A4u);
    ctx->pc = 0x14C4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C49Cu;
    // 0x14c4a0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DBF0u, 0x14C49Cu, 0x14C4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C4A4u;
label_14c4a4:
    // 0x14c4a4: 0x10000378  b           . + 4 + (0x378 << 2)
    ctx->pc = 0x14C4A4u;
    {
        const bool branch_taken_0x14c4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c4a4) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14C4ACu;
    // 0x14c4ac: 0x0  nop
    ctx->pc = 0x14c4acu;
    // NOP
label_14c4b0:
    // 0x14c4b0: 0x92450001  lbu         $a1, 0x1($s2)
    ctx->pc = 0x14c4b0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x14c4b4: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x14c4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x14c4b8: 0x14a2001f  bne         $a1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x14C4B8u;
    {
        const bool branch_taken_0x14c4b8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x14c4b8) {
            ctx->pc = 0x14C538u;
            goto label_14c538;
        }
    }
    ctx->pc = 0x14C4C0u;
    // 0x14c4c0: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x14c4c0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x14c4c4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x14c4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x14c4c8: 0x1482001b  bne         $a0, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x14C4C8u;
    {
        const bool branch_taken_0x14c4c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x14c4c8) {
            ctx->pc = 0x14C538u;
            goto label_14c538;
        }
    }
    ctx->pc = 0x14C4D0u;
    // 0x14c4d0: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x14c4d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x14c4d4: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x14C4D4u;
    {
        const bool branch_taken_0x14c4d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c4d4) {
            ctx->pc = 0x14C538u;
            goto label_14c538;
        }
    }
    ctx->pc = 0x14C4DCu;
    // 0x14c4dc: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x14c4dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x14c4e0: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x14c4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x14c4e4: 0x41200  sll         $v0, $a0, 8
    ctx->pc = 0x14c4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x14c4e8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x14c4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14c4ec: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x14c4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x14c4f0: 0xa28021  addu        $s0, $a1, $v0
    ctx->pc = 0x14c4f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x14c4f4: 0x2484a070  addiu       $a0, $a0, -0x5F90
    ctx->pc = 0x14c4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942832));
    // 0x14c4f8: 0xc049522  jal         func_125488
    ctx->pc = 0x14C4F8u;
    SET_GPR_U32(ctx, 31, 0x14C500u);
    ctx->pc = 0x14C4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C4F8u;
    // 0x14c4fc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x14C4F8u, 0x14C500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C500u;
label_14c500:
    // 0x14c500: 0x3c05007e  lui         $a1, 0x7E
    ctx->pc = 0x14c500u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)126 << 16));
    // 0x14c504: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x14c504u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c508: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x14c508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c50c: 0x24a5a070  addiu       $a1, $a1, -0x5F90
    ctx->pc = 0x14c50cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942832));
    // 0x14c510: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x14c510u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c514: 0xc0534dc  jal         func_14D370
    ctx->pc = 0x14C514u;
    SET_GPR_U32(ctx, 31, 0x14C51Cu);
    ctx->pc = 0x14C518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C514u;
    // 0x14c518: 0x24080006  addiu       $t0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D370u, 0x14C514u, 0x14C51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C51Cu;
label_14c51c:
    // 0x14c51c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x14c51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c520: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14c520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c524: 0xc0536fc  jal         func_14DBF0
    ctx->pc = 0x14C524u;
    SET_GPR_U32(ctx, 31, 0x14C52Cu);
    ctx->pc = 0x14C528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C524u;
    // 0x14c528: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DBF0u, 0x14C524u, 0x14C52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C52Cu;
label_14c52c:
    // 0x14c52c: 0x10000356  b           . + 4 + (0x356 << 2)
    ctx->pc = 0x14C52Cu;
    {
        const bool branch_taken_0x14c52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c52c) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14C534u;
    // 0x14c534: 0x0  nop
    ctx->pc = 0x14c534u;
    // NOP
label_14c538:
    // 0x14c538: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x14c538u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x14c53c: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x14c53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x14c540: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x14C540u;
    {
        const bool branch_taken_0x14c540 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14c540) {
            ctx->pc = 0x14C590u;
            goto label_14c590;
        }
    }
    ctx->pc = 0x14C548u;
    // 0x14c548: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x14c548u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x14c54c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x14c54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x14c550: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x14C550u;
    {
        const bool branch_taken_0x14c550 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14c550) {
            ctx->pc = 0x14C590u;
            goto label_14c590;
        }
    }
    ctx->pc = 0x14C558u;
    // 0x14c558: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x14c558u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x14c55c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x14c55cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x14c560: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x14C560u;
    {
        const bool branch_taken_0x14c560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14C564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C560u;
        // 0x14c564: 0x3c01007e  lui         $at, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c560) {
            ctx->pc = 0x14C590u;
            goto label_14c590;
        }
    }
    ctx->pc = 0x14C568u;
    // 0x14c568: 0x24020e85  addiu       $v0, $zero, 0xE85
    ctx->pc = 0x14c568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3717));
    // 0x14c56c: 0x94236ac4  lhu         $v1, 0x6AC4($at)
    ctx->pc = 0x14c56cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 27332)));
    // 0x14c570: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14C570u;
    {
        const bool branch_taken_0x14c570 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x14C574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C570u;
        // 0x14c574: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c570) {
            ctx->pc = 0x14C590u;
            goto label_14c590;
        }
    }
    ctx->pc = 0x14C578u;
    // 0x14c578: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14c578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c57c: 0xc0536fc  jal         func_14DBF0
    ctx->pc = 0x14C57Cu;
    SET_GPR_U32(ctx, 31, 0x14C584u);
    ctx->pc = 0x14C580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C57Cu;
    // 0x14c580: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DBF0u, 0x14C57Cu, 0x14C584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C584u;
label_14c584:
    // 0x14c584: 0x10000340  b           . + 4 + (0x340 << 2)
    ctx->pc = 0x14C584u;
    {
        const bool branch_taken_0x14c584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c584) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14C58Cu;
    // 0x14c58c: 0x0  nop
    ctx->pc = 0x14c58cu;
    // NOP
label_14c590:
    // 0x14c590: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x14c590u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x14c594: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x14c594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x14c598: 0x14620041  bne         $v1, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x14C598u;
    {
        const bool branch_taken_0x14c598 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14c598) {
            ctx->pc = 0x14C6A0u;
            goto label_14c6a0;
        }
    }
    ctx->pc = 0x14C5A0u;
    // 0x14c5a0: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x14c5a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x14c5a4: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x14c5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x14c5a8: 0x1462003d  bne         $v1, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x14C5A8u;
    {
        const bool branch_taken_0x14c5a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14c5a8) {
            ctx->pc = 0x14C6A0u;
            goto label_14c6a0;
        }
    }
    ctx->pc = 0x14C5B0u;
    // 0x14c5b0: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x14c5b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x14c5b4: 0x2841000e  slti        $at, $v0, 0xE
    ctx->pc = 0x14c5b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x14c5b8: 0x10200033  beqz        $at, . + 4 + (0x33 << 2)
    ctx->pc = 0x14C5B8u;
    {
        const bool branch_taken_0x14c5b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C5B8u;
        // 0x14c5bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c5b8) {
            ctx->pc = 0x14C688u;
            goto label_14c688;
        }
    }
    ctx->pc = 0x14C5C0u;
    // 0x14c5c0: 0xc052ef0  jal         func_14BBC0
    ctx->pc = 0x14C5C0u;
    SET_GPR_U32(ctx, 31, 0x14C5C8u);
    ctx->pc = 0x14BBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BBC0u, 0x14C5C0u, 0x14C5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C5C8u;
label_14c5c8:
    // 0x14c5c8: 0x92430003  lbu         $v1, 0x3($s2)
    ctx->pc = 0x14c5c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x14c5cc: 0x2862000b  slti        $v0, $v1, 0xB
    ctx->pc = 0x14c5ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x14c5d0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x14C5D0u;
    {
        const bool branch_taken_0x14c5d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14C5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C5D0u;
        // 0x14c5d4: 0x33c00  sll         $a3, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c5d0) {
            ctx->pc = 0x14C608u;
            goto label_14c608;
        }
    }
    ctx->pc = 0x14C5D8u;
    // 0x14c5d8: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x14c5d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x14c5dc: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x14c5dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x14c5e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x14c5e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c5e4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14c5e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c5e8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x14c5e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c5ec: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x14c5ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14c5f0: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x14c5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x14c5f4: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x14c5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x14c5f8: 0xc0534dc  jal         func_14D370
    ctx->pc = 0x14C5F8u;
    SET_GPR_U32(ctx, 31, 0x14C600u);
    ctx->pc = 0x14C5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C5F8u;
    // 0x14c5fc: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D370u, 0x14C5F8u, 0x14C600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C600u;
label_14c600:
    // 0x14c600: 0x10000321  b           . + 4 + (0x321 << 2)
    ctx->pc = 0x14C600u;
    {
        const bool branch_taken_0x14c600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c600) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14C608u;
label_14c608:
    // 0x14c608: 0x28620008  slti        $v0, $v1, 0x8
    ctx->pc = 0x14c608u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x14c60c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x14C60Cu;
    {
        const bool branch_taken_0x14c60c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14C610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C60Cu;
        // 0x14c610: 0x33c00  sll         $a3, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c60c) {
            ctx->pc = 0x14C648u;
            goto label_14c648;
        }
    }
    ctx->pc = 0x14C614u;
    // 0x14c614: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x14c614u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x14c618: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x14c618u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x14c61c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x14c61cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c620: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14c620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c624: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x14c624u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c628: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x14c628u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14c62c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x14c62cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x14c630: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x14c630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x14c634: 0xc0534dc  jal         func_14D370
    ctx->pc = 0x14C634u;
    SET_GPR_U32(ctx, 31, 0x14C63Cu);
    ctx->pc = 0x14C638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C634u;
    // 0x14c638: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D370u, 0x14C634u, 0x14C63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C63Cu;
label_14c63c:
    // 0x14c63c: 0x10000312  b           . + 4 + (0x312 << 2)
    ctx->pc = 0x14C63Cu;
    {
        const bool branch_taken_0x14c63c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c63c) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14C644u;
    // 0x14c644: 0x0  nop
    ctx->pc = 0x14c644u;
    // NOP
label_14c648:
    // 0x14c648: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x14c648u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x14c64c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x14C64Cu;
    {
        const bool branch_taken_0x14c64c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14C650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C64Cu;
        // 0x14c650: 0x33c00  sll         $a3, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c64c) {
            ctx->pc = 0x14C6A0u;
            goto label_14c6a0;
        }
    }
    ctx->pc = 0x14C654u;
    // 0x14c654: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x14c654u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x14c658: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x14c658u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x14c65c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x14c65cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c660: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14c660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c664: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x14c664u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c668: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x14c668u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x14c66c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x14c66cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x14c670: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x14c670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x14c674: 0xc0534dc  jal         func_14D370
    ctx->pc = 0x14C674u;
    SET_GPR_U32(ctx, 31, 0x14C67Cu);
    ctx->pc = 0x14C678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C674u;
    // 0x14c678: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D370u, 0x14C674u, 0x14C67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C67Cu;
label_14c67c:
    // 0x14c67c: 0x10000302  b           . + 4 + (0x302 << 2)
    ctx->pc = 0x14C67Cu;
    {
        const bool branch_taken_0x14c67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c67c) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14C684u;
    // 0x14c684: 0x0  nop
    ctx->pc = 0x14c684u;
    // NOP
label_14c688:
    // 0x14c688: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x14c688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c68c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14c68cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c690: 0xc0536fc  jal         func_14DBF0
    ctx->pc = 0x14C690u;
    SET_GPR_U32(ctx, 31, 0x14C698u);
    ctx->pc = 0x14C694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C690u;
    // 0x14c694: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DBF0u, 0x14C690u, 0x14C698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C698u;
label_14c698:
    // 0x14c698: 0x100002fb  b           . + 4 + (0x2FB << 2)
    ctx->pc = 0x14C698u;
    {
        const bool branch_taken_0x14c698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c698) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14C6A0u;
label_14c6a0:
    // 0x14c6a0: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x14c6a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x14c6a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14c6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c6a8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14C6A8u;
    {
        const bool branch_taken_0x14c6a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14C6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C6A8u;
        // 0x14c6ac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c6a8) {
            ctx->pc = 0x14C6B8u;
            goto label_14c6b8;
        }
    }
    ctx->pc = 0x14C6B0u;
    // 0x14c6b0: 0x14620023  bne         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x14C6B0u;
    {
        const bool branch_taken_0x14c6b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14c6b0) {
            ctx->pc = 0x14C740u;
            goto label_14c740;
        }
    }
    ctx->pc = 0x14C6B8u;
label_14c6b8:
    // 0x14c6b8: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x14c6b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x14c6bc: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x14c6bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14c6c0: 0x1448001f  bne         $v0, $t0, . + 4 + (0x1F << 2)
    ctx->pc = 0x14C6C0u;
    {
        const bool branch_taken_0x14c6c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x14c6c0) {
            ctx->pc = 0x14C740u;
            goto label_14c740;
        }
    }
    ctx->pc = 0x14C6C8u;
    // 0x14c6c8: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x14c6c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x14c6cc: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x14c6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x14c6d0: 0x244211b0  addiu       $v0, $v0, 0x11B0
    ctx->pc = 0x14c6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4528));
    // 0x14c6d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14c6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14c6d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14c6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14c6dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14c6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14c6e0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x14C6E0u;
    {
        const bool branch_taken_0x14c6e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c6e0) {
            ctx->pc = 0x14C740u;
            goto label_14c740;
        }
    }
    ctx->pc = 0x14C6E8u;
    // 0x14c6e8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x14c6e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14c6ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x14c6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x14c6f0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x14C6F0u;
    {
        const bool branch_taken_0x14c6f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C6F0u;
        // 0x14c6f4: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c6f0) {
            ctx->pc = 0x14C740u;
            goto label_14c740;
        }
    }
    ctx->pc = 0x14C6F8u;
    // 0x14c6f8: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x14c6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x14c6fc: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x14c6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
    // 0x14c700: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x14c700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c704: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14c704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c708: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x14c708u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c70c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x14c70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14c710: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x14c710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x14c714: 0xac22ceb8  sw          $v0, -0x3148($at)
    ctx->pc = 0x14c714u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x14c718: 0x92470003  lbu         $a3, 0x3($s2)
    ctx->pc = 0x14c718u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x14c71c: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x14c71cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x14c720: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x14c720u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x14c724: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x14c724u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x14c728: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x14c728u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x14c72c: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x14c72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x14c730: 0xc0534dc  jal         func_14D370
    ctx->pc = 0x14C730u;
    SET_GPR_U32(ctx, 31, 0x14C738u);
    ctx->pc = 0x14C734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C730u;
    // 0x14c734: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D370u, 0x14C730u, 0x14C738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C738u;
label_14c738:
    // 0x14c738: 0x100002d3  b           . + 4 + (0x2D3 << 2)
    ctx->pc = 0x14C738u;
    {
        const bool branch_taken_0x14c738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c738) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14C740u;
label_14c740:
    // 0x14c740: 0x92470001  lbu         $a3, 0x1($s2)
    ctx->pc = 0x14c740u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x14c744: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x14c744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x14c748: 0x14e20007  bne         $a3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14C748u;
    {
        const bool branch_taken_0x14c748 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x14C74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C748u;
        // 0x14c74c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c748) {
            ctx->pc = 0x14C768u;
            goto label_14c768;
        }
    }
    ctx->pc = 0x14C750u;
    // 0x14c750: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14c750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c754: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x14c754u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c758: 0xc053538  jal         func_14D4E0
    ctx->pc = 0x14C758u;
    SET_GPR_U32(ctx, 31, 0x14C760u);
    ctx->pc = 0x14C75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C758u;
    // 0x14c75c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D4E0u, 0x14C758u, 0x14C760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C760u;
label_14c760:
    // 0x14c760: 0x100002c9  b           . + 4 + (0x2C9 << 2)
    ctx->pc = 0x14C760u;
    {
        const bool branch_taken_0x14c760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c760) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14C768u;
label_14c768:
    // 0x14c768: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x14c768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x14c76c: 0x14e20012  bne         $a3, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x14C76Cu;
    {
        const bool branch_taken_0x14c76c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x14c76c) {
            ctx->pc = 0x14C7B8u;
            goto label_14c7b8;
        }
    }
    ctx->pc = 0x14C774u;
    // 0x14c774: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x14c774u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x14c778: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x14c778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x14c77c: 0x1482000e  bne         $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x14C77Cu;
    {
        const bool branch_taken_0x14c77c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x14c77c) {
            ctx->pc = 0x14C7B8u;
            goto label_14c7b8;
        }
    }
    ctx->pc = 0x14C784u;
    // 0x14c784: 0x92430003  lbu         $v1, 0x3($s2)
    ctx->pc = 0x14c784u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x14c788: 0x41200  sll         $v0, $a0, 8
    ctx->pc = 0x14c788u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x14c78c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x14c78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c790: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14c790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c794: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x14c794u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c798: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x14c798u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c79c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x14c79cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x14c7a0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x14c7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14c7a4: 0xc0534dc  jal         func_14D370
    ctx->pc = 0x14C7A4u;
    SET_GPR_U32(ctx, 31, 0x14C7ACu);
    ctx->pc = 0x14C7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C7A4u;
    // 0x14c7a8: 0xe23821  addu        $a3, $a3, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D370u, 0x14C7A4u, 0x14C7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C7ACu;
label_14c7ac:
    // 0x14c7ac: 0x100002b6  b           . + 4 + (0x2B6 << 2)
    ctx->pc = 0x14C7ACu;
    {
        const bool branch_taken_0x14c7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c7ac) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14C7B4u;
    // 0x14c7b4: 0x0  nop
    ctx->pc = 0x14c7b4u;
    // NOP
label_14c7b8:
    // 0x14c7b8: 0x92470003  lbu         $a3, 0x3($s2)
    ctx->pc = 0x14c7b8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x14c7bc: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x14c7bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x14c7c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x14c7c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c7c4: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x14c7c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x14c7c8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14c7c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c7cc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x14c7ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c7d0: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x14c7d0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x14c7d4: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x14c7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x14c7d8: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x14c7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x14c7dc: 0xc0534ac  jal         func_14D2B0
    ctx->pc = 0x14C7DCu;
    SET_GPR_U32(ctx, 31, 0x14C7E4u);
    ctx->pc = 0x14C7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C7DCu;
    // 0x14c7e0: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D2B0u, 0x14C7DCu, 0x14C7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C7E4u;
label_14c7e4:
    // 0x14c7e4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x14c7e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c7e8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x14c7e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c7ec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14c7ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c7f0: 0xc053568  jal         func_14D5A0
    ctx->pc = 0x14C7F0u;
    SET_GPR_U32(ctx, 31, 0x14C7F8u);
    ctx->pc = 0x14C7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C7F0u;
    // 0x14c7f4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D5A0u, 0x14C7F0u, 0x14C7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C7F8u;
label_14c7f8:
    // 0x14c7f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x14c7f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c7fc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14c7fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c800: 0xc0536fc  jal         func_14DBF0
    ctx->pc = 0x14C800u;
    SET_GPR_U32(ctx, 31, 0x14C808u);
    ctx->pc = 0x14C804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C800u;
    // 0x14c804: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DBF0u, 0x14C800u, 0x14C808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C808u;
label_14c808:
    // 0x14c808: 0x1000029f  b           . + 4 + (0x29F << 2)
    ctx->pc = 0x14C808u;
    {
        const bool branch_taken_0x14c808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c808) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14C810u;
label_14c810:
    // 0x14c810: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14c810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c814: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14c814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c818: 0xc0535ac  jal         func_14D6B0
    ctx->pc = 0x14C818u;
    SET_GPR_U32(ctx, 31, 0x14C820u);
    ctx->pc = 0x14C81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C818u;
    // 0x14c81c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D6B0u, 0x14C818u, 0x14C820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C820u;
label_14c820:
    // 0x14c820: 0x10000299  b           . + 4 + (0x299 << 2)
    ctx->pc = 0x14C820u;
    {
        const bool branch_taken_0x14c820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c820) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14C828u;
label_14c828:
    // 0x14c828: 0x92470002  lbu         $a3, 0x2($s2)
    ctx->pc = 0x14c828u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x14c82c: 0x92480003  lbu         $t0, 0x3($s2)
    ctx->pc = 0x14c82cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x14c830: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x14c830u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x14c834: 0x8e490008  lw          $t1, 0x8($s2)
    ctx->pc = 0x14c834u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x14c838: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14c838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c83c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x14c83cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c840: 0xc05d504  jal         func_175410
    ctx->pc = 0x14C840u;
    SET_GPR_U32(ctx, 31, 0x14C848u);
    ctx->pc = 0x14C844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C840u;
    // 0x14c844: 0x24846690  addiu       $a0, $a0, 0x6690 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175410u, 0x14C840u, 0x14C848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C848u;
label_14c848:
    // 0x14c848: 0x1000028f  b           . + 4 + (0x28F << 2)
    ctx->pc = 0x14C848u;
    {
        const bool branch_taken_0x14c848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c848) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14C850u;
label_14c850:
    // 0x14c850: 0x3c040085  lui         $a0, 0x85
    ctx->pc = 0x14c850u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)133 << 16));
    // 0x14c854: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x14c854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x14c858: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14c858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c85c: 0x2484f280  addiu       $a0, $a0, -0xD80
    ctx->pc = 0x14c85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963840));
    // 0x14c860: 0xc06933c  jal         func_1A4CF0
    ctx->pc = 0x14C860u;
    SET_GPR_U32(ctx, 31, 0x14C868u);
    ctx->pc = 0x14C864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C860u;
    // 0x14c864: 0xac33fdd4  sw          $s3, -0x22C($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966740), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4CF0u, 0x14C860u, 0x14C868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C868u;
label_14c868:
    // 0x14c868: 0x10000287  b           . + 4 + (0x287 << 2)
    ctx->pc = 0x14C868u;
    {
        const bool branch_taken_0x14c868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c868) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14C870u;
label_14c870:
    // 0x14c870: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x14c870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x14c874: 0x10000284  b           . + 4 + (0x284 << 2)
    ctx->pc = 0x14C874u;
    {
        const bool branch_taken_0x14c874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C874u;
        // 0x14c878: 0xac33fdd0  sw          $s3, -0x230($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966736), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c874) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14C87Cu;
    // 0x14c87c: 0x0  nop
    ctx->pc = 0x14c87cu;
    // NOP
label_14c880:
    // 0x14c880: 0x92460001  lbu         $a2, 0x1($s2)
    ctx->pc = 0x14c880u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x14c884: 0x92470002  lbu         $a3, 0x2($s2)
    ctx->pc = 0x14c884u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x14c888: 0x3c040084  lui         $a0, 0x84
    ctx->pc = 0x14c888u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
    // 0x14c88c: 0x92480003  lbu         $t0, 0x3($s2)
    ctx->pc = 0x14c88cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x14c890: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14c890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c894: 0xc06833c  jal         func_1A0CF0
    ctx->pc = 0x14C894u;
    SET_GPR_U32(ctx, 31, 0x14C89Cu);
    ctx->pc = 0x14C898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C894u;
    // 0x14c898: 0x24843ad0  addiu       $a0, $a0, 0x3AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0CF0u, 0x14C894u, 0x14C89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C89Cu;
label_14c89c:
    // 0x14c89c: 0x1000027a  b           . + 4 + (0x27A << 2)
    ctx->pc = 0x14C89Cu;
    {
        const bool branch_taken_0x14c89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c89c) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14C8A4u;
    // 0x14c8a4: 0x0  nop
    ctx->pc = 0x14c8a4u;
    // NOP
label_14c8a8:
    // 0x14c8a8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x14c8a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x14c8ac: 0x9023fc8e  lbu         $v1, -0x372($at)
    ctx->pc = 0x14c8acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81FC8Eu));
    // 0x14c8b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14c8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c8b4: 0x14620022  bne         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x14C8B4u;
    {
        const bool branch_taken_0x14c8b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x14C8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C8B4u;
        // 0x14c8b8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c8b4) {
            ctx->pc = 0x14C940u;
            goto label_14c940;
        }
    }
    ctx->pc = 0x14C8BCu;
    // 0x14c8bc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14c8bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c8c0: 0xc0536fc  jal         func_14DBF0
    ctx->pc = 0x14C8C0u;
    SET_GPR_U32(ctx, 31, 0x14C8C8u);
    ctx->pc = 0x14C8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C8C0u;
    // 0x14c8c4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DBF0u, 0x14C8C0u, 0x14C8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C8C8u;
label_14c8c8:
    // 0x14c8c8: 0x1000026f  b           . + 4 + (0x26F << 2)
    ctx->pc = 0x14C8C8u;
    {
        const bool branch_taken_0x14c8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c8c8) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14C8D0u;
label_14c8d0:
    // 0x14c8d0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x14c8d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x14c8d4: 0x9023fc8e  lbu         $v1, -0x372($at)
    ctx->pc = 0x14c8d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81FC8Eu));
    // 0x14c8d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14c8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c8dc: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x14C8DCu;
    {
        const bool branch_taken_0x14c8dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14c8dc) {
            ctx->pc = 0x14C940u;
            goto label_14c940;
        }
    }
    ctx->pc = 0x14C8E4u;
    // 0x14c8e4: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x14c8e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14c8e8: 0x240200c7  addiu       $v0, $zero, 0xC7
    ctx->pc = 0x14c8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 199));
    // 0x14c8ec: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14C8ECu;
    {
        const bool branch_taken_0x14c8ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x14C8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C8ECu;
        // 0x14c8f0: 0x640400c8  daddiu      $a0, $zero, 0xC8 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)200);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c8ec) {
            ctx->pc = 0x14C900u;
            goto label_14c900;
        }
    }
    ctx->pc = 0x14C8F4u;
    // 0x14c8f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14C8F4u;
    {
        const bool branch_taken_0x14c8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c8f4) {
            ctx->pc = 0x14C908u;
            goto label_14c908;
        }
    }
    ctx->pc = 0x14C8FCu;
    // 0x14c8fc: 0x0  nop
    ctx->pc = 0x14c8fcu;
    // NOP
label_14c900:
    // 0x14c900: 0x640400a2  daddiu      $a0, $zero, 0xA2
    ctx->pc = 0x14c900u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)162);
    // 0x14c904: 0x0  nop
    ctx->pc = 0x14c904u;
    // NOP
label_14c908:
    // 0x14c908: 0x92460002  lbu         $a2, 0x2($s2)
    ctx->pc = 0x14c908u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x14c90c: 0x92470003  lbu         $a3, 0x3($s2)
    ctx->pc = 0x14c90cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x14c910: 0x9248000c  lbu         $t0, 0xC($s2)
    ctx->pc = 0x14c910u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x14c914: 0x9249000d  lbu         $t1, 0xD($s2)
    ctx->pc = 0x14c914u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 13)));
    // 0x14c918: 0x924a000e  lbu         $t2, 0xE($s2)
    ctx->pc = 0x14c918u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x14c91c: 0xc0a2a5c  jal         func_28A970
    ctx->pc = 0x14C91Cu;
    SET_GPR_U32(ctx, 31, 0x14C924u);
    ctx->pc = 0x14C920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C91Cu;
    // 0x14c920: 0x92450001  lbu         $a1, 0x1($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A970u, 0x14C91Cu, 0x14C924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C924u;
label_14c924:
    // 0x14c924: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14C924u;
    {
        const bool branch_taken_0x14c924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C924u;
        // 0x14c928: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c924) {
            ctx->pc = 0x14C940u;
            goto label_14c940;
        }
    }
    ctx->pc = 0x14C92Cu;
    // 0x14c92c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14c92cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c930: 0xc0536fc  jal         func_14DBF0
    ctx->pc = 0x14C930u;
    SET_GPR_U32(ctx, 31, 0x14C938u);
    ctx->pc = 0x14C934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C930u;
    // 0x14c934: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DBF0u, 0x14C930u, 0x14C938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C938u;
label_14c938:
    // 0x14c938: 0x10000253  b           . + 4 + (0x253 << 2)
    ctx->pc = 0x14C938u;
    {
        const bool branch_taken_0x14c938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c938) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14C940u;
label_14c940:
    // 0x14c940: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x14c940u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x14c944: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14c944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c948: 0x10650003  beq         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14C948u;
    {
        const bool branch_taken_0x14c948 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x14C94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C948u;
        // 0x14c94c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c948) {
            ctx->pc = 0x14C958u;
            goto label_14c958;
        }
    }
    ctx->pc = 0x14C950u;
    // 0x14c950: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x14C950u;
    {
        const bool branch_taken_0x14c950 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14c950) {
            ctx->pc = 0x14C9B0u;
            goto label_14c9b0;
        }
    }
    ctx->pc = 0x14C958u;
label_14c958:
    // 0x14c958: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x14c958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x14c95c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x14c95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x14c960: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x14C960u;
    {
        const bool branch_taken_0x14c960 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14c960) {
            ctx->pc = 0x14C998u;
            goto label_14c998;
        }
    }
    ctx->pc = 0x14C968u;
    // 0x14c968: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14c968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14c96c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14C96Cu;
    {
        const bool branch_taken_0x14c96c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14c96c) {
            ctx->pc = 0x14C980u;
            goto label_14c980;
        }
    }
    ctx->pc = 0x14C974u;
    // 0x14c974: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x14C974u;
    {
        const bool branch_taken_0x14c974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c974) {
            ctx->pc = 0x14C9A8u;
            goto label_14c9a8;
        }
    }
    ctx->pc = 0x14C97Cu;
    // 0x14c97c: 0x0  nop
    ctx->pc = 0x14c97cu;
    // NOP
label_14c980:
    // 0x14c980: 0xa2400001  sb          $zero, 0x1($s2)
    ctx->pc = 0x14c980u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x14c984: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x14c984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x14c988: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x14c988u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c98c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x14C98Cu;
    {
        const bool branch_taken_0x14c98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C98Cu;
        // 0x14c990: 0xa2420002  sb          $v0, 0x2($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c98c) {
            ctx->pc = 0x14CA10u;
            goto label_14ca10;
        }
    }
    ctx->pc = 0x14C994u;
    // 0x14c994: 0x0  nop
    ctx->pc = 0x14c994u;
    // NOP
label_14c998:
    // 0x14c998: 0xa2400001  sb          $zero, 0x1($s2)
    ctx->pc = 0x14c998u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x14c99c: 0xa2420002  sb          $v0, 0x2($s2)
    ctx->pc = 0x14c99cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x14c9a0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x14C9A0u;
    {
        const bool branch_taken_0x14c9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C9A0u;
        // 0x14c9a4: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c9a0) {
            ctx->pc = 0x14CA10u;
            goto label_14ca10;
        }
    }
    ctx->pc = 0x14C9A8u;
label_14c9a8:
    // 0x14c9a8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x14C9A8u;
    {
        const bool branch_taken_0x14c9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C9A8u;
        // 0x14c9ac: 0x2415ffff  addiu       $s5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c9a8) {
            ctx->pc = 0x14CA10u;
            goto label_14ca10;
        }
    }
    ctx->pc = 0x14C9B0u;
label_14c9b0:
    // 0x14c9b0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x14c9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14c9b4: 0x14640014  bne         $v1, $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x14C9B4u;
    {
        const bool branch_taken_0x14c9b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x14c9b4) {
            ctx->pc = 0x14CA08u;
            goto label_14ca08;
        }
    }
    ctx->pc = 0x14C9BCu;
    // 0x14c9bc: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x14c9bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x14c9c0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x14c9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x14c9c4: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x14C9C4u;
    {
        const bool branch_taken_0x14c9c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14c9c4) {
            ctx->pc = 0x14C9F8u;
            goto label_14c9f8;
        }
    }
    ctx->pc = 0x14C9CCu;
    // 0x14c9cc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x14c9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14c9d0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14C9D0u;
    {
        const bool branch_taken_0x14c9d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14c9d0) {
            ctx->pc = 0x14C9E0u;
            goto label_14c9e0;
        }
    }
    ctx->pc = 0x14C9D8u;
    // 0x14c9d8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x14C9D8u;
    {
        const bool branch_taken_0x14c9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c9d8) {
            ctx->pc = 0x14CA10u;
            goto label_14ca10;
        }
    }
    ctx->pc = 0x14C9E0u;
label_14c9e0:
    // 0x14c9e0: 0xa2440001  sb          $a0, 0x1($s2)
    ctx->pc = 0x14c9e0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x14c9e4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x14c9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x14c9e8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x14c9e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c9ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14C9ECu;
    {
        const bool branch_taken_0x14c9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C9ECu;
        // 0x14c9f0: 0xa2420002  sb          $v0, 0x2($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c9ec) {
            ctx->pc = 0x14CA10u;
            goto label_14ca10;
        }
    }
    ctx->pc = 0x14C9F4u;
    // 0x14c9f4: 0x0  nop
    ctx->pc = 0x14c9f4u;
    // NOP
label_14c9f8:
    // 0x14c9f8: 0xa2440001  sb          $a0, 0x1($s2)
    ctx->pc = 0x14c9f8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x14c9fc: 0xa2420002  sb          $v0, 0x2($s2)
    ctx->pc = 0x14c9fcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x14ca00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14CA00u;
    {
        const bool branch_taken_0x14ca00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CA00u;
        // 0x14ca04: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ca00) {
            ctx->pc = 0x14CA10u;
            goto label_14ca10;
        }
    }
    ctx->pc = 0x14CA08u;
label_14ca08:
    // 0x14ca08: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x14ca08u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14ca0c: 0x0  nop
    ctx->pc = 0x14ca0cu;
    // NOP
label_14ca10:
    // 0x14ca10: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x14ca10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x14ca14: 0x8c22cebc  lw          $v0, -0x3144($at)
    ctx->pc = 0x14ca14u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x14ca18: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x14ca18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x14ca1c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x14CA1Cu;
    {
        const bool branch_taken_0x14ca1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ca1c) {
            ctx->pc = 0x14CA58u;
            goto label_14ca58;
        }
    }
    ctx->pc = 0x14CA24u;
    // 0x14ca24: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x14ca24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x14ca28: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x14ca28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x14ca2c: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x14CA2Cu;
    {
        const bool branch_taken_0x14ca2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14ca2c) {
            ctx->pc = 0x14CA58u;
            goto label_14ca58;
        }
    }
    ctx->pc = 0x14CA34u;
    // 0x14ca34: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x14ca34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x14ca38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14ca38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14ca3c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14CA3Cu;
    {
        const bool branch_taken_0x14ca3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14CA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CA3Cu;
        // 0x14ca40: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ca3c) {
            ctx->pc = 0x14CA58u;
            goto label_14ca58;
        }
    }
    ctx->pc = 0x14CA44u;
    // 0x14ca44: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14ca44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ca48: 0xc0536fc  jal         func_14DBF0
    ctx->pc = 0x14CA48u;
    SET_GPR_U32(ctx, 31, 0x14CA50u);
    ctx->pc = 0x14CA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CA48u;
    // 0x14ca4c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DBF0u, 0x14CA48u, 0x14CA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CA50u;
label_14ca50:
    // 0x14ca50: 0x1000020d  b           . + 4 + (0x20D << 2)
    ctx->pc = 0x14CA50u;
    {
        const bool branch_taken_0x14ca50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ca50) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14CA58u;
label_14ca58:
    // 0x14ca58: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x14ca58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x14ca5c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14ca5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ca60: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x14ca60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ca64: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x14ca64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x14ca68: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x14ca68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ca6c: 0xc05ecc0  jal         func_17B300
    ctx->pc = 0x14CA6Cu;
    SET_GPR_U32(ctx, 31, 0x14CA74u);
    ctx->pc = 0x14CA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CA6Cu;
    // 0x14ca70: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B300u, 0x14CA6Cu, 0x14CA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CA74u;
label_14ca74:
    // 0x14ca74: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x14CA74u;
    {
        const bool branch_taken_0x14ca74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ca74) {
            ctx->pc = 0x14CAA0u;
            goto label_14caa0;
        }
    }
    ctx->pc = 0x14CA7Cu;
    // 0x14ca7c: 0x0  nop
    ctx->pc = 0x14ca7cu;
    // NOP
label_14ca80:
    // 0x14ca80: 0x0  nop
    ctx->pc = 0x14ca80u;
    // NOP
    // 0x14ca84: 0x0  nop
    ctx->pc = 0x14ca84u;
    // NOP
    // 0x14ca88: 0x0  nop
    ctx->pc = 0x14ca88u;
    // NOP
    // 0x14ca8c: 0x0  nop
    ctx->pc = 0x14ca8cu;
    // NOP
    // 0x14ca90: 0x0  nop
    ctx->pc = 0x14ca90u;
    // NOP
    // 0x14ca94: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x14ca94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x14ca98: 0xc05ea2c  jal         func_17A8B0
    ctx->pc = 0x14CA98u;
    SET_GPR_U32(ctx, 31, 0x14CAA0u);
    ctx->pc = 0x14CA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CA98u;
    // 0x14ca9c: 0x2484d200  addiu       $a0, $a0, -0x2E00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A8B0u, 0x14CA98u, 0x14CAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CAA0u;
label_14caa0:
    // 0x14caa0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x14caa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x14caa4: 0xc05e8ec  jal         func_17A3B0
    ctx->pc = 0x14CAA4u;
    SET_GPR_U32(ctx, 31, 0x14CAACu);
    ctx->pc = 0x14CAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CAA4u;
    // 0x14caa8: 0x2484d200  addiu       $a0, $a0, -0x2E00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A3B0u, 0x14CAA4u, 0x14CAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CAACu;
label_14caac:
    // 0x14caac: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x14CAACu;
    {
        const bool branch_taken_0x14caac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14CAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CAACu;
        // 0x14cab0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14caac) {
            ctx->pc = 0x14CA80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14ca80;
        }
    }
    ctx->pc = 0x14CAB4u;
    // 0x14cab4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14cab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cab8: 0xc0536fc  jal         func_14DBF0
    ctx->pc = 0x14CAB8u;
    SET_GPR_U32(ctx, 31, 0x14CAC0u);
    ctx->pc = 0x14CABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CAB8u;
    // 0x14cabc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DBF0u, 0x14CAB8u, 0x14CAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CAC0u;
label_14cac0:
    // 0x14cac0: 0x100001f1  b           . + 4 + (0x1F1 << 2)
    ctx->pc = 0x14CAC0u;
    {
        const bool branch_taken_0x14cac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cac0) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14CAC8u;
label_14cac8:
    // 0x14cac8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14CAC8u;
    {
        const bool branch_taken_0x14cac8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CAC8u;
        // 0x14cacc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cac8) {
            ctx->pc = 0x14CAD8u;
            goto label_14cad8;
        }
    }
    ctx->pc = 0x14CAD0u;
    // 0x14cad0: 0xc0a81f8  jal         func_2A07E0
    ctx->pc = 0x14CAD0u;
    SET_GPR_U32(ctx, 31, 0x14CAD8u);
    ctx->pc = 0x2A07E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A07E0u, 0x14CAD0u, 0x14CAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CAD8u;
label_14cad8:
    // 0x14cad8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14cad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cadc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14cadcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cae0: 0xc0535ac  jal         func_14D6B0
    ctx->pc = 0x14CAE0u;
    SET_GPR_U32(ctx, 31, 0x14CAE8u);
    ctx->pc = 0x14CAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CAE0u;
    // 0x14cae4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D6B0u, 0x14CAE0u, 0x14CAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CAE8u;
label_14cae8:
    // 0x14cae8: 0x100001e7  b           . + 4 + (0x1E7 << 2)
    ctx->pc = 0x14CAE8u;
    {
        const bool branch_taken_0x14cae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cae8) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14CAF0u;
label_14caf0:
    // 0x14caf0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14caf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14caf4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14caf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14caf8: 0xc0535ac  jal         func_14D6B0
    ctx->pc = 0x14CAF8u;
    SET_GPR_U32(ctx, 31, 0x14CB00u);
    ctx->pc = 0x14CAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CAF8u;
    // 0x14cafc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D6B0u, 0x14CAF8u, 0x14CB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CB00u;
label_14cb00:
    // 0x14cb00: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x14cb00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x14cb04: 0x8c22ceec  lw          $v0, -0x3114($at)
    ctx->pc = 0x14cb04u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEECu));
    // 0x14cb08: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x14cb08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x14cb0c: 0x0  nop
    ctx->pc = 0x14cb0cu;
    // NOP
    // 0x14cb10: 0x92460000  lbu         $a2, 0x0($s2)
    ctx->pc = 0x14cb10u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14cb14: 0x92470001  lbu         $a3, 0x1($s2)
    ctx->pc = 0x14cb14u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x14cb18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14cb18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cb1c: 0x92480002  lbu         $t0, 0x2($s2)
    ctx->pc = 0x14cb1cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x14cb20: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14cb20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cb24: 0x92490003  lbu         $t1, 0x3($s2)
    ctx->pc = 0x14cb24u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x14cb28: 0xc0a2964  jal         func_28A590
    ctx->pc = 0x14CB28u;
    SET_GPR_U32(ctx, 31, 0x14CB30u);
    ctx->pc = 0x14CB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CB28u;
    // 0x14cb2c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A590u, 0x14CB28u, 0x14CB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CB30u;
label_14cb30:
    // 0x14cb30: 0x100001d5  b           . + 4 + (0x1D5 << 2)
    ctx->pc = 0x14CB30u;
    {
        const bool branch_taken_0x14cb30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cb30) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14CB38u;
label_14cb38:
    // 0x14cb38: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x14cb38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x14cb3c: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x14cb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x14cb40: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x14cb40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x14cb44: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x14cb44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cb48: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14cb48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cb4c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x14cb4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cb50: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x14cb50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14cb54: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x14cb54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14cb58: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x14cb58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x14cb5c: 0xac22ceb8  sw          $v0, -0x3148($at)
    ctx->pc = 0x14cb5cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x14cb60: 0x92470003  lbu         $a3, 0x3($s2)
    ctx->pc = 0x14cb60u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x14cb64: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x14cb64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x14cb68: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x14cb68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x14cb6c: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x14cb6cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x14cb70: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x14cb70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x14cb74: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x14cb74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x14cb78: 0xc0534dc  jal         func_14D370
    ctx->pc = 0x14CB78u;
    SET_GPR_U32(ctx, 31, 0x14CB80u);
    ctx->pc = 0x14CB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CB78u;
    // 0x14cb7c: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D370u, 0x14CB78u, 0x14CB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CB80u;
label_14cb80:
    // 0x14cb80: 0x100001c1  b           . + 4 + (0x1C1 << 2)
    ctx->pc = 0x14CB80u;
    {
        const bool branch_taken_0x14cb80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cb80) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14CB88u;
label_14cb88:
    // 0x14cb88: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x14cb88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x14cb8c: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x14cb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x14cb90: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x14cb90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x14cb94: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x14cb94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cb98: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14cb98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cb9c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x14cb9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cba0: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x14cba0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14cba4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x14cba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14cba8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x14cba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x14cbac: 0xac22ceb8  sw          $v0, -0x3148($at)
    ctx->pc = 0x14cbacu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x14cbb0: 0x92470003  lbu         $a3, 0x3($s2)
    ctx->pc = 0x14cbb0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x14cbb4: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x14cbb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x14cbb8: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x14cbb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x14cbbc: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x14cbbcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x14cbc0: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x14cbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x14cbc4: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x14cbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x14cbc8: 0xc0534dc  jal         func_14D370
    ctx->pc = 0x14CBC8u;
    SET_GPR_U32(ctx, 31, 0x14CBD0u);
    ctx->pc = 0x14CBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CBC8u;
    // 0x14cbcc: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D370u, 0x14CBC8u, 0x14CBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CBD0u;
label_14cbd0:
    // 0x14cbd0: 0x100001ad  b           . + 4 + (0x1AD << 2)
    ctx->pc = 0x14CBD0u;
    {
        const bool branch_taken_0x14cbd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cbd0) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14CBD8u;
label_14cbd8:
    // 0x14cbd8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x14cbd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x14cbdc: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x14cbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x14cbe0: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x14cbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x14cbe4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x14cbe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cbe8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14cbe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cbec: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x14cbecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cbf0: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x14cbf0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14cbf4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x14cbf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14cbf8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x14cbf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x14cbfc: 0xac22ceb8  sw          $v0, -0x3148($at)
    ctx->pc = 0x14cbfcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x14cc00: 0x92470003  lbu         $a3, 0x3($s2)
    ctx->pc = 0x14cc00u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x14cc04: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x14cc04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x14cc08: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x14cc08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x14cc0c: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x14cc0cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x14cc10: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x14cc10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x14cc14: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x14cc14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x14cc18: 0xc0534dc  jal         func_14D370
    ctx->pc = 0x14CC18u;
    SET_GPR_U32(ctx, 31, 0x14CC20u);
    ctx->pc = 0x14CC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CC18u;
    // 0x14cc1c: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D370u, 0x14CC18u, 0x14CC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CC20u;
label_14cc20:
    // 0x14cc20: 0x10000199  b           . + 4 + (0x199 << 2)
    ctx->pc = 0x14CC20u;
    {
        const bool branch_taken_0x14cc20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cc20) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14CC28u;
label_14cc28:
    // 0x14cc28: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x14cc28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x14cc2c: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x14cc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x14cc30: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x14cc30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x14cc34: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x14cc34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cc38: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14cc38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cc3c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x14cc3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cc40: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x14cc40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x14cc44: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x14cc44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14cc48: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x14cc48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x14cc4c: 0xac22ceb8  sw          $v0, -0x3148($at)
    ctx->pc = 0x14cc4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x14cc50: 0x92470003  lbu         $a3, 0x3($s2)
    ctx->pc = 0x14cc50u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x14cc54: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x14cc54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x14cc58: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x14cc58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x14cc5c: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x14cc5cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x14cc60: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x14cc60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x14cc64: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x14cc64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x14cc68: 0xc0534dc  jal         func_14D370
    ctx->pc = 0x14CC68u;
    SET_GPR_U32(ctx, 31, 0x14CC70u);
    ctx->pc = 0x14CC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CC68u;
    // 0x14cc6c: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D370u, 0x14CC68u, 0x14CC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CC70u;
label_14cc70:
    // 0x14cc70: 0x10000185  b           . + 4 + (0x185 << 2)
    ctx->pc = 0x14CC70u;
    {
        const bool branch_taken_0x14cc70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cc70) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14CC78u;
label_14cc78:
    // 0x14cc78: 0x92460001  lbu         $a2, 0x1($s2)
    ctx->pc = 0x14cc78u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x14cc7c: 0x92470002  lbu         $a3, 0x2($s2)
    ctx->pc = 0x14cc7cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x14cc80: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14cc80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cc84: 0x92480003  lbu         $t0, 0x3($s2)
    ctx->pc = 0x14cc84u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x14cc88: 0xc05ee7c  jal         func_17B9F0
    ctx->pc = 0x14CC88u;
    SET_GPR_U32(ctx, 31, 0x14CC90u);
    ctx->pc = 0x14CC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CC88u;
    // 0x14cc8c: 0x27848650  addiu       $a0, $gp, -0x79B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B9F0u, 0x14CC88u, 0x14CC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CC90u;
label_14cc90:
    // 0x14cc90: 0x1000017d  b           . + 4 + (0x17D << 2)
    ctx->pc = 0x14CC90u;
    {
        const bool branch_taken_0x14cc90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cc90) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14CC98u;
label_14cc98:
    // 0x14cc98: 0x92470003  lbu         $a3, 0x3($s2)
    ctx->pc = 0x14cc98u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x14cc9c: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x14cc9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x14cca0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x14cca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cca4: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x14cca4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x14cca8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14cca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ccac: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x14ccacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ccb0: 0x24080009  addiu       $t0, $zero, 0x9
    ctx->pc = 0x14ccb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x14ccb4: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x14ccb4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x14ccb8: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x14ccb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x14ccbc: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x14ccbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x14ccc0: 0xc0534dc  jal         func_14D370
    ctx->pc = 0x14CCC0u;
    SET_GPR_U32(ctx, 31, 0x14CCC8u);
    ctx->pc = 0x14CCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CCC0u;
    // 0x14ccc4: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D370u, 0x14CCC0u, 0x14CCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CCC8u;
label_14ccc8:
    // 0x14ccc8: 0x1000016f  b           . + 4 + (0x16F << 2)
    ctx->pc = 0x14CCC8u;
    {
        const bool branch_taken_0x14ccc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ccc8) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14CCD0u;
label_14ccd0:
    // 0x14ccd0: 0x92470001  lbu         $a3, 0x1($s2)
    ctx->pc = 0x14ccd0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x14ccd4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x14ccd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x14ccd8: 0x14e20007  bne         $a3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14CCD8u;
    {
        const bool branch_taken_0x14ccd8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x14CCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CCD8u;
        // 0x14ccdc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ccd8) {
            ctx->pc = 0x14CCF8u;
            goto label_14ccf8;
        }
    }
    ctx->pc = 0x14CCE0u;
    // 0x14cce0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14cce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cce4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x14cce4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cce8: 0xc053538  jal         func_14D4E0
    ctx->pc = 0x14CCE8u;
    SET_GPR_U32(ctx, 31, 0x14CCF0u);
    ctx->pc = 0x14CCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CCE8u;
    // 0x14ccec: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D4E0u, 0x14CCE8u, 0x14CCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CCF0u;
label_14ccf0:
    // 0x14ccf0: 0x10000165  b           . + 4 + (0x165 << 2)
    ctx->pc = 0x14CCF0u;
    {
        const bool branch_taken_0x14ccf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ccf0) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14CCF8u;
label_14ccf8:
    // 0x14ccf8: 0x92430003  lbu         $v1, 0x3($s2)
    ctx->pc = 0x14ccf8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x14ccfc: 0x92420002  lbu         $v0, 0x2($s2)
    ctx->pc = 0x14ccfcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x14cd00: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x14cd00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cd04: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14cd04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cd08: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x14cd08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cd0c: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x14cd0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x14cd10: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x14cd10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x14cd14: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x14cd14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x14cd18: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x14cd18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14cd1c: 0xc0534dc  jal         func_14D370
    ctx->pc = 0x14CD1Cu;
    SET_GPR_U32(ctx, 31, 0x14CD24u);
    ctx->pc = 0x14CD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CD1Cu;
    // 0x14cd20: 0xe23821  addu        $a3, $a3, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D370u, 0x14CD1Cu, 0x14CD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CD24u;
label_14cd24:
    // 0x14cd24: 0x10000158  b           . + 4 + (0x158 << 2)
    ctx->pc = 0x14CD24u;
    {
        const bool branch_taken_0x14cd24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cd24) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14CD2Cu;
    // 0x14cd2c: 0x0  nop
    ctx->pc = 0x14cd2cu;
    // NOP
label_14cd30:
    // 0x14cd30: 0x92460003  lbu         $a2, 0x3($s2)
    ctx->pc = 0x14cd30u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x14cd34: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x14cd34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x14cd38: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x14cd38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cd3c: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x14cd3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x14cd40: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14cd40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cd44: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x14cd44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cd48: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x14cd48u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x14cd4c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x14cd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x14cd50: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x14cd50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x14cd54: 0xc053564  jal         func_14D590
    ctx->pc = 0x14CD54u;
    SET_GPR_U32(ctx, 31, 0x14CD5Cu);
    ctx->pc = 0x14CD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CD54u;
    // 0x14cd58: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D590u, 0x14CD54u, 0x14CD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CD5Cu;
label_14cd5c:
    // 0x14cd5c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x14cd5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cd60: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14cd60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cd64: 0xc0536fc  jal         func_14DBF0
    ctx->pc = 0x14CD64u;
    SET_GPR_U32(ctx, 31, 0x14CD6Cu);
    ctx->pc = 0x14CD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CD64u;
    // 0x14cd68: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DBF0u, 0x14CD64u, 0x14CD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CD6Cu;
label_14cd6c:
    // 0x14cd6c: 0x10000146  b           . + 4 + (0x146 << 2)
    ctx->pc = 0x14CD6Cu;
    {
        const bool branch_taken_0x14cd6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cd6c) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14CD74u;
    // 0x14cd74: 0x0  nop
    ctx->pc = 0x14cd74u;
    // NOP
label_14cd78:
    // 0x14cd78: 0x92460001  lbu         $a2, 0x1($s2)
    ctx->pc = 0x14cd78u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x14cd7c: 0x92470002  lbu         $a3, 0x2($s2)
    ctx->pc = 0x14cd7cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x14cd80: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14cd80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cd84: 0x92480003  lbu         $t0, 0x3($s2)
    ctx->pc = 0x14cd84u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x14cd88: 0xc05eeb0  jal         func_17BAC0
    ctx->pc = 0x14CD88u;
    SET_GPR_U32(ctx, 31, 0x14CD90u);
    ctx->pc = 0x14CD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CD88u;
    // 0x14cd8c: 0x27848650  addiu       $a0, $gp, -0x79B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BAC0u, 0x14CD88u, 0x14CD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CD90u;
label_14cd90:
    // 0x14cd90: 0x1000013d  b           . + 4 + (0x13D << 2)
    ctx->pc = 0x14CD90u;
    {
        const bool branch_taken_0x14cd90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cd90) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14CD98u;
label_14cd98:
    // 0x14cd98: 0x92460001  lbu         $a2, 0x1($s2)
    ctx->pc = 0x14cd98u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x14cd9c: 0x92470002  lbu         $a3, 0x2($s2)
    ctx->pc = 0x14cd9cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x14cda0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14cda0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cda4: 0x92480003  lbu         $t0, 0x3($s2)
    ctx->pc = 0x14cda4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x14cda8: 0xc05ee7c  jal         func_17B9F0
    ctx->pc = 0x14CDA8u;
    SET_GPR_U32(ctx, 31, 0x14CDB0u);
    ctx->pc = 0x14CDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CDA8u;
    // 0x14cdac: 0x27848650  addiu       $a0, $gp, -0x79B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B9F0u, 0x14CDA8u, 0x14CDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CDB0u;
label_14cdb0:
    // 0x14cdb0: 0x10000135  b           . + 4 + (0x135 << 2)
    ctx->pc = 0x14CDB0u;
    {
        const bool branch_taken_0x14cdb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cdb0) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14CDB8u;
label_14cdb8:
    // 0x14cdb8: 0x92460001  lbu         $a2, 0x1($s2)
    ctx->pc = 0x14cdb8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x14cdbc: 0x92470002  lbu         $a3, 0x2($s2)
    ctx->pc = 0x14cdbcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x14cdc0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14cdc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cdc4: 0x92480003  lbu         $t0, 0x3($s2)
    ctx->pc = 0x14cdc4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x14cdc8: 0xc09aea8  jal         func_26BAA0
    ctx->pc = 0x14CDC8u;
    SET_GPR_U32(ctx, 31, 0x14CDD0u);
    ctx->pc = 0x14CDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CDC8u;
    // 0x14cdcc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BAA0u, 0x14CDC8u, 0x14CDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CDD0u;
label_14cdd0:
    // 0x14cdd0: 0x1000012d  b           . + 4 + (0x12D << 2)
    ctx->pc = 0x14CDD0u;
    {
        const bool branch_taken_0x14cdd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cdd0) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14CDD8u;
label_14cdd8:
    // 0x14cdd8: 0x92460002  lbu         $a2, 0x2($s2)
    ctx->pc = 0x14cdd8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x14cddc: 0x92470003  lbu         $a3, 0x3($s2)
    ctx->pc = 0x14cddcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x14cde0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14cde0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cde4: 0x92480001  lbu         $t0, 0x1($s2)
    ctx->pc = 0x14cde4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x14cde8: 0xc09d4ec  jal         func_2753B0
    ctx->pc = 0x14CDE8u;
    SET_GPR_U32(ctx, 31, 0x14CDF0u);
    ctx->pc = 0x14CDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CDE8u;
    // 0x14cdec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2753B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2753B0u, 0x14CDE8u, 0x14CDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CDF0u;
label_14cdf0:
    // 0x14cdf0: 0x10000125  b           . + 4 + (0x125 << 2)
    ctx->pc = 0x14CDF0u;
    {
        const bool branch_taken_0x14cdf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cdf0) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14CDF8u;
label_14cdf8:
    // 0x14cdf8: 0x92480001  lbu         $t0, 0x1($s2)
    ctx->pc = 0x14cdf8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x14cdfc: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x14cdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x14ce00: 0x15020009  bne         $t0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14CE00u;
    {
        const bool branch_taken_0x14ce00 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x14ce00) {
            ctx->pc = 0x14CE28u;
            goto label_14ce28;
        }
    }
    ctx->pc = 0x14CE08u;
    // 0x14ce08: 0x92470002  lbu         $a3, 0x2($s2)
    ctx->pc = 0x14ce08u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x14ce0c: 0x3c040087  lui         $a0, 0x87
    ctx->pc = 0x14ce0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)135 << 16));
    // 0x14ce10: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14ce10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ce14: 0x2484cff0  addiu       $a0, $a0, -0x3010
    ctx->pc = 0x14ce14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954992));
    // 0x14ce18: 0xc0742fc  jal         func_1D0BF0
    ctx->pc = 0x14CE18u;
    SET_GPR_U32(ctx, 31, 0x14CE20u);
    ctx->pc = 0x14CE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CE18u;
    // 0x14ce1c: 0x24060063  addiu       $a2, $zero, 0x63 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BF0u, 0x14CE18u, 0x14CE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CE20u;
label_14ce20:
    // 0x14ce20: 0x10000119  b           . + 4 + (0x119 << 2)
    ctx->pc = 0x14CE20u;
    {
        const bool branch_taken_0x14ce20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ce20) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14CE28u;
label_14ce28:
    // 0x14ce28: 0x92470002  lbu         $a3, 0x2($s2)
    ctx->pc = 0x14ce28u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x14ce2c: 0x3c040087  lui         $a0, 0x87
    ctx->pc = 0x14ce2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)135 << 16));
    // 0x14ce30: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14ce30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ce34: 0x2484cff0  addiu       $a0, $a0, -0x3010
    ctx->pc = 0x14ce34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954992));
    // 0x14ce38: 0xc0742fc  jal         func_1D0BF0
    ctx->pc = 0x14CE38u;
    SET_GPR_U32(ctx, 31, 0x14CE40u);
    ctx->pc = 0x14CE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CE38u;
    // 0x14ce3c: 0x24060063  addiu       $a2, $zero, 0x63 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BF0u, 0x14CE38u, 0x14CE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CE40u;
label_14ce40:
    // 0x14ce40: 0x10000111  b           . + 4 + (0x111 << 2)
    ctx->pc = 0x14CE40u;
    {
        const bool branch_taken_0x14ce40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ce40) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14CE48u;
label_14ce48:
    // 0x14ce48: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x14ce48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x14ce4c: 0x9024fc8e  lbu         $a0, -0x372($at)
    ctx->pc = 0x14ce4cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x81FC8Eu));
    // 0x14ce50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14ce50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14ce54: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14CE54u;
    {
        const bool branch_taken_0x14ce54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x14CE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CE54u;
        // 0x14ce58: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ce54) {
            ctx->pc = 0x14CE70u;
            goto label_14ce70;
        }
    }
    ctx->pc = 0x14CE5Cu;
    // 0x14ce5c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14ce5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ce60: 0xc0536fc  jal         func_14DBF0
    ctx->pc = 0x14CE60u;
    SET_GPR_U32(ctx, 31, 0x14CE68u);
    ctx->pc = 0x14CE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CE60u;
    // 0x14ce64: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DBF0u, 0x14CE60u, 0x14CE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CE68u;
label_14ce68:
    // 0x14ce68: 0x10000107  b           . + 4 + (0x107 << 2)
    ctx->pc = 0x14CE68u;
    {
        const bool branch_taken_0x14ce68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ce68) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14CE70u;
label_14ce70:
    // 0x14ce70: 0x92470001  lbu         $a3, 0x1($s2)
    ctx->pc = 0x14ce70u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x14ce74: 0x92480002  lbu         $t0, 0x2($s2)
    ctx->pc = 0x14ce74u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x14ce78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14ce78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ce7c: 0x92490003  lbu         $t1, 0x3($s2)
    ctx->pc = 0x14ce7cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x14ce80: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14ce80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ce84: 0xc07cb8c  jal         func_1F2E30
    ctx->pc = 0x14CE84u;
    SET_GPR_U32(ctx, 31, 0x14CE8Cu);
    ctx->pc = 0x14CE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CE84u;
    // 0x14ce88: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2E30u, 0x14CE84u, 0x14CE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CE8Cu;
label_14ce8c:
    // 0x14ce8c: 0x100000fe  b           . + 4 + (0xFE << 2)
    ctx->pc = 0x14CE8Cu;
    {
        const bool branch_taken_0x14ce8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ce8c) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14CE94u;
    // 0x14ce94: 0x0  nop
    ctx->pc = 0x14ce94u;
    // NOP
label_14ce98:
    // 0x14ce98: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x14ce98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x14ce9c: 0x9024fc8e  lbu         $a0, -0x372($at)
    ctx->pc = 0x14ce9cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x81FC8Eu));
    // 0x14cea0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14cea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14cea4: 0x1082000e  beq         $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x14CEA4u;
    {
        const bool branch_taken_0x14cea4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x14cea4) {
            ctx->pc = 0x14CEE0u;
            goto label_14cee0;
        }
    }
    ctx->pc = 0x14CEACu;
    // 0x14ceac: 0x92450001  lbu         $a1, 0x1($s2)
    ctx->pc = 0x14ceacu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x14ceb0: 0x92460002  lbu         $a2, 0x2($s2)
    ctx->pc = 0x14ceb0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x14ceb4: 0x92470003  lbu         $a3, 0x3($s2)
    ctx->pc = 0x14ceb4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x14ceb8: 0xc0a2a8c  jal         func_28AA30
    ctx->pc = 0x14CEB8u;
    SET_GPR_U32(ctx, 31, 0x14CEC0u);
    ctx->pc = 0x14CEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CEB8u;
    // 0x14cebc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AA30u, 0x14CEB8u, 0x14CEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CEC0u;
label_14cec0:
    // 0x14cec0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14CEC0u;
    {
        const bool branch_taken_0x14cec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CEC0u;
        // 0x14cec4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cec0) {
            ctx->pc = 0x14CEE0u;
            goto label_14cee0;
        }
    }
    ctx->pc = 0x14CEC8u;
    // 0x14cec8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14cec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cecc: 0xc0536fc  jal         func_14DBF0
    ctx->pc = 0x14CECCu;
    SET_GPR_U32(ctx, 31, 0x14CED4u);
    ctx->pc = 0x14CED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CECCu;
    // 0x14ced0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DBF0u, 0x14CECCu, 0x14CED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CED4u;
label_14ced4:
    // 0x14ced4: 0x100000ec  b           . + 4 + (0xEC << 2)
    ctx->pc = 0x14CED4u;
    {
        const bool branch_taken_0x14ced4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ced4) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14CEDCu;
    // 0x14cedc: 0x0  nop
    ctx->pc = 0x14cedcu;
    // NOP
label_14cee0:
    // 0x14cee0: 0x92460000  lbu         $a2, 0x0($s2)
    ctx->pc = 0x14cee0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14cee4: 0x92470001  lbu         $a3, 0x1($s2)
    ctx->pc = 0x14cee4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x14cee8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14cee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ceec: 0x92480002  lbu         $t0, 0x2($s2)
    ctx->pc = 0x14ceecu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x14cef0: 0x92490003  lbu         $t1, 0x3($s2)
    ctx->pc = 0x14cef0u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x14cef4: 0xc07cb8c  jal         func_1F2E30
    ctx->pc = 0x14CEF4u;
    SET_GPR_U32(ctx, 31, 0x14CEFCu);
    ctx->pc = 0x14CEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CEF4u;
    // 0x14cef8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2E30u, 0x14CEF4u, 0x14CEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CEFCu;
label_14cefc:
    // 0x14cefc: 0x100000e2  b           . + 4 + (0xE2 << 2)
    ctx->pc = 0x14CEFCu;
    {
        const bool branch_taken_0x14cefc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cefc) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14CF04u;
    // 0x14cf04: 0x0  nop
    ctx->pc = 0x14cf04u;
    // NOP
label_14cf08:
    // 0x14cf08: 0x92470001  lbu         $a3, 0x1($s2)
    ctx->pc = 0x14cf08u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x14cf0c: 0x92480002  lbu         $t0, 0x2($s2)
    ctx->pc = 0x14cf0cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x14cf10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14cf10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cf14: 0x92490003  lbu         $t1, 0x3($s2)
    ctx->pc = 0x14cf14u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x14cf18: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14cf18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cf1c: 0xc0a2964  jal         func_28A590
    ctx->pc = 0x14CF1Cu;
    SET_GPR_U32(ctx, 31, 0x14CF24u);
    ctx->pc = 0x14CF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CF1Cu;
    // 0x14cf20: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A590u, 0x14CF1Cu, 0x14CF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CF24u;
label_14cf24:
    // 0x14cf24: 0x100000d8  b           . + 4 + (0xD8 << 2)
    ctx->pc = 0x14CF24u;
    {
        const bool branch_taken_0x14cf24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cf24) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14CF2Cu;
    // 0x14cf2c: 0x0  nop
    ctx->pc = 0x14cf2cu;
    // NOP
label_14cf30:
    // 0x14cf30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14cf30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cf34: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14cf34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cf38: 0xc0535ac  jal         func_14D6B0
    ctx->pc = 0x14CF38u;
    SET_GPR_U32(ctx, 31, 0x14CF40u);
    ctx->pc = 0x14CF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CF38u;
    // 0x14cf3c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D6B0u, 0x14CF38u, 0x14CF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CF40u;
label_14cf40:
    // 0x14cf40: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x14CF40u;
    {
        const bool branch_taken_0x14cf40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cf40) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14CF48u;
label_14cf48:
    // 0x14cf48: 0x92470001  lbu         $a3, 0x1($s2)
    ctx->pc = 0x14cf48u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x14cf4c: 0x92480002  lbu         $t0, 0x2($s2)
    ctx->pc = 0x14cf4cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x14cf50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14cf50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cf54: 0x92490003  lbu         $t1, 0x3($s2)
    ctx->pc = 0x14cf54u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x14cf58: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14cf58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cf5c: 0xc0a2964  jal         func_28A590
    ctx->pc = 0x14CF5Cu;
    SET_GPR_U32(ctx, 31, 0x14CF64u);
    ctx->pc = 0x14CF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CF5Cu;
    // 0x14cf60: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A590u, 0x14CF5Cu, 0x14CF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CF64u;
label_14cf64:
    // 0x14cf64: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x14CF64u;
    {
        const bool branch_taken_0x14cf64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cf64) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14CF6Cu;
    // 0x14cf6c: 0x0  nop
    ctx->pc = 0x14cf6cu;
    // NOP
label_14cf70:
    // 0x14cf70: 0x92450002  lbu         $a1, 0x2($s2)
    ctx->pc = 0x14cf70u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x14cf74: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x14cf74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x14cf78: 0xc099000  jal         func_264000
    ctx->pc = 0x14CF78u;
    SET_GPR_U32(ctx, 31, 0x14CF80u);
    ctx->pc = 0x14CF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CF78u;
    // 0x14cf7c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264000u, 0x14CF78u, 0x14CF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CF80u;
label_14cf80:
    // 0x14cf80: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x14cf80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cf84: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14cf84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cf88: 0xc0536fc  jal         func_14DBF0
    ctx->pc = 0x14CF88u;
    SET_GPR_U32(ctx, 31, 0x14CF90u);
    ctx->pc = 0x14CF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CF88u;
    // 0x14cf8c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DBF0u, 0x14CF88u, 0x14CF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CF90u;
label_14cf90:
    // 0x14cf90: 0x100000bd  b           . + 4 + (0xBD << 2)
    ctx->pc = 0x14CF90u;
    {
        const bool branch_taken_0x14cf90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cf90) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14CF98u;
label_14cf98:
    // 0x14cf98: 0x92450003  lbu         $a1, 0x3($s2)
    ctx->pc = 0x14cf98u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x14cf9c: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x14cf9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x14cfa0: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x14cfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x14cfa4: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x14cfa4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x14cfa8: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x14cfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x14cfac: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x14cfacu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x14cfb0: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x14cfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x14cfb4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x14cfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x14cfb8: 0xc04cd08  jal         func_133420
    ctx->pc = 0x14CFB8u;
    SET_GPR_U32(ctx, 31, 0x14CFC0u);
    ctx->pc = 0x14CFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CFB8u;
    // 0x14cfbc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133420u, 0x14CFB8u, 0x14CFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CFC0u;
label_14cfc0:
    // 0x14cfc0: 0x92460003  lbu         $a2, 0x3($s2)
    ctx->pc = 0x14cfc0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x14cfc4: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x14cfc4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14cfc8: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x14cfc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x14cfcc: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x14cfccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x14cfd0: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x14cfd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x14cfd4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14cfd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cfd8: 0x9248000d  lbu         $t0, 0xD($s2)
    ctx->pc = 0x14cfd8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 13)));
    // 0x14cfdc: 0x2484cdb0  addiu       $a0, $a0, -0x3250
    ctx->pc = 0x14cfdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954416));
    // 0x14cfe0: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x14cfe0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x14cfe4: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x14cfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x14cfe8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x14cfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x14cfec: 0xc05e6a4  jal         func_179A90
    ctx->pc = 0x14CFECu;
    SET_GPR_U32(ctx, 31, 0x14CFF4u);
    ctx->pc = 0x14CFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CFECu;
    // 0x14cff0: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179A90u, 0x14CFECu, 0x14CFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CFF4u;
label_14cff4:
    // 0x14cff4: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x14CFF4u;
    {
        const bool branch_taken_0x14cff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cff4) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14CFFCu;
    // 0x14cffc: 0x0  nop
    ctx->pc = 0x14cffcu;
    // NOP
label_14d000:
    // 0x14d000: 0x9242000c  lbu         $v0, 0xC($s2)
    ctx->pc = 0x14d000u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x14d004: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14D004u;
    {
        const bool branch_taken_0x14d004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D004u;
        // 0x14d008: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d004) {
            ctx->pc = 0x14D018u;
            goto label_14d018;
        }
    }
    ctx->pc = 0x14D00Cu;
    // 0x14d00c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14D00Cu;
    {
        const bool branch_taken_0x14d00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d00c) {
            ctx->pc = 0x14D020u;
            goto label_14d020;
        }
    }
    ctx->pc = 0x14D014u;
    // 0x14d014: 0x0  nop
    ctx->pc = 0x14d014u;
    // NOP
label_14d018:
    // 0x14d018: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14d018u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d01c: 0x0  nop
    ctx->pc = 0x14d01cu;
    // NOP
label_14d020:
    // 0x14d020: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x14d020u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x14d024: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14d024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d028: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x14d028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x14d02c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x14d02cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d030: 0xc05ecc0  jal         func_17B300
    ctx->pc = 0x14D030u;
    SET_GPR_U32(ctx, 31, 0x14D038u);
    ctx->pc = 0x14D034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D030u;
    // 0x14d034: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B300u, 0x14D030u, 0x14D038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D038u;
label_14d038:
    // 0x14d038: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x14D038u;
    {
        const bool branch_taken_0x14d038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d038) {
            ctx->pc = 0x14D060u;
            goto label_14d060;
        }
    }
    ctx->pc = 0x14D040u;
label_14d040:
    // 0x14d040: 0x0  nop
    ctx->pc = 0x14d040u;
    // NOP
    // 0x14d044: 0x0  nop
    ctx->pc = 0x14d044u;
    // NOP
    // 0x14d048: 0x0  nop
    ctx->pc = 0x14d048u;
    // NOP
    // 0x14d04c: 0x0  nop
    ctx->pc = 0x14d04cu;
    // NOP
    // 0x14d050: 0x0  nop
    ctx->pc = 0x14d050u;
    // NOP
    // 0x14d054: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x14d054u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x14d058: 0xc05ea2c  jal         func_17A8B0
    ctx->pc = 0x14D058u;
    SET_GPR_U32(ctx, 31, 0x14D060u);
    ctx->pc = 0x14D05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D058u;
    // 0x14d05c: 0x2484d200  addiu       $a0, $a0, -0x2E00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A8B0u, 0x14D058u, 0x14D060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D060u;
label_14d060:
    // 0x14d060: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x14d060u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x14d064: 0xc05e8ec  jal         func_17A3B0
    ctx->pc = 0x14D064u;
    SET_GPR_U32(ctx, 31, 0x14D06Cu);
    ctx->pc = 0x14D068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D064u;
    // 0x14d068: 0x2484d200  addiu       $a0, $a0, -0x2E00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A3B0u, 0x14D064u, 0x14D06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D06Cu;
label_14d06c:
    // 0x14d06c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x14D06Cu;
    {
        const bool branch_taken_0x14d06c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D06Cu;
        // 0x14d070: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d06c) {
            ctx->pc = 0x14D040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14d040;
        }
    }
    ctx->pc = 0x14D074u;
    // 0x14d074: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14d074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d078: 0xc0536fc  jal         func_14DBF0
    ctx->pc = 0x14D078u;
    SET_GPR_U32(ctx, 31, 0x14D080u);
    ctx->pc = 0x14D07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D078u;
    // 0x14d07c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DBF0u, 0x14D078u, 0x14D080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D080u;
label_14d080:
    // 0x14d080: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x14D080u;
    {
        const bool branch_taken_0x14d080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d080) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14D088u;
label_14d088:
    // 0x14d088: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x14d088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d08c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14d08cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d090: 0xc0536fc  jal         func_14DBF0
    ctx->pc = 0x14D090u;
    SET_GPR_U32(ctx, 31, 0x14D098u);
    ctx->pc = 0x14D094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D090u;
    // 0x14d094: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DBF0u, 0x14D090u, 0x14D098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D098u;
label_14d098:
    // 0x14d098: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x14D098u;
    {
        const bool branch_taken_0x14d098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d098) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14D0A0u;
label_14d0a0:
    // 0x14d0a0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x14d0a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d0a4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14d0a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d0a8: 0xc0536fc  jal         func_14DBF0
    ctx->pc = 0x14D0A8u;
    SET_GPR_U32(ctx, 31, 0x14D0B0u);
    ctx->pc = 0x14D0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D0A8u;
    // 0x14d0ac: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DBF0u, 0x14D0A8u, 0x14D0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D0B0u;
label_14d0b0:
    // 0x14d0b0: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x14D0B0u;
    {
        const bool branch_taken_0x14d0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d0b0) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14D0B8u;
label_14d0b8:
    // 0x14d0b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14d0b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d0bc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14d0bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d0c0: 0xc0535ac  jal         func_14D6B0
    ctx->pc = 0x14D0C0u;
    SET_GPR_U32(ctx, 31, 0x14D0C8u);
    ctx->pc = 0x14D0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D0C0u;
    // 0x14d0c4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D6B0u, 0x14D0C0u, 0x14D0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D0C8u;
label_14d0c8:
    // 0x14d0c8: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x14D0C8u;
    {
        const bool branch_taken_0x14d0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d0c8) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14D0D0u;
label_14d0d0:
    // 0x14d0d0: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x14d0d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x14d0d4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x14d0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14d0d8: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x14D0D8u;
    {
        const bool branch_taken_0x14d0d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x14d0d8) {
            ctx->pc = 0x14D108u;
            goto label_14d108;
        }
    }
    ctx->pc = 0x14D0E0u;
    // 0x14d0e0: 0x9244000c  lbu         $a0, 0xC($s2)
    ctx->pc = 0x14d0e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x14d0e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14d0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d0e8: 0x14830067  bne         $a0, $v1, . + 4 + (0x67 << 2)
    ctx->pc = 0x14D0E8u;
    {
        const bool branch_taken_0x14d0e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x14D0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D0E8u;
        // 0x14d0ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d0e8) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14D0F0u;
    // 0x14d0f0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14d0f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d0f4: 0xc0535ac  jal         func_14D6B0
    ctx->pc = 0x14D0F4u;
    SET_GPR_U32(ctx, 31, 0x14D0FCu);
    ctx->pc = 0x14D0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D0F4u;
    // 0x14d0f8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D6B0u, 0x14D0F4u, 0x14D0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D0FCu;
label_14d0fc:
    // 0x14d0fc: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x14D0FCu;
    {
        const bool branch_taken_0x14d0fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d0fc) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14D104u;
    // 0x14d104: 0x0  nop
    ctx->pc = 0x14d104u;
    // NOP
label_14d108:
    // 0x14d108: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14d108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d10c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14d10cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d110: 0xc0535ac  jal         func_14D6B0
    ctx->pc = 0x14D110u;
    SET_GPR_U32(ctx, 31, 0x14D118u);
    ctx->pc = 0x14D114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D110u;
    // 0x14d114: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D6B0u, 0x14D110u, 0x14D118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D118u;
label_14d118:
    // 0x14d118: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x14D118u;
    {
        const bool branch_taken_0x14d118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d118) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14D120u;
label_14d120:
    // 0x14d120: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x14d120u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x14d124: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x14d124u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d128: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x14d128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x14d12c: 0xc09509c  jal         func_254270
    ctx->pc = 0x14D12Cu;
    SET_GPR_U32(ctx, 31, 0x14D134u);
    ctx->pc = 0x14D130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D12Cu;
    // 0x14d130: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254270u, 0x14D12Cu, 0x14D134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D134u;
label_14d134:
    // 0x14d134: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x14D134u;
    {
        const bool branch_taken_0x14d134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D134u;
        // 0x14d138: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d134) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14D13Cu;
    // 0x14d13c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14d13cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d140: 0xc0536fc  jal         func_14DBF0
    ctx->pc = 0x14D140u;
    SET_GPR_U32(ctx, 31, 0x14D148u);
    ctx->pc = 0x14D144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D140u;
    // 0x14d144: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DBF0u, 0x14D140u, 0x14D148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D148u;
label_14d148:
    // 0x14d148: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x14D148u;
    {
        const bool branch_taken_0x14d148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d148) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14D150u;
label_14d150:
    // 0x14d150: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x14D150u;
    {
        const bool branch_taken_0x14d150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D150u;
        // 0x14d154: 0xaf938b6c  sw          $s3, -0x7494($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937452), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d150) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14D158u;
label_14d158:
    // 0x14d158: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x14d158u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x14d15c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x14d15cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d160: 0x24840fa0  addiu       $a0, $a0, 0xFA0
    ctx->pc = 0x14d160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4000));
    // 0x14d164: 0xc0caf4c  jal         func_32BD30
    ctx->pc = 0x14D164u;
    SET_GPR_U32(ctx, 31, 0x14D16Cu);
    ctx->pc = 0x14D168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D164u;
    // 0x14d168: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32BD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32BD30u, 0x14D164u, 0x14D16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D16Cu;
label_14d16c:
    // 0x14d16c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x14d16cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d170: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14d170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d174: 0xc0536fc  jal         func_14DBF0
    ctx->pc = 0x14D174u;
    SET_GPR_U32(ctx, 31, 0x14D17Cu);
    ctx->pc = 0x14D178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D174u;
    // 0x14d178: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DBF0u, 0x14D174u, 0x14D17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D17Cu;
label_14d17c:
    // 0x14d17c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x14D17Cu;
    {
        const bool branch_taken_0x14d17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d17c) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14D184u;
    // 0x14d184: 0x0  nop
    ctx->pc = 0x14d184u;
    // NOP
label_14d188:
    // 0x14d188: 0xc0da928  jal         func_36A4A0
    ctx->pc = 0x14D188u;
    SET_GPR_U32(ctx, 31, 0x14D190u);
    ctx->pc = 0x14D18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D188u;
    // 0x14d18c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A4A0u, 0x14D188u, 0x14D190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D190u;
label_14d190:
    // 0x14d190: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x14d190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d194: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14d194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d198: 0xc0536fc  jal         func_14DBF0
    ctx->pc = 0x14D198u;
    SET_GPR_U32(ctx, 31, 0x14D1A0u);
    ctx->pc = 0x14D19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D198u;
    // 0x14d19c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DBF0u, 0x14D198u, 0x14D1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D1A0u;
label_14d1a0:
    // 0x14d1a0: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x14D1A0u;
    {
        const bool branch_taken_0x14d1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d1a0) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14D1A8u;
label_14d1a8:
    // 0x14d1a8: 0x3c040084  lui         $a0, 0x84
    ctx->pc = 0x14d1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
    // 0x14d1ac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14d1acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d1b0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x14d1b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d1b4: 0xc0657ec  jal         func_195FB0
    ctx->pc = 0x14D1B4u;
    SET_GPR_U32(ctx, 31, 0x14D1BCu);
    ctx->pc = 0x14D1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D1B4u;
    // 0x14d1b8: 0x24843900  addiu       $a0, $a0, 0x3900 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x195FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195FB0u, 0x14D1B4u, 0x14D1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D1BCu;
label_14d1bc:
    // 0x14d1bc: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x14D1BCu;
    {
        const bool branch_taken_0x14d1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d1bc) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14D1C4u;
    // 0x14d1c4: 0x0  nop
    ctx->pc = 0x14d1c4u;
    // NOP
label_14d1c8:
    // 0x14d1c8: 0xc0ae97c  jal         func_2BA5F0
    ctx->pc = 0x14D1C8u;
    SET_GPR_U32(ctx, 31, 0x14D1D0u);
    ctx->pc = 0x14D1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D1C8u;
    // 0x14d1cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA5F0u, 0x14D1C8u, 0x14D1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D1D0u;
label_14d1d0:
    // 0x14d1d0: 0x92460000  lbu         $a2, 0x0($s2)
    ctx->pc = 0x14d1d0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14d1d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14d1d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d1d8: 0x92470001  lbu         $a3, 0x1($s2)
    ctx->pc = 0x14d1d8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x14d1dc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14d1dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d1e0: 0x92480002  lbu         $t0, 0x2($s2)
    ctx->pc = 0x14d1e0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x14d1e4: 0x92490003  lbu         $t1, 0x3($s2)
    ctx->pc = 0x14d1e4u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x14d1e8: 0xc0a2964  jal         func_28A590
    ctx->pc = 0x14D1E8u;
    SET_GPR_U32(ctx, 31, 0x14D1F0u);
    ctx->pc = 0x14D1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D1E8u;
    // 0x14d1ec: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A590u, 0x14D1E8u, 0x14D1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D1F0u;
label_14d1f0:
    // 0x14d1f0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x14D1F0u;
    {
        const bool branch_taken_0x14d1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d1f0) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14D1F8u;
label_14d1f8:
    // 0x14d1f8: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x14d1f8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x14d1fc: 0x92430003  lbu         $v1, 0x3($s2)
    ctx->pc = 0x14d1fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x14d200: 0x97828a60  lhu         $v0, -0x75A0($gp)
    ctx->pc = 0x14d200u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937184)));
    // 0x14d204: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x14d204u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x14d208: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x14d208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x14d20c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x14d20cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x14d210: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D210u;
    {
        const bool branch_taken_0x14d210 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x14D214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D210u;
        // 0x14d214: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d210) {
            ctx->pc = 0x14D220u;
            goto label_14d220;
        }
    }
    ctx->pc = 0x14D218u;
    // 0x14d218: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x14D218u;
    {
        const bool branch_taken_0x14d218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d218) {
            ctx->pc = 0x14D240u;
            goto label_14d240;
        }
    }
    ctx->pc = 0x14D220u;
label_14d220:
    // 0x14d220: 0x97828a62  lhu         $v0, -0x759E($gp)
    ctx->pc = 0x14d220u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937186)));
    // 0x14d224: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14D224u;
    {
        const bool branch_taken_0x14d224 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x14D228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D224u;
        // 0x14d228: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d224) {
            ctx->pc = 0x14D238u;
            goto label_14d238;
        }
    }
    ctx->pc = 0x14D22Cu;
    // 0x14d22c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14D22Cu;
    {
        const bool branch_taken_0x14d22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d22c) {
            ctx->pc = 0x14D240u;
            goto label_14d240;
        }
    }
    ctx->pc = 0x14D234u;
    // 0x14d234: 0x0  nop
    ctx->pc = 0x14d234u;
    // NOP
label_14d238:
    // 0x14d238: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x14d238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14d23c: 0x0  nop
    ctx->pc = 0x14d23cu;
    // NOP
label_14d240:
    // 0x14d240: 0xc0c9a64  jal         func_326990
    ctx->pc = 0x14D240u;
    SET_GPR_U32(ctx, 31, 0x14D248u);
    ctx->pc = 0x14D244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D240u;
    // 0x14d244: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326990u, 0x14D240u, 0x14D248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D248u;
label_14d248:
    // 0x14d248: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x14D248u;
    {
        const bool branch_taken_0x14d248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d248) {
            ctx->pc = 0x14D288u;
            goto label_14d288;
        }
    }
    ctx->pc = 0x14D250u;
label_14d250:
    // 0x14d250: 0xc0d8d1c  jal         func_363470
    ctx->pc = 0x14D250u;
    SET_GPR_U32(ctx, 31, 0x14D258u);
    ctx->pc = 0x363470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363470u, 0x14D250u, 0x14D258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D258u;
label_14d258:
    // 0x14d258: 0x3c010010  lui         $at, 0x10
    ctx->pc = 0x14d258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16 << 16));
    // 0x14d25c: 0x34219000  ori         $at, $at, 0x9000
    ctx->pc = 0x14d25cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36864);
    // 0x14d260: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x14d260u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x14d264: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x14D264u;
    {
        const bool branch_taken_0x14d264 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D264u;
        // 0x14d268: 0x3c040083  lui         $a0, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d264) {
            ctx->pc = 0x14D278u;
            goto label_14d278;
        }
    }
    ctx->pc = 0x14D26Cu;
    // 0x14d26c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14d26cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d270: 0xc05e8d8  jal         func_17A360
    ctx->pc = 0x14D270u;
    SET_GPR_U32(ctx, 31, 0x14D278u);
    ctx->pc = 0x14D274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D270u;
    // 0x14d274: 0x2484d200  addiu       $a0, $a0, -0x2E00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A360u, 0x14D270u, 0x14D278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D278u;
label_14d278:
    // 0x14d278: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x14d278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d27c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14d27cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d280: 0xc0536fc  jal         func_14DBF0
    ctx->pc = 0x14D280u;
    SET_GPR_U32(ctx, 31, 0x14D288u);
    ctx->pc = 0x14D284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D280u;
    // 0x14d284: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DBF0u, 0x14D280u, 0x14D288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D288u;
label_14d288:
    // 0x14d288: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x14d288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14d28c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x14d28cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14d290: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14d290u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14d294: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14d294u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14d298: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14d298u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14d29c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14d29cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14d2a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14d2a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d2a4: 0x3e00008  jr          $ra
    ctx->pc = 0x14D2A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D2A4u;
        // 0x14d2a8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D2A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D2ACu;
}
