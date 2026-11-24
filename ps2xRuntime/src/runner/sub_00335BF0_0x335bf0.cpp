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

// Function: sub_00335BF0
// Address: 0x335bf0 - 0x335e10
void sub_00335BF0_0x335bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335BF0_0x335bf0");
#endif

    switch (ctx->pc) {
        case 0x335bf0u: goto label_335bf0;
        case 0x335bf4u: goto label_335bf4;
        case 0x335bf8u: goto label_335bf8;
        case 0x335bfcu: goto label_335bfc;
        case 0x335c00u: goto label_335c00;
        case 0x335c04u: goto label_335c04;
        case 0x335c08u: goto label_335c08;
        case 0x335c0cu: goto label_335c0c;
        case 0x335c10u: goto label_335c10;
        case 0x335c14u: goto label_335c14;
        case 0x335c18u: goto label_335c18;
        case 0x335c1cu: goto label_335c1c;
        case 0x335c20u: goto label_335c20;
        case 0x335c24u: goto label_335c24;
        case 0x335c28u: goto label_335c28;
        case 0x335c2cu: goto label_335c2c;
        case 0x335c30u: goto label_335c30;
        case 0x335c34u: goto label_335c34;
        case 0x335c38u: goto label_335c38;
        case 0x335c3cu: goto label_335c3c;
        case 0x335c40u: goto label_335c40;
        case 0x335c44u: goto label_335c44;
        case 0x335c48u: goto label_335c48;
        case 0x335c4cu: goto label_335c4c;
        case 0x335c50u: goto label_335c50;
        case 0x335c54u: goto label_335c54;
        case 0x335c58u: goto label_335c58;
        case 0x335c5cu: goto label_335c5c;
        case 0x335c60u: goto label_335c60;
        case 0x335c64u: goto label_335c64;
        case 0x335c68u: goto label_335c68;
        case 0x335c6cu: goto label_335c6c;
        case 0x335c70u: goto label_335c70;
        case 0x335c74u: goto label_335c74;
        case 0x335c78u: goto label_335c78;
        case 0x335c7cu: goto label_335c7c;
        case 0x335c80u: goto label_335c80;
        case 0x335c84u: goto label_335c84;
        case 0x335c88u: goto label_335c88;
        case 0x335c8cu: goto label_335c8c;
        case 0x335c90u: goto label_335c90;
        case 0x335c94u: goto label_335c94;
        case 0x335c98u: goto label_335c98;
        case 0x335c9cu: goto label_335c9c;
        case 0x335ca0u: goto label_335ca0;
        case 0x335ca4u: goto label_335ca4;
        case 0x335ca8u: goto label_335ca8;
        case 0x335cacu: goto label_335cac;
        case 0x335cb0u: goto label_335cb0;
        case 0x335cb4u: goto label_335cb4;
        case 0x335cb8u: goto label_335cb8;
        case 0x335cbcu: goto label_335cbc;
        case 0x335cc0u: goto label_335cc0;
        case 0x335cc4u: goto label_335cc4;
        case 0x335cc8u: goto label_335cc8;
        case 0x335cccu: goto label_335ccc;
        case 0x335cd0u: goto label_335cd0;
        case 0x335cd4u: goto label_335cd4;
        case 0x335cd8u: goto label_335cd8;
        case 0x335cdcu: goto label_335cdc;
        case 0x335ce0u: goto label_335ce0;
        case 0x335ce4u: goto label_335ce4;
        case 0x335ce8u: goto label_335ce8;
        case 0x335cecu: goto label_335cec;
        case 0x335cf0u: goto label_335cf0;
        case 0x335cf4u: goto label_335cf4;
        case 0x335cf8u: goto label_335cf8;
        case 0x335cfcu: goto label_335cfc;
        case 0x335d00u: goto label_335d00;
        case 0x335d04u: goto label_335d04;
        case 0x335d08u: goto label_335d08;
        case 0x335d0cu: goto label_335d0c;
        case 0x335d10u: goto label_335d10;
        case 0x335d14u: goto label_335d14;
        case 0x335d18u: goto label_335d18;
        case 0x335d1cu: goto label_335d1c;
        case 0x335d20u: goto label_335d20;
        case 0x335d24u: goto label_335d24;
        case 0x335d28u: goto label_335d28;
        case 0x335d2cu: goto label_335d2c;
        case 0x335d30u: goto label_335d30;
        case 0x335d34u: goto label_335d34;
        case 0x335d38u: goto label_335d38;
        case 0x335d3cu: goto label_335d3c;
        case 0x335d40u: goto label_335d40;
        case 0x335d44u: goto label_335d44;
        case 0x335d48u: goto label_335d48;
        case 0x335d4cu: goto label_335d4c;
        case 0x335d50u: goto label_335d50;
        case 0x335d54u: goto label_335d54;
        case 0x335d58u: goto label_335d58;
        case 0x335d5cu: goto label_335d5c;
        case 0x335d60u: goto label_335d60;
        case 0x335d64u: goto label_335d64;
        case 0x335d68u: goto label_335d68;
        case 0x335d6cu: goto label_335d6c;
        case 0x335d70u: goto label_335d70;
        case 0x335d74u: goto label_335d74;
        case 0x335d78u: goto label_335d78;
        case 0x335d7cu: goto label_335d7c;
        case 0x335d80u: goto label_335d80;
        case 0x335d84u: goto label_335d84;
        case 0x335d88u: goto label_335d88;
        case 0x335d8cu: goto label_335d8c;
        case 0x335d90u: goto label_335d90;
        case 0x335d94u: goto label_335d94;
        case 0x335d98u: goto label_335d98;
        case 0x335d9cu: goto label_335d9c;
        case 0x335da0u: goto label_335da0;
        case 0x335da4u: goto label_335da4;
        case 0x335da8u: goto label_335da8;
        case 0x335dacu: goto label_335dac;
        case 0x335db0u: goto label_335db0;
        case 0x335db4u: goto label_335db4;
        case 0x335db8u: goto label_335db8;
        case 0x335dbcu: goto label_335dbc;
        case 0x335dc0u: goto label_335dc0;
        case 0x335dc4u: goto label_335dc4;
        case 0x335dc8u: goto label_335dc8;
        case 0x335dccu: goto label_335dcc;
        case 0x335dd0u: goto label_335dd0;
        case 0x335dd4u: goto label_335dd4;
        case 0x335dd8u: goto label_335dd8;
        case 0x335ddcu: goto label_335ddc;
        case 0x335de0u: goto label_335de0;
        case 0x335de4u: goto label_335de4;
        case 0x335de8u: goto label_335de8;
        case 0x335decu: goto label_335dec;
        case 0x335df0u: goto label_335df0;
        case 0x335df4u: goto label_335df4;
        case 0x335df8u: goto label_335df8;
        case 0x335dfcu: goto label_335dfc;
        case 0x335e00u: goto label_335e00;
        case 0x335e04u: goto label_335e04;
        case 0x335e08u: goto label_335e08;
        case 0x335e0cu: goto label_335e0c;
        default: break;
    }

    ctx->pc = 0x335bf0u;

