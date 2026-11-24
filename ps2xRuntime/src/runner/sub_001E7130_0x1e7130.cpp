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

// Function: sub_001E7130
// Address: 0x1e7130 - 0x1e7280
void sub_001E7130_0x1e7130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7130_0x1e7130");
#endif

    switch (ctx->pc) {
        case 0x1e7130u: goto label_1e7130;
        case 0x1e7134u: goto label_1e7134;
        case 0x1e7138u: goto label_1e7138;
        case 0x1e713cu: goto label_1e713c;
        case 0x1e7140u: goto label_1e7140;
        case 0x1e7144u: goto label_1e7144;
        case 0x1e7148u: goto label_1e7148;
        case 0x1e714cu: goto label_1e714c;
        case 0x1e7150u: goto label_1e7150;
        case 0x1e7154u: goto label_1e7154;
        case 0x1e7158u: goto label_1e7158;
        case 0x1e715cu: goto label_1e715c;
        case 0x1e7160u: goto label_1e7160;
        case 0x1e7164u: goto label_1e7164;
        case 0x1e7168u: goto label_1e7168;
        case 0x1e716cu: goto label_1e716c;
        case 0x1e7170u: goto label_1e7170;
        case 0x1e7174u: goto label_1e7174;
        case 0x1e7178u: goto label_1e7178;
        case 0x1e717cu: goto label_1e717c;
        case 0x1e7180u: goto label_1e7180;
        case 0x1e7184u: goto label_1e7184;
        case 0x1e7188u: goto label_1e7188;
        case 0x1e718cu: goto label_1e718c;
        case 0x1e7190u: goto label_1e7190;
        case 0x1e7194u: goto label_1e7194;
        case 0x1e7198u: goto label_1e7198;
        case 0x1e719cu: goto label_1e719c;
        case 0x1e71a0u: goto label_1e71a0;
        case 0x1e71a4u: goto label_1e71a4;
        case 0x1e71a8u: goto label_1e71a8;
        case 0x1e71acu: goto label_1e71ac;
        case 0x1e71b0u: goto label_1e71b0;
        case 0x1e71b4u: goto label_1e71b4;
        case 0x1e71b8u: goto label_1e71b8;
        case 0x1e71bcu: goto label_1e71bc;
        case 0x1e71c0u: goto label_1e71c0;
        case 0x1e71c4u: goto label_1e71c4;
        case 0x1e71c8u: goto label_1e71c8;
        case 0x1e71ccu: goto label_1e71cc;
        case 0x1e71d0u: goto label_1e71d0;
        case 0x1e71d4u: goto label_1e71d4;
        case 0x1e71d8u: goto label_1e71d8;
        case 0x1e71dcu: goto label_1e71dc;
        case 0x1e71e0u: goto label_1e71e0;
        case 0x1e71e4u: goto label_1e71e4;
        case 0x1e71e8u: goto label_1e71e8;
        case 0x1e71ecu: goto label_1e71ec;
        case 0x1e71f0u: goto label_1e71f0;
        case 0x1e71f4u: goto label_1e71f4;
        case 0x1e71f8u: goto label_1e71f8;
        case 0x1e71fcu: goto label_1e71fc;
        case 0x1e7200u: goto label_1e7200;
        case 0x1e7204u: goto label_1e7204;
        case 0x1e7208u: goto label_1e7208;
        case 0x1e720cu: goto label_1e720c;
        case 0x1e7210u: goto label_1e7210;
        case 0x1e7214u: goto label_1e7214;
        case 0x1e7218u: goto label_1e7218;
        case 0x1e721cu: goto label_1e721c;
        case 0x1e7220u: goto label_1e7220;
        case 0x1e7224u: goto label_1e7224;
        case 0x1e7228u: goto label_1e7228;
        case 0x1e722cu: goto label_1e722c;
        case 0x1e7230u: goto label_1e7230;
        case 0x1e7234u: goto label_1e7234;
        case 0x1e7238u: goto label_1e7238;
        case 0x1e723cu: goto label_1e723c;
        case 0x1e7240u: goto label_1e7240;
        case 0x1e7244u: goto label_1e7244;
        case 0x1e7248u: goto label_1e7248;
        case 0x1e724cu: goto label_1e724c;
        case 0x1e7250u: goto label_1e7250;
        case 0x1e7254u: goto label_1e7254;
        case 0x1e7258u: goto label_1e7258;
        case 0x1e725cu: goto label_1e725c;
        case 0x1e7260u: goto label_1e7260;
        case 0x1e7264u: goto label_1e7264;
        case 0x1e7268u: goto label_1e7268;
        case 0x1e726cu: goto label_1e726c;
        case 0x1e7270u: goto label_1e7270;
        case 0x1e7274u: goto label_1e7274;
        case 0x1e7278u: goto label_1e7278;
        case 0x1e727cu: goto label_1e727c;
        default: break;
    }

    ctx->pc = 0x1e7130u;

