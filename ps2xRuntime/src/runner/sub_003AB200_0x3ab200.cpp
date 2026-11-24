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

// Function: sub_003AB200
// Address: 0x3ab200 - 0x3ab3b0
void sub_003AB200_0x3ab200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AB200_0x3ab200");
#endif

    switch (ctx->pc) {
        case 0x3ab26cu: goto label_3ab26c;
        case 0x3ab284u: goto label_3ab284;
        case 0x3ab294u: goto label_3ab294;
        case 0x3ab2d4u: goto label_3ab2d4;
        case 0x3ab2e4u: goto label_3ab2e4;
        case 0x3ab300u: goto label_3ab300;
        case 0x3ab334u: goto label_3ab334;
        case 0x3ab344u: goto label_3ab344;
        case 0x3ab374u: goto label_3ab374;
        case 0x3ab384u: goto label_3ab384;
        default: break;
    }

    ctx->pc = 0x3ab200u;

    // 0x3ab200: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ab200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3ab204: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3ab204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3ab208: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ab208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3ab20c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ab20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3ab210: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ab210u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab214: 0x90840003  lbu         $a0, 0x3($a0)
    ctx->pc = 0x3ab214u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x3ab218: 0x10820051  beq         $a0, $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x3AB218u;
    {
        const bool branch_taken_0x3ab218 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3AB21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB218u;
        // 0x3ab21c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab218) {
            ctx->pc = 0x3AB360u;
            goto label_3ab360;
        }
    }
    ctx->pc = 0x3AB220u;
    // 0x3ab220: 0x1082003f  beq         $a0, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x3AB220u;
    {
        const bool branch_taken_0x3ab220 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3AB224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB220u;
        // 0x3ab224: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab220) {
            ctx->pc = 0x3AB320u;
            goto label_3ab320;
        }
    }
    ctx->pc = 0x3AB228u;
    // 0x3ab228: 0x10830025  beq         $a0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x3AB228u;
    {
        const bool branch_taken_0x3ab228 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3AB22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB228u;
        // 0x3ab22c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab228) {
            ctx->pc = 0x3AB2C0u;
            goto label_3ab2c0;
        }
    }
    ctx->pc = 0x3AB230u;
    // 0x3ab230: 0x1082000f  beq         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3AB230u;
    {
        const bool branch_taken_0x3ab230 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3ab230) {
            ctx->pc = 0x3AB270u;
            goto label_3ab270;
        }
    }
    ctx->pc = 0x3AB238u;
    // 0x3ab238: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AB238u;
    {
        const bool branch_taken_0x3ab238 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ab238) {
            ctx->pc = 0x3AB248u;
            goto label_3ab248;
        }
    }
    ctx->pc = 0x3AB240u;
    // 0x3ab240: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x3AB240u;
    {
        const bool branch_taken_0x3ab240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ab240) {
            ctx->pc = 0x3AB398u;
            goto label_3ab398;
        }
    }
    ctx->pc = 0x3AB248u;
label_3ab248:
    // 0x3ab248: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x3ab248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3ab24c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3ab24cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3ab250: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x3ab250u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x3ab254: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x3ab254u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ab258: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x3ab258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
    // 0x3ab25c: 0x24848c30  addiu       $a0, $a0, -0x73D0
    ctx->pc = 0x3ab25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937648));
    // 0x3ab260: 0xa4238c12  sh          $v1, -0x73EE($at)
    ctx->pc = 0x3ab260u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B8C12u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x6B8C12u, _value); } while (0);
    // 0x3ab264: 0xc049ed2  jal         func_127B48
    ctx->pc = 0x3AB264u;
    SET_GPR_U32(ctx, 31, 0x3AB26Cu);
    ctx->pc = 0x3AB268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB264u;
    // 0x3ab268: 0x24a52930  addiu       $a1, $a1, 0x2930 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B48u, 0x3AB264u, 0x3AB26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB26Cu;
label_3ab26c:
    // 0x3ab26c: 0x0  nop
    ctx->pc = 0x3ab26cu;
    // NOP
label_3ab270:
    // 0x3ab270: 0x82050007  lb          $a1, 0x7($s0)
    ctx->pc = 0x3ab270u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3ab274: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3ab274u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3ab278: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ab278u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab27c: 0xc052840  jal         func_14A100
    ctx->pc = 0x3AB27Cu;
    SET_GPR_U32(ctx, 31, 0x3AB284u);
    ctx->pc = 0x3AB280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB27Cu;
    // 0x3ab280: 0x24848c10  addiu       $a0, $a0, -0x73F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A100u, 0x3AB27Cu, 0x3AB284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB284u;