label_335bf0:
    // 0x335bf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x335bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_335bf4:
    // 0x335bf4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x335bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_335bf8:
    // 0x335bf8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x335bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_335bfc:
    // 0x335bfc: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x335bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_335c00:
    // 0x335c00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x335c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_335c04:
    // 0x335c04: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x335c04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_335c08:
    // 0x335c08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x335c08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_335c0c:
    // 0x335c0c: 0xac8507b4  sw          $a1, 0x7B4($a0)
    ctx->pc = 0x335c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1972), GPR_U32(ctx, 5));
label_335c10:
    // 0x335c10: 0x26032ab8  addiu       $v1, $s0, 0x2AB8
    ctx->pc = 0x335c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 10936));
label_335c14:
    // 0x335c14: 0xac8507b8  sw          $a1, 0x7B8($a0)
    ctx->pc = 0x335c14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1976), GPR_U32(ctx, 5));
label_335c18:
    // 0x335c18: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x335c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_335c1c:
    // 0x335c1c: 0xac8329c0  sw          $v1, 0x29C0($a0)
    ctx->pc = 0x335c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10688), GPR_U32(ctx, 3));
label_335c20:
    // 0x335c20: 0xa4822aba  sh          $v0, 0x2ABA($a0)
    ctx->pc = 0x335c20u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10938), (uint16_t)GPR_U32(ctx, 2));