label_1e7130:
    // 0x1e7130: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e7130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e7134:
    // 0x1e7134: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1e7134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_1e7138:
    // 0x1e7138: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e7138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e713c:
    // 0x1e713c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e713cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e7140:
    // 0x1e7140: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1e7140u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_1e7144:
    // 0x1e7144: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1e7148:
    if (ctx->pc == 0x1E7148u) {
        ctx->pc = 0x1E7148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7144u;
        // 0x1e7148: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E714Cu;
        goto label_1e714c;
    }
    ctx->pc = 0x1E7144u;
    {
        const bool branch_taken_0x1e7144 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E7148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7144u;
        // 0x1e7148: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7144) {
            ctx->pc = 0x1E7158u;
            goto label_1e7158;
        }
    }
    ctx->pc = 0x1E714Cu;
label_1e714c:
    // 0x1e714c: 0x10000048  b           . + 4 + (0x48 << 2)
label_1e7150:
    if (ctx->pc == 0x1E7150u) {
        ctx->pc = 0x1E7150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E714Cu;
        // 0x1e7150: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7154u;
        goto label_1e7154;
    }
    ctx->pc = 0x1E714Cu;
    {
        const bool branch_taken_0x1e714c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E714Cu;
        // 0x1e7150: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e714c) {
            ctx->pc = 0x1E7270u;
            goto label_1e7270;
        }
    }
    ctx->pc = 0x1E7154u;
label_1e7154:
    // 0x1e7154: 0x0  nop
    ctx->pc = 0x1e7154u;
    // NOP
label_1e7158:
    // 0x1e7158: 0x7a030060  lq          $v1, 0x60($s0)
    ctx->pc = 0x1e7158u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 96)));
label_1e715c:
    // 0x1e715c: 0x24027ffd  addiu       $v0, $zero, 0x7FFD
    ctx->pc = 0x1e715cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_1e7160:
    // 0x1e7160: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x1e7160u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_1e7164:
    // 0x1e7164: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x1e7164u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1e7168:
    // 0x1e7168: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e7168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e716c:
    // 0x1e716c: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x1e716cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
label_1e7170:
    // 0x1e7170: 0x86030034  lh          $v1, 0x34($s0)
    ctx->pc = 0x1e7170u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
label_1e7174:
    // 0x1e7174: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_1e7178:
    if (ctx->pc == 0x1E7178u) {
        ctx->pc = 0x1E717Cu;
        goto label_1e717c;
    }
    ctx->pc = 0x1E7174u;
    {
        const bool branch_taken_0x1e7174 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e7174) {
            ctx->pc = 0x1E7198u;
            goto label_1e7198;
        }
    }
    ctx->pc = 0x1E717Cu;
label_1e717c:
    // 0x1e717c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x1e717cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1e7180:
    // 0x1e7180: 0x28417ff1  slti        $at, $v0, 0x7FF1
    ctx->pc = 0x1e7180u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32753) ? 1 : 0);
label_1e7184:
    // 0x1e7184: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
label_1e7188:
    if (ctx->pc == 0x1E7188u) {
        ctx->pc = 0x1E7188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7184u;
        // 0x1e7188: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E718Cu;
        goto label_1e718c;
    }
    ctx->pc = 0x1E7184u;
    {
        const bool branch_taken_0x1e7184 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E7188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7184u;
        // 0x1e7188: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7184) {
            ctx->pc = 0x1E71C0u;
            goto label_1e71c0;
        }
    }
    ctx->pc = 0x1E718Cu;
label_1e718c:
    // 0x1e718c: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x1e718cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_1e7190:
    // 0x1e7190: 0x1000000b  b           . + 4 + (0xB << 2)