label_3ab284:
    // 0x3ab284: 0x14400044  bnez        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x3AB284u;
    {
        const bool branch_taken_0x3ab284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AB288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB284u;
        // 0x3ab288: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab284) {
            ctx->pc = 0x3AB398u;
            goto label_3ab398;
        }
    }
    ctx->pc = 0x3AB28Cu;
    // 0x3ab28c: 0xc0ea8f0  jal         func_3AA3C0
    ctx->pc = 0x3AB28Cu;
    SET_GPR_U32(ctx, 31, 0x3AB294u);
    ctx->pc = 0x3AA3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA3C0u, 0x3AB28Cu, 0x3AB294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB294u;
label_3ab294:
    // 0x3ab294: 0x4400040  bltz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x3AB294u;
    {
        const bool branch_taken_0x3ab294 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x3ab294) {
            ctx->pc = 0x3AB398u;
            goto label_3ab398;
        }
    }
    ctx->pc = 0x3AB29Cu;
    // 0x3ab29c: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x3ab29cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x3ab2a0: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x3ab2a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
    // 0x3ab2a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3ab2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3ab2a8: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x3ab2a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ab2ac: 0xac208c14  sw          $zero, -0x73EC($at)
    ctx->pc = 0x3ab2acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B8C14u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B8C14u, _value); } while (0);
    // 0x3ab2b0: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x3ab2b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
    // 0x3ab2b4: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x3AB2B4u;
    {
        const bool branch_taken_0x3ab2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB2B4u;
        // 0x3ab2b8: 0xac208c18  sw          $zero, -0x73E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294937624), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab2b4) {
            ctx->pc = 0x3AB398u;
            goto label_3ab398;
        }
    }
    ctx->pc = 0x3AB2BCu;
    // 0x3ab2bc: 0x0  nop
    ctx->pc = 0x3ab2bcu;
    // NOP
label_3ab2c0:
    // 0x3ab2c0: 0x82050007  lb          $a1, 0x7($s0)
    ctx->pc = 0x3ab2c0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3ab2c4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3ab2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3ab2c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ab2c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab2cc: 0xc052910  jal         func_14A440
    ctx->pc = 0x3AB2CCu;
    SET_GPR_U32(ctx, 31, 0x3AB2D4u);
    ctx->pc = 0x3AB2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB2CCu;
    // 0x3ab2d0: 0x24848c10  addiu       $a0, $a0, -0x73F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A440u, 0x3AB2CCu, 0x3AB2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB2D4u;
label_3ab2d4:
    // 0x3ab2d4: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x3AB2D4u;
    {
        const bool branch_taken_0x3ab2d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AB2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB2D4u;
        // 0x3ab2d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab2d4) {
            ctx->pc = 0x3AB398u;
            goto label_3ab398;
        }
    }
    ctx->pc = 0x3AB2DCu;
    // 0x3ab2dc: 0xc0ea8f0  jal         func_3AA3C0
    ctx->pc = 0x3AB2DCu;
    SET_GPR_U32(ctx, 31, 0x3AB2E4u);
    ctx->pc = 0x3AA3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA3C0u, 0x3AB2DCu, 0x3AB2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB2E4u;
label_3ab2e4:
    // 0x3ab2e4: 0x440002c  bltz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x3AB2E4u;
    {
        const bool branch_taken_0x3ab2e4 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x3ab2e4) {
            ctx->pc = 0x3AB398u;
            goto label_3ab398;
        }
    }
    ctx->pc = 0x3AB2ECu;
    // 0x3ab2ec: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x3ab2ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x3ab2f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ab2f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab2f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3ab2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3ab2f8: 0xc0eadc4  jal         func_3AB710
    ctx->pc = 0x3AB2F8u;
    SET_GPR_U32(ctx, 31, 0x3AB300u);
    ctx->pc = 0x3AB2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB2F8u;
    // 0x3ab2fc: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AB710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AB710u, 0x3AB2F8u, 0x3AB300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB300u;
label_3ab300:
    // 0x3ab300: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x3ab300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x3ab304: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x3ab304u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
    // 0x3ab308: 0x246399e0  addiu       $v1, $v1, -0x6620
    ctx->pc = 0x3ab308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941152));
    // 0x3ab30c: 0x24020090  addiu       $v0, $zero, 0x90
    ctx->pc = 0x3ab30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x3ab310: 0xac238c28  sw          $v1, -0x73D8($at)
    ctx->pc = 0x3ab310u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B8C28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B8C28u, _value); } while (0);
    // 0x3ab314: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x3ab314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
    // 0x3ab318: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x3AB318u;
    {
        const bool branch_taken_0x3ab318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB318u;
        // 0x3ab31c: 0xac228c2c  sw          $v0, -0x73D4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294937644), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab318) {
            ctx->pc = 0x3AB398u;
            goto label_3ab398;
        }
    }
    ctx->pc = 0x3AB320u;
