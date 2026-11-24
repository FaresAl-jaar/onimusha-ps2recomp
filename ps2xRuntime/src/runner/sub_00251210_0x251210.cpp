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

// Function: sub_00251210
// Address: 0x251210 - 0x251308
void sub_00251210_0x251210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00251210_0x251210");
#endif

    switch (ctx->pc) {
        case 0x251210u: goto label_251210;
        case 0x251214u: goto label_251214;
        case 0x251218u: goto label_251218;
        case 0x25121cu: goto label_25121c;
        case 0x251220u: goto label_251220;
        case 0x251224u: goto label_251224;
        case 0x251228u: goto label_251228;
        case 0x25122cu: goto label_25122c;
        case 0x251230u: goto label_251230;
        case 0x251234u: goto label_251234;
        case 0x251238u: goto label_251238;
        case 0x25123cu: goto label_25123c;
        case 0x251240u: goto label_251240;
        case 0x251244u: goto label_251244;
        case 0x251248u: goto label_251248;
        case 0x25124cu: goto label_25124c;
        case 0x251250u: goto label_251250;
        case 0x251254u: goto label_251254;
        case 0x251258u: goto label_251258;
        case 0x25125cu: goto label_25125c;
        case 0x251260u: goto label_251260;
        case 0x251264u: goto label_251264;
        case 0x251268u: goto label_251268;
        case 0x25126cu: goto label_25126c;
        case 0x251270u: goto label_251270;
        case 0x251274u: goto label_251274;
        case 0x251278u: goto label_251278;
        case 0x25127cu: goto label_25127c;
        case 0x251280u: goto label_251280;
        case 0x251284u: goto label_251284;
        case 0x251288u: goto label_251288;
        case 0x25128cu: goto label_25128c;
        case 0x251290u: goto label_251290;
        case 0x251294u: goto label_251294;
        case 0x251298u: goto label_251298;
        case 0x25129cu: goto label_25129c;
        case 0x2512a0u: goto label_2512a0;
        case 0x2512a4u: goto label_2512a4;
        case 0x2512a8u: goto label_2512a8;
        case 0x2512acu: goto label_2512ac;
        case 0x2512b0u: goto label_2512b0;
        case 0x2512b4u: goto label_2512b4;
        case 0x2512b8u: goto label_2512b8;
        case 0x2512bcu: goto label_2512bc;
        case 0x2512c0u: goto label_2512c0;
        case 0x2512c4u: goto label_2512c4;
        case 0x2512c8u: goto label_2512c8;
        case 0x2512ccu: goto label_2512cc;
        case 0x2512d0u: goto label_2512d0;
        case 0x2512d4u: goto label_2512d4;
        case 0x2512d8u: goto label_2512d8;
        case 0x2512dcu: goto label_2512dc;
        case 0x2512e0u: goto label_2512e0;
        case 0x2512e4u: goto label_2512e4;
        case 0x2512e8u: goto label_2512e8;
        case 0x2512ecu: goto label_2512ec;
        case 0x2512f0u: goto label_2512f0;
        case 0x2512f4u: goto label_2512f4;
        case 0x2512f8u: goto label_2512f8;
        case 0x2512fcu: goto label_2512fc;
        case 0x251300u: goto label_251300;
        case 0x251304u: goto label_251304;
        default: break;
    }

    ctx->pc = 0x251210u;

label_251210:
    // 0x251210: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x251210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_251214:
    // 0x251214: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x251214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_251218:
    // 0x251218: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x251218u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_25121c:
    // 0x25121c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x25121cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_251220:
    // 0x251220: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x251220u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_251224:
    // 0x251224: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x251224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_251228:
    // 0x251228: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_25122c:
    if (ctx->pc == 0x25122Cu) {
        ctx->pc = 0x25122Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251228u;
        // 0x25122c: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251230u;
        goto label_251230;
    }
    ctx->pc = 0x251228u;
    {
        const bool branch_taken_0x251228 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25122Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251228u;
        // 0x25122c: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251228) {
            ctx->pc = 0x251248u;
            goto label_251248;
        }
    }
    ctx->pc = 0x251230u;
label_251230:
    // 0x251230: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x251230u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_251234:
    // 0x251234: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x251234u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_251238:
    // 0x251238: 0x2484ec30  addiu       $a0, $a0, -0x13D0
    ctx->pc = 0x251238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962224));