label_335c24:
    // 0x335c24: 0xc0a6c8c  jal         func_29B230
label_335c28:
    if (ctx->pc == 0x335C28u) {
        ctx->pc = 0x335C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335C24u;
        // 0x335c28: 0xa4822ab8  sh          $v0, 0x2AB8($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 10936), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x335C2Cu;
        goto label_335c2c;
    }
    ctx->pc = 0x335C24u;
    SET_GPR_U32(ctx, 31, 0x335C2Cu);
    ctx->pc = 0x335C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335C24u;
    // 0x335c28: 0xa4822ab8  sh          $v0, 0x2AB8($a0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 4), 10936), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B230u, 0x335C24u, 0x335C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335C2Cu;
label_335c2c:
    // 0x335c2c: 0x92050001  lbu         $a1, 0x1($s0)
    ctx->pc = 0x335c2cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_335c30:
    // 0x335c30: 0x27848548  addiu       $a0, $gp, -0x7AB8
    ctx->pc = 0x335c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935880));
label_335c34:
    // 0x335c34: 0x92060002  lbu         $a2, 0x2($s0)
    ctx->pc = 0x335c34u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_335c38:
    // 0x335c38: 0x92070003  lbu         $a3, 0x3($s0)
    ctx->pc = 0x335c38u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_335c3c:
    // 0x335c3c: 0xc050ed4  jal         func_143B50
label_335c40:
    if (ctx->pc == 0x335C40u) {
        ctx->pc = 0x335C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335C3Cu;
        // 0x335c40: 0x240800fe  addiu       $t0, $zero, 0xFE (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
        ctx->in_delay_slot = false;
        ctx->pc = 0x335C44u;
        goto label_335c44;
    }
    ctx->pc = 0x335C3Cu;
    SET_GPR_U32(ctx, 31, 0x335C44u);
    ctx->pc = 0x335C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335C3Cu;
    // 0x335c40: 0x240800fe  addiu       $t0, $zero, 0xFE (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143B50u, 0x335C3Cu, 0x335C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335C44u;
label_335c44:
    // 0x335c44: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_335c48:
    if (ctx->pc == 0x335C48u) {
        ctx->pc = 0x335C4Cu;
        goto label_335c4c;
    }
    ctx->pc = 0x335C44u;
    {
        const bool branch_taken_0x335c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x335c44) {
            ctx->pc = 0x335C88u;
            goto label_335c88;
        }
    }
    ctx->pc = 0x335C4Cu;
label_335c4c:
    // 0x335c4c: 0x90450026  lbu         $a1, 0x26($v0)
    ctx->pc = 0x335c4cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 38)));
label_335c50:
    // 0x335c50: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x335c50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
label_335c54:
    // 0x335c54: 0x90430025  lbu         $v1, 0x25($v0)
    ctx->pc = 0x335c54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 37)));
label_335c58:
    // 0x335c58: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x335c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
label_335c5c:
    // 0x335c5c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x335c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_335c60:
    // 0x335c60: 0x90420024  lbu         $v0, 0x24($v0)
    ctx->pc = 0x335c60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 36)));
label_335c64:
    // 0x335c64: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x335c64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_335c68:
    // 0x335c68: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x335c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_335c6c:
    // 0x335c6c: 0xc04cd08  jal         func_133420
label_335c70:
    if (ctx->pc == 0x335C70u) {
        ctx->pc = 0x335C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335C6Cu;
        // 0x335c70: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x335C74u;
        goto label_335c74;
    }
    ctx->pc = 0x335C6Cu;
    SET_GPR_U32(ctx, 31, 0x335C74u);
    ctx->pc = 0x335C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335C6Cu;
    // 0x335c70: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133420u, 0x335C6Cu, 0x335C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335C74u;
label_335c74:
    // 0x335c74: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x335c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
label_335c78:
    // 0x335c78: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x335c78u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_335c7c:
    // 0x335c7c: 0x10000004  b           . + 4 + (0x4 << 2)
label_335c80:
    if (ctx->pc == 0x335C80u) {
        ctx->pc = 0x335C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335C7Cu;
        // 0x335c80: 0xa6022ac2  sh          $v0, 0x2AC2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 10946), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x335C84u;
        goto label_335c84;
    }
    ctx->pc = 0x335C7Cu;
    {
        const bool branch_taken_0x335c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335C7Cu;
        // 0x335c80: 0xa6022ac2  sh          $v0, 0x2AC2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 10946), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335c7c) {
            ctx->pc = 0x335C90u;
            goto label_335c90;
        }
    }
    ctx->pc = 0x335C84u;