label_1e7194:
    if (ctx->pc == 0x1E7194u) {
        ctx->pc = 0x1E7194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7190u;
        // 0x1e7194: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7198u;
        goto label_1e7198;
    }
    ctx->pc = 0x1E7190u;
    {
        const bool branch_taken_0x1e7190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7190u;
        // 0x1e7194: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7190) {
            ctx->pc = 0x1E71C0u;
            goto label_1e71c0;
        }
    }
    ctx->pc = 0x1E7198u;
label_1e7198:
    // 0x1e7198: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x1e7198u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1e719c:
    // 0x1e719c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1e719cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e71a0:
    // 0x1e71a0: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_1e71a4:
    if (ctx->pc == 0x1E71A4u) {
        ctx->pc = 0x1E71A8u;
        goto label_1e71a8;
    }
    ctx->pc = 0x1E71A0u;
    {
        const bool branch_taken_0x1e71a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e71a0) {
            ctx->pc = 0x1E71C0u;
            goto label_1e71c0;
        }
    }
    ctx->pc = 0x1E71A8u;
label_1e71a8:
    // 0x1e71a8: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1e71a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1e71ac:
    // 0x1e71ac: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e71acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e71b0:
    // 0x1e71b0: 0x320f809  jalr        $t9
label_1e71b4:
    if (ctx->pc == 0x1E71B4u) {
        ctx->pc = 0x1E71B8u;
        goto label_1e71b8;
    }
    ctx->pc = 0x1E71B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E71B8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E71B0u, 0x1E71B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E71B8u;
label_1e71b8:
    // 0x1e71b8: 0x1000002d  b           . + 4 + (0x2D << 2)
label_1e71bc:
    if (ctx->pc == 0x1E71BCu) {
        ctx->pc = 0x1E71BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E71B8u;
        // 0x1e71bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E71C0u;
        goto label_1e71c0;
    }
    ctx->pc = 0x1E71B8u;
    {
        const bool branch_taken_0x1e71b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E71BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E71B8u;
        // 0x1e71bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e71b8) {
            ctx->pc = 0x1E7270u;
            goto label_1e7270;
        }
    }
    ctx->pc = 0x1E71C0u;
label_1e71c0:
    // 0x1e71c0: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1e71c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_1e71c4:
    // 0x1e71c4: 0xc076800  jal         func_1DA000
label_1e71c8:
    if (ctx->pc == 0x1E71C8u) {
        ctx->pc = 0x1E71C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E71C4u;
        // 0x1e71c8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E71CCu;
        goto label_1e71cc;
    }
    ctx->pc = 0x1E71C4u;
    SET_GPR_U32(ctx, 31, 0x1E71CCu);
    ctx->pc = 0x1E71C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E71C4u;
    // 0x1e71c8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA000u, 0x1E71C4u, 0x1E71CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E71CCu;
label_1e71cc:
    // 0x1e71cc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1e71ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_1e71d0:
    // 0x1e71d0: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1e71d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1e71d4:
    // 0x1e71d4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1e71d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1e71d8:
    // 0x1e71d8: 0xc0765dc  jal         func_1D9770
label_1e71dc:
    if (ctx->pc == 0x1E71DCu) {
        ctx->pc = 0x1E71DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E71D8u;
        // 0x1e71dc: 0xc60c0040  lwc1        $f12, 0x40($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E71E0u;
        goto label_1e71e0;
    }
    ctx->pc = 0x1E71D8u;
    SET_GPR_U32(ctx, 31, 0x1E71E0u);
    ctx->pc = 0x1E71DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E71D8u;
    // 0x1e71dc: 0xc60c0040  lwc1        $f12, 0x40($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9770u, 0x1E71D8u, 0x1E71E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E71E0u;
label_1e71e0:
    // 0x1e71e0: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x1e71e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
label_1e71e4:
    // 0x1e71e4: 0x8e070070  lw          $a3, 0x70($s0)
    ctx->pc = 0x1e71e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_1e71e8:
    // 0x1e71e8: 0x71402  srl         $v0, $a3, 16
    ctx->pc = 0x1e71e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
label_1e71ec:
    // 0x1e71ec: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1e71ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1e71f0:
    // 0x1e71f0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1e71f4:
    if (ctx->pc == 0x1E71F4u) {
        ctx->pc = 0x1E71F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E71F0u;
        // 0x1e71f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E71F8u;
        goto label_1e71f8;
    }
    ctx->pc = 0x1E71F0u;
    {
        const bool branch_taken_0x1e71f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E71F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E71F0u;
        // 0x1e71f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e71f0) {
            ctx->pc = 0x1E7228u;
            goto label_1e7228;
        }
    }
    ctx->pc = 0x1E71F8u;