label_25123c:
    // 0x25123c: 0x10000009  b           . + 4 + (0x9 << 2)
label_251240:
    if (ctx->pc == 0x251240u) {
        ctx->pc = 0x251240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25123Cu;
        // 0x251240: 0x24a5eb28  addiu       $a1, $a1, -0x14D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961960));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251244u;
        goto label_251244;
    }
    ctx->pc = 0x25123Cu;
    {
        const bool branch_taken_0x25123c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25123Cu;
        // 0x251240: 0x24a5eb28  addiu       $a1, $a1, -0x14D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961960));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25123c) {
            ctx->pc = 0x251264u;
            goto label_251264;
        }
    }
    ctx->pc = 0x251244u;
label_251244:
    // 0x251244: 0x0  nop
    ctx->pc = 0x251244u;
    // NOP
label_251248:
    // 0x251248: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x251248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_25124c:
    // 0x25124c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_251250:
    if (ctx->pc == 0x251250u) {
        ctx->pc = 0x251254u;
        goto label_251254;
    }
    ctx->pc = 0x25124Cu;
    {
        const bool branch_taken_0x25124c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25124c) {
            ctx->pc = 0x251278u;
            goto label_251278;
        }
    }
    ctx->pc = 0x251254u;
label_251254:
    // 0x251254: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x251254u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_251258:
    // 0x251258: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x251258u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_25125c:
    // 0x25125c: 0x2484ec40  addiu       $a0, $a0, -0x13C0
    ctx->pc = 0x25125cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962240));
label_251260:
    // 0x251260: 0x24a5eb58  addiu       $a1, $a1, -0x14A8
    ctx->pc = 0x251260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962008));
label_251264:
    // 0x251264: 0xc0941da  jal         func_250768
label_251268:
    if (ctx->pc == 0x251268u) {
        ctx->pc = 0x25126Cu;
        goto label_25126c;
    }
    ctx->pc = 0x251264u;
    SET_GPR_U32(ctx, 31, 0x25126Cu);
    ctx->pc = 0x250768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250768u, 0x251264u, 0x25126Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25126Cu;
label_25126c:
    // 0x25126c: 0x10000020  b           . + 4 + (0x20 << 2)
label_251270:
    if (ctx->pc == 0x251270u) {
        ctx->pc = 0x251270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25126Cu;
        // 0x251270: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251274u;
        goto label_251274;
    }
    ctx->pc = 0x25126Cu;
    {
        const bool branch_taken_0x25126c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25126Cu;
        // 0x251270: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25126c) {
            ctx->pc = 0x2512F0u;
            goto label_2512f0;
        }
    }
    ctx->pc = 0x251274u;
label_251274:
    // 0x251274: 0x0  nop
    ctx->pc = 0x251274u;
    // NOP
label_251278:
    // 0x251278: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
label_25127c:
    if (ctx->pc == 0x25127Cu) {
        ctx->pc = 0x25127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251278u;
        // 0x25127c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251280u;
        goto label_251280;
    }
    ctx->pc = 0x251278u;
    {
        const bool branch_taken_0x251278 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x25127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251278u;
        // 0x25127c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251278) {
            ctx->pc = 0x251298u;
            goto label_251298;
        }
    }
    ctx->pc = 0x251280u;
label_251280:
    // 0x251280: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x251280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_251284:
    // 0x251284: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x251284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_251288:
    // 0x251288: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x251288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_25128c:
    // 0x25128c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x25128cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_251290:
    // 0x251290: 0x10000008  b           . + 4 + (0x8 << 2)
label_251294:
    if (ctx->pc == 0x251294u) {
        ctx->pc = 0x251294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251290u;
        // 0x251294: 0x8c840010  lw          $a0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251298u;
        goto label_251298;
    }
    ctx->pc = 0x251290u;
    {
        const bool branch_taken_0x251290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251290u;
        // 0x251294: 0x8c840010  lw          $a0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251290) {
            ctx->pc = 0x2512B4u;
            goto label_2512b4;
        }
    }
    ctx->pc = 0x251298u;
label_251298:
    // 0x251298: 0x54a2000d  bnel        $a1, $v0, . + 4 + (0xD << 2)