label_335c84:
    // 0x335c84: 0x0  nop
    ctx->pc = 0x335c84u;
    // NOP
label_335c88:
    // 0x335c88: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x335c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_335c8c:
    // 0x335c8c: 0xa6022ac2  sh          $v0, 0x2AC2($s0)
    ctx->pc = 0x335c8cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10946), (uint16_t)GPR_U32(ctx, 2));
label_335c90:
    // 0x335c90: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x335c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_335c94:
    // 0x335c94: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_335c98:
    if (ctx->pc == 0x335C98u) {
        ctx->pc = 0x335C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335C94u;
        // 0x335c98: 0x3c0344fa  lui         $v1, 0x44FA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x335C9Cu;
        goto label_335c9c;
    }
    ctx->pc = 0x335C94u;
    {
        const bool branch_taken_0x335c94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x335C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335C94u;
        // 0x335c98: 0x3c0344fa  lui         $v1, 0x44FA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335c94) {
            ctx->pc = 0x335CB8u;
            goto label_335cb8;
        }
    }
    ctx->pc = 0x335C9Cu;
label_335c9c:
    // 0x335c9c: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x335c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_335ca0:
    // 0x335ca0: 0xac830084  sw          $v1, 0x84($a0)
    ctx->pc = 0x335ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 3));
label_335ca4:
    // 0x335ca4: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x335ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_335ca8:
    // 0x335ca8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x335ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_335cac:
    // 0x335cac: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x335cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_335cb0:
    // 0x335cb0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x335cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_335cb4:
    // 0x335cb4: 0x0  nop
    ctx->pc = 0x335cb4u;
    // NOP
label_335cb8:
    // 0x335cb8: 0x26040194  addiu       $a0, $s0, 0x194
    ctx->pc = 0x335cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 404));
label_335cbc:
    // 0x335cbc: 0xc09ae20  jal         func_26B880
label_335cc0:
    if (ctx->pc == 0x335CC0u) {
        ctx->pc = 0x335CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335CBCu;
        // 0x335cc0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x335CC4u;
        goto label_335cc4;
    }
    ctx->pc = 0x335CBCu;
    SET_GPR_U32(ctx, 31, 0x335CC4u);
    ctx->pc = 0x335CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335CBCu;
    // 0x335cc0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B880u, 0x335CBCu, 0x335CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335CC4u;
label_335cc4:
    // 0x335cc4: 0xae100858  sw          $s0, 0x858($s0)
    ctx->pc = 0x335cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2136), GPR_U32(ctx, 16));
label_335cc8:
    // 0x335cc8: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x335cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_335ccc:
    // 0x335ccc: 0xae00085c  sw          $zero, 0x85C($s0)
    ctx->pc = 0x335cccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2140), GPR_U32(ctx, 0));
label_335cd0:
    // 0x335cd0: 0xae000860  sw          $zero, 0x860($s0)
    ctx->pc = 0x335cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2144), GPR_U32(ctx, 0));
label_335cd4:
    // 0x335cd4: 0xae000864  sw          $zero, 0x864($s0)
    ctx->pc = 0x335cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2148), GPR_U32(ctx, 0));
label_335cd8:
    // 0x335cd8: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x335cd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_335cdc:
    // 0x335cdc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_335ce0:
    if (ctx->pc == 0x335CE0u) {
        ctx->pc = 0x335CE4u;
        goto label_335ce4;
    }
    ctx->pc = 0x335CDCu;
    {
        const bool branch_taken_0x335cdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x335cdc) {
            ctx->pc = 0x335CF0u;
            goto label_335cf0;
        }
    }
    ctx->pc = 0x335CE4u;
label_335ce4:
    // 0x335ce4: 0x10000006  b           . + 4 + (0x6 << 2)
label_335ce8:
    if (ctx->pc == 0x335CE8u) {
        ctx->pc = 0x335CECu;
        goto label_335cec;
    }
    ctx->pc = 0x335CE4u;
    {
        const bool branch_taken_0x335ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x335ce4) {
            ctx->pc = 0x335D00u;
            goto label_335d00;
        }
    }
    ctx->pc = 0x335CECu;