label_3ab320:
    // 0x3ab320: 0x82050007  lb          $a1, 0x7($s0)
    ctx->pc = 0x3ab320u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3ab324: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3ab324u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3ab328: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ab328u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab32c: 0xc0529d4  jal         func_14A750
    ctx->pc = 0x3AB32Cu;
    SET_GPR_U32(ctx, 31, 0x3AB334u);
    ctx->pc = 0x3AB330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB32Cu;
    // 0x3ab330: 0x24848c10  addiu       $a0, $a0, -0x73F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A750u, 0x3AB32Cu, 0x3AB334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB334u;
label_3ab334:
    // 0x3ab334: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3AB334u;
    {
        const bool branch_taken_0x3ab334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AB338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB334u;
        // 0x3ab338: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab334) {
            ctx->pc = 0x3AB398u;
            goto label_3ab398;
        }
    }
    ctx->pc = 0x3AB33Cu;
    // 0x3ab33c: 0xc0ea8f0  jal         func_3AA3C0
    ctx->pc = 0x3AB33Cu;
    SET_GPR_U32(ctx, 31, 0x3AB344u);
    ctx->pc = 0x3AA3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA3C0u, 0x3AB33Cu, 0x3AB344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB344u;
label_3ab344:
    // 0x3ab344: 0x4400014  bltz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3AB344u;
    {
        const bool branch_taken_0x3ab344 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x3ab344) {
            ctx->pc = 0x3AB398u;
            goto label_3ab398;
        }
    }
    ctx->pc = 0x3AB34Cu;
    // 0x3ab34c: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x3ab34cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x3ab350: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3ab350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3ab354: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3AB354u;
    {
        const bool branch_taken_0x3ab354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB354u;
        // 0x3ab358: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab354) {
            ctx->pc = 0x3AB398u;
            goto label_3ab398;
        }
    }
    ctx->pc = 0x3AB35Cu;
    // 0x3ab35c: 0x0  nop
    ctx->pc = 0x3ab35cu;
    // NOP
label_3ab360:
    // 0x3ab360: 0x82050007  lb          $a1, 0x7($s0)
    ctx->pc = 0x3ab360u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3ab364: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3ab364u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3ab368: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ab368u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab36c: 0xc0528b4  jal         func_14A2D0
    ctx->pc = 0x3AB36Cu;
    SET_GPR_U32(ctx, 31, 0x3AB374u);
    ctx->pc = 0x3AB370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB36Cu;
    // 0x3ab370: 0x24848c10  addiu       $a0, $a0, -0x73F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A2D0u, 0x3AB36Cu, 0x3AB374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB374u;
label_3ab374:
    // 0x3ab374: 0x1c400008  bgtz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3AB374u;
    {
        const bool branch_taken_0x3ab374 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x3AB378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB374u;
        // 0x3ab378: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab374) {
            ctx->pc = 0x3AB398u;
            goto label_3ab398;
        }
    }
    ctx->pc = 0x3AB37Cu;
    // 0x3ab37c: 0xc0ea8f0  jal         func_3AA3C0
    ctx->pc = 0x3AB37Cu;
    SET_GPR_U32(ctx, 31, 0x3AB384u);
    ctx->pc = 0x3AA3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA3C0u, 0x3AB37Cu, 0x3AB384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB384u;
label_3ab384:
    // 0x3ab384: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AB384u;
    {
        const bool branch_taken_0x3ab384 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x3ab384) {
            ctx->pc = 0x3AB398u;
            goto label_3ab398;
        }
    }
    ctx->pc = 0x3AB38Cu;
    // 0x3ab38c: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x3ab38cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ab390: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3AB390u;
    {
        const bool branch_taken_0x3ab390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB390u;
        // 0x3ab394: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab390) {
            ctx->pc = 0x3AB3A0u;
            goto label_3ab3a0;
        }
    }
    ctx->pc = 0x3AB398u;
label_3ab398:
    // 0x3ab398: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ab398u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab39c: 0x0  nop
    ctx->pc = 0x3ab39cu;
    // NOP
label_3ab3a0:
    // 0x3ab3a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ab3a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ab3a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ab3a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ab3a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3AB3A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AB3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB3A8u;
        // 0x3ab3ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AB3A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AB3B0u;
}