label_25129c:
    if (ctx->pc == 0x25129Cu) {
        ctx->pc = 0x25129Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251298u;
        // 0x25129c: 0x8c820038  lw          $v0, 0x38($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2512A0u;
        goto label_2512a0;
    }
    ctx->pc = 0x251298u;
    {
        const bool branch_taken_0x251298 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x251298) {
            ctx->pc = 0x25129Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251298u;
            // 0x25129c: 0x8c820038  lw          $v0, 0x38($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2512D0u;
            goto label_2512d0;
        }
    }
    ctx->pc = 0x2512A0u;
label_2512a0:
    // 0x2512a0: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x2512a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_2512a4:
    // 0x2512a4: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x2512a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_2512a8:
    // 0x2512a8: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x2512a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_2512ac:
    // 0x2512ac: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2512acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2512b0:
    // 0x2512b0: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x2512b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2512b4:
    // 0x2512b4: 0x658021  addu        $s0, $v1, $a1
    ctx->pc = 0x2512b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2512b8:
    // 0x2512b8: 0x90102a  slt         $v0, $a0, $s0
    ctx->pc = 0x2512b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_2512bc:
    // 0x2512bc: 0x82800b  movn        $s0, $a0, $v0
    ctx->pc = 0x2512bcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
label_2512c0:
    // 0x2512c0: 0x211182a  slt         $v1, $s0, $s1
    ctx->pc = 0x2512c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2512c4:
    // 0x2512c4: 0x10000007  b           . + 4 + (0x7 << 2)
label_2512c8:
    if (ctx->pc == 0x2512C8u) {
        ctx->pc = 0x2512C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2512C4u;
        // 0x2512c8: 0x223800a  movz        $s0, $s1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2512CCu;
        goto label_2512cc;
    }
    ctx->pc = 0x2512C4u;
    {
        const bool branch_taken_0x2512c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2512C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2512C4u;
        // 0x2512c8: 0x223800a  movz        $s0, $s1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2512c4) {
            ctx->pc = 0x2512E4u;
            goto label_2512e4;
        }
    }
    ctx->pc = 0x2512CCu;
label_2512cc:
    // 0x2512cc: 0x0  nop
    ctx->pc = 0x2512ccu;
    // NOP
label_2512d0:
    // 0x2512d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2512d4:
    if (ctx->pc == 0x2512D4u) {
        ctx->pc = 0x2512D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2512D0u;
        // 0x2512d4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2512D8u;
        goto label_2512d8;
    }
    ctx->pc = 0x2512D0u;
    {
        const bool branch_taken_0x2512d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2512D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2512D0u;
        // 0x2512d4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2512d0) {
            ctx->pc = 0x2512E4u;
            goto label_2512e4;
        }
    }
    ctx->pc = 0x2512D8u;
label_2512d8:
    // 0x2512d8: 0x8c84003c  lw          $a0, 0x3C($a0)
    ctx->pc = 0x2512d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_2512dc:
    // 0x2512dc: 0x40f809  jalr        $v0
label_2512e0:
    if (ctx->pc == 0x2512E0u) {
        ctx->pc = 0x2512E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2512DCu;
        // 0x2512e0: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2512E4u;
        goto label_2512e4;
    }
    ctx->pc = 0x2512DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2512E4u);
        ctx->pc = 0x2512E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2512DCu;
        // 0x2512e0: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2512DCu, 0x2512E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2512E4u;
label_2512e4:
    // 0x2512e4: 0x2111026  xor         $v0, $s0, $s1
    ctx->pc = 0x2512e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 17));
label_2512e8:
    // 0x2512e8: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x2512e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
label_2512ec:
    // 0x2512ec: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2512ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2512f0:
    // 0x2512f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2512f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2512f4:
    // 0x2512f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2512f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2512f8:
    // 0x2512f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2512f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2512fc:
    // 0x2512fc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2512fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_251300:
    // 0x251300: 0x3e00008  jr          $ra
label_251304:
    if (ctx->pc == 0x251304u) {
        ctx->pc = 0x251304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251300u;
        // 0x251304: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251308u;
        goto label_fallthrough_0x251300;
    }
    ctx->pc = 0x251300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251300u;
        // 0x251304: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x251300:
    ctx->pc = 0x251308u;
}