label_335cec:
    // 0x335cec: 0x0  nop
    ctx->pc = 0x335cecu;
    // NOP
label_335cf0:
    // 0x335cf0: 0xc0e0910  jal         func_382440
label_335cf4:
    if (ctx->pc == 0x335CF4u) {
        ctx->pc = 0x335CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335CF0u;
        // 0x335cf4: 0x92040002  lbu         $a0, 0x2($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x335CF8u;
        goto label_335cf8;
    }
    ctx->pc = 0x335CF0u;
    SET_GPR_U32(ctx, 31, 0x335CF8u);
    ctx->pc = 0x335CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335CF0u;
    // 0x335cf4: 0x92040002  lbu         $a0, 0x2($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x382440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382440u, 0x335CF0u, 0x335CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335CF8u;
label_335cf8:
    // 0x335cf8: 0x10000007  b           . + 4 + (0x7 << 2)
label_335cfc:
    if (ctx->pc == 0x335CFCu) {
        ctx->pc = 0x335D00u;
        goto label_335d00;
    }
    ctx->pc = 0x335CF8u;
    {
        const bool branch_taken_0x335cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x335cf8) {
            ctx->pc = 0x335D18u;
            goto label_335d18;
        }
    }
    ctx->pc = 0x335D00u;
label_335d00:
    // 0x335d00: 0x96022ac4  lhu         $v0, 0x2AC4($s0)
    ctx->pc = 0x335d00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10948)));
label_335d04:
    // 0x335d04: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_335d08:
    if (ctx->pc == 0x335D08u) {
        ctx->pc = 0x335D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335D04u;
        // 0x335d08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x335D0Cu;
        goto label_335d0c;
    }
    ctx->pc = 0x335D04u;
    {
        const bool branch_taken_0x335d04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x335D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335D04u;
        // 0x335d08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335d04) {
            ctx->pc = 0x335D10u;
            goto label_335d10;
        }
    }
    ctx->pc = 0x335D0Cu;
label_335d0c:
    // 0x335d0c: 0xa6022ac4  sh          $v0, 0x2AC4($s0)
    ctx->pc = 0x335d0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10948), (uint16_t)GPR_U32(ctx, 2));
label_335d10:
    // 0x335d10: 0xc0e08f8  jal         func_3823E0
label_335d14:
    if (ctx->pc == 0x335D14u) {
        ctx->pc = 0x335D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335D10u;
        // 0x335d14: 0x96042ac4  lhu         $a0, 0x2AC4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10948)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x335D18u;
        goto label_335d18;
    }
    ctx->pc = 0x335D10u;
    SET_GPR_U32(ctx, 31, 0x335D18u);
    ctx->pc = 0x335D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335D10u;
    // 0x335d14: 0x96042ac4  lhu         $a0, 0x2AC4($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10948)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3823E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3823E0u, 0x335D10u, 0x335D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335D18u;
label_335d18:
    // 0x335d18: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_335d1c:
    if (ctx->pc == 0x335D1Cu) {
        ctx->pc = 0x335D20u;
        goto label_335d20;
    }
    ctx->pc = 0x335D18u;
    {
        const bool branch_taken_0x335d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x335d18) {
            ctx->pc = 0x335D38u;
            goto label_335d38;
        }
    }
    ctx->pc = 0x335D20u;
label_335d20:
    // 0x335d20: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x335d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_335d24:
    // 0x335d24: 0xae032ab0  sw          $v1, 0x2AB0($s0)
    ctx->pc = 0x335d24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10928), GPR_U32(ctx, 3));
label_335d28:
    // 0x335d28: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x335d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_335d2c:
    // 0x335d2c: 0x10000004  b           . + 4 + (0x4 << 2)
label_335d30:
    if (ctx->pc == 0x335D30u) {
        ctx->pc = 0x335D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335D2Cu;
        // 0x335d30: 0xae022ab4  sw          $v0, 0x2AB4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 10932), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x335D34u;
        goto label_335d34;
    }
    ctx->pc = 0x335D2Cu;
    {
        const bool branch_taken_0x335d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335D2Cu;
        // 0x335d30: 0xae022ab4  sw          $v0, 0x2AB4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 10932), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335d2c) {
            ctx->pc = 0x335D40u;
            goto label_335d40;
        }
    }
    ctx->pc = 0x335D34u;