label_1e71f8:
    // 0x1e71f8: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x1e71f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_1e71fc:
    // 0x1e71fc: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x1e71fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1e7200:
    // 0x1e7200: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1e7200u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1e7204:
    // 0x1e7204: 0x3c02008e  lui         $v0, 0x8E
    ctx->pc = 0x1e7204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)142 << 16));
label_1e7208:
    // 0x1e7208: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1e7208u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1e720c:
    // 0x1e720c: 0x2442e0e2  addiu       $v0, $v0, -0x1F1E
    ctx->pc = 0x1e720cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959330));
label_1e7210:
    // 0x1e7210: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1e7210u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1e7214:
    // 0x1e7214: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e7214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e7218:
    // 0x1e7218: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x1e7218u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1e721c:
    // 0x1e721c: 0x14a20002  bne         $a1, $v0, . + 4 + (0x2 << 2)
label_1e7220:
    if (ctx->pc == 0x1E7220u) {
        ctx->pc = 0x1E7224u;
        goto label_1e7224;
    }
    ctx->pc = 0x1E721Cu;
    {
        const bool branch_taken_0x1e721c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e721c) {
            ctx->pc = 0x1E7228u;
            goto label_1e7228;
        }
    }
    ctx->pc = 0x1E7224u;
label_1e7224:
    // 0x1e7224: 0x64060001  daddiu      $a2, $zero, 0x1
    ctx->pc = 0x1e7224u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1e7228:
    // 0x1e7228: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x1e7228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_1e722c:
    // 0x1e722c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1e7230:
    if (ctx->pc == 0x1E7230u) {
        ctx->pc = 0x1E7230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E722Cu;
        // 0x1e7230: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7234u;
        goto label_1e7234;
    }
    ctx->pc = 0x1E722Cu;
    {
        const bool branch_taken_0x1e722c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E722Cu;
        // 0x1e7230: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e722c) {
            ctx->pc = 0x1E7250u;
            goto label_1e7250;
        }
    }
    ctx->pc = 0x1E7234u;
label_1e7234:
    // 0x1e7234: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x1e7234u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_1e7238:
    // 0x1e7238: 0x3c02008e  lui         $v0, 0x8E
    ctx->pc = 0x1e7238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)142 << 16));
label_1e723c:
    // 0x1e723c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1e723cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1e7240:
    // 0x1e7240: 0x2442e080  addiu       $v0, $v0, -0x1F80
    ctx->pc = 0x1e7240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959232));
label_1e7244:
    // 0x1e7244: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1e7244u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1e7248:
    // 0x1e7248: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1e7248u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1e724c:
    // 0x1e724c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1e724cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e7250:
    // 0x1e7250: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1e7254:
    if (ctx->pc == 0x1E7254u) {
        ctx->pc = 0x1E7258u;
        goto label_1e7258;
    }
    ctx->pc = 0x1E7250u;
    {
        const bool branch_taken_0x1e7250 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7250) {
            ctx->pc = 0x1E7268u;
            goto label_1e7268;
        }
    }
    ctx->pc = 0x1E7258u;
label_1e7258:
    // 0x1e7258: 0x96020036  lhu         $v0, 0x36($s0)
    ctx->pc = 0x1e7258u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 54)));
label_1e725c:
    // 0x1e725c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1e725cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_1e7260:
    // 0x1e7260: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x1e7260u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
label_1e7264:
    // 0x1e7264: 0x0  nop
    ctx->pc = 0x1e7264u;
    // NOP
label_1e7268:
    // 0x1e7268: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e7268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e726c:
    // 0x1e726c: 0x0  nop
    ctx->pc = 0x1e726cu;
    // NOP
label_1e7270:
    // 0x1e7270: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e7270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e7274:
    // 0x1e7274: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e7274u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e7278:
    // 0x1e7278: 0x3e00008  jr          $ra
label_1e727c:
    if (ctx->pc == 0x1E727Cu) {
        ctx->pc = 0x1E727Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7278u;
        // 0x1e727c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7280u;
        goto label_fallthrough_0x1e7278;
    }
    ctx->pc = 0x1E7278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E727Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7278u;
        // 0x1e727c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e7278:
    ctx->pc = 0x1E7280u;
}