label_335d34:
    // 0x335d34: 0x0  nop
    ctx->pc = 0x335d34u;
    // NOP
label_335d38:
    // 0x335d38: 0xae002ab4  sw          $zero, 0x2AB4($s0)
    ctx->pc = 0x335d38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10932), GPR_U32(ctx, 0));
label_335d3c:
    // 0x335d3c: 0xae002ab0  sw          $zero, 0x2AB0($s0)
    ctx->pc = 0x335d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10928), GPR_U32(ctx, 0));
label_335d40:
    // 0x335d40: 0x8e022ab0  lw          $v0, 0x2AB0($s0)
    ctx->pc = 0x335d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10928)));
label_335d44:
    // 0x335d44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_335d48:
    if (ctx->pc == 0x335D48u) {
        ctx->pc = 0x335D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335D44u;
        // 0x335d48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x335D4Cu;
        goto label_335d4c;
    }
    ctx->pc = 0x335D44u;
    {
        const bool branch_taken_0x335d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x335D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335D44u;
        // 0x335d48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335d44) {
            ctx->pc = 0x335D58u;
            goto label_335d58;
        }
    }
    ctx->pc = 0x335D4Cu;
label_335d4c:
    // 0x335d4c: 0x40f809  jalr        $v0
label_335d50:
    if (ctx->pc == 0x335D50u) {
        ctx->pc = 0x335D54u;
        goto label_335d54;
    }
    ctx->pc = 0x335D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x335D54u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335D4Cu, 0x335D54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x335D54u;
label_335d54:
    // 0x335d54: 0x0  nop
    ctx->pc = 0x335d54u;
    // NOP
label_335d58:
    // 0x335d58: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x335d58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_335d5c:
    // 0x335d5c: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x335d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_335d60:
    // 0x335d60: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_335d64:
    if (ctx->pc == 0x335D64u) {
        ctx->pc = 0x335D68u;
        goto label_335d68;
    }
    ctx->pc = 0x335D60u;
    {
        const bool branch_taken_0x335d60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x335d60) {
            ctx->pc = 0x335DA0u;
            goto label_335da0;
        }
    }
    ctx->pc = 0x335D68u;
label_335d68:
    // 0x335d68: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x335d68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_335d6c:
    // 0x335d6c: 0x240200a3  addiu       $v0, $zero, 0xA3
    ctx->pc = 0x335d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 163));
label_335d70:
    // 0x335d70: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_335d74:
    if (ctx->pc == 0x335D74u) {
        ctx->pc = 0x335D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335D70u;
        // 0x335d74: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x335D78u;
        goto label_335d78;
    }
    ctx->pc = 0x335D70u;
    {
        const bool branch_taken_0x335d70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x335D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335D70u;
        // 0x335d74: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335d70) {
            ctx->pc = 0x335D80u;
            goto label_335d80;
        }
    }
    ctx->pc = 0x335D78u;
label_335d78:
    // 0x335d78: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_335d7c:
    if (ctx->pc == 0x335D7Cu) {
        ctx->pc = 0x335D80u;
        goto label_335d80;
    }
    ctx->pc = 0x335D78u;
    {
        const bool branch_taken_0x335d78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x335d78) {
            ctx->pc = 0x335DA0u;
            goto label_335da0;
        }
    }
    ctx->pc = 0x335D80u;
label_335d80:
    // 0x335d80: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x335d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_335d84:
    // 0x335d84: 0xa2020162  sb          $v0, 0x162($s0)
    ctx->pc = 0x335d84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 354), (uint8_t)GPR_U32(ctx, 2));
label_335d88:
    // 0x335d88: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x335d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_335d8c:
    // 0x335d8c: 0xae020158  sw          $v0, 0x158($s0)
    ctx->pc = 0x335d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 2));
label_335d90:
    // 0x335d90: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x335d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
label_335d94:
    // 0x335d94: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x335d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_335d98:
    // 0x335d98: 0xae020154  sw          $v0, 0x154($s0)
    ctx->pc = 0x335d98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 2));
label_335d9c:
    // 0x335d9c: 0x0  nop
    ctx->pc = 0x335d9cu;
    // NOP
label_335da0:
    // 0x335da0: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x335da0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_335da4:
    // 0x335da4: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x335da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_335da8:
    // 0x335da8: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_335dac:
    if (ctx->pc == 0x335DACu) {
        ctx->pc = 0x335DB0u;
        goto label_335db0;
    }
    ctx->pc = 0x335DA8u;
    {
        const bool branch_taken_0x335da8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x335da8) {
            ctx->pc = 0x335DD8u;
            goto label_335dd8;
        }
    }
    ctx->pc = 0x335DB0u;
label_335db0:
    // 0x335db0: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x335db0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_335db4:
    // 0x335db4: 0x2402006e  addiu       $v0, $zero, 0x6E
    ctx->pc = 0x335db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
label_335db8:
    // 0x335db8: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_335dbc:
    if (ctx->pc == 0x335DBCu) {
        ctx->pc = 0x335DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335DB8u;
        // 0x335dbc: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x335DC0u;
        goto label_335dc0;
    }
    ctx->pc = 0x335DB8u;
    {
        const bool branch_taken_0x335db8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x335DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335DB8u;
        // 0x335dbc: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335db8) {
            ctx->pc = 0x335DD8u;
            goto label_335dd8;
        }
    }
    ctx->pc = 0x335DC0u;
label_335dc0:
    // 0x335dc0: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x335dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_335dc4:
    // 0x335dc4: 0xa2030162  sb          $v1, 0x162($s0)
    ctx->pc = 0x335dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 354), (uint8_t)GPR_U32(ctx, 3));
label_335dc8:
    // 0x335dc8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x335dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_335dcc:
    // 0x335dcc: 0xae020158  sw          $v0, 0x158($s0)
    ctx->pc = 0x335dccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 2));
label_335dd0:
    // 0x335dd0: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x335dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_335dd4:
    // 0x335dd4: 0xae020154  sw          $v0, 0x154($s0)
    ctx->pc = 0x335dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 2));
label_335dd8:
    // 0x335dd8: 0x26040194  addiu       $a0, $s0, 0x194
    ctx->pc = 0x335dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 404));
label_335ddc:
    // 0x335ddc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x335ddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_335de0:
    // 0x335de0: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x335de0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_335de4:
    // 0x335de4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x335de4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_335de8:
    // 0x335de8: 0xc09ae2c  jal         func_26B8B0
label_335dec:
    if (ctx->pc == 0x335DECu) {
        ctx->pc = 0x335DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335DE8u;
        // 0x335dec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x335DF0u;
        goto label_335df0;
    }
    ctx->pc = 0x335DE8u;
    SET_GPR_U32(ctx, 31, 0x335DF0u);
    ctx->pc = 0x335DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335DE8u;
    // 0x335dec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B8B0u, 0x335DE8u, 0x335DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335DF0u;
label_335df0:
    // 0x335df0: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x335df0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
label_335df4:
    // 0x335df4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x335df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_335df8:
    // 0x335df8: 0xc0a7394  jal         func_29CE50
label_335dfc:
    if (ctx->pc == 0x335DFCu) {
        ctx->pc = 0x335DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335DF8u;
        // 0x335dfc: 0x24842f20  addiu       $a0, $a0, 0x2F20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12064));
        ctx->in_delay_slot = false;
        ctx->pc = 0x335E00u;
        goto label_335e00;
    }
    ctx->pc = 0x335DF8u;
    SET_GPR_U32(ctx, 31, 0x335E00u);
    ctx->pc = 0x335DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335DF8u;
    // 0x335dfc: 0x24842f20  addiu       $a0, $a0, 0x2F20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CE50u, 0x335DF8u, 0x335E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335E00u;
label_335e00:
    // 0x335e00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x335e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_335e04:
    // 0x335e04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x335e04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_335e08:
    // 0x335e08: 0x3e00008  jr          $ra
label_335e0c:
    if (ctx->pc == 0x335E0Cu) {
        ctx->pc = 0x335E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335E08u;
        // 0x335e0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x335E10u;
        goto label_fallthrough_0x335e08;
    }
    ctx->pc = 0x335E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335E08u;
        // 0x335e0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335E08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x335e08:
    ctx->pc = 0x335E10u;
}
