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

// Function: sub_003300F0
// Address: 0x3300f0 - 0x3302e0
void sub_003300F0_0x3300f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003300F0_0x3300f0");
#endif

    switch (ctx->pc) {
        case 0x33013cu: goto label_33013c;
        case 0x330154u: goto label_330154;
        case 0x330188u: goto label_330188;
        case 0x33019cu: goto label_33019c;
        case 0x330294u: goto label_330294;
        case 0x3302c8u: goto label_3302c8;
        default: break;
    }

    ctx->pc = 0x3300f0u;

    // 0x3300f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3300f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3300f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3300f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3300f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3300f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3300fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3300fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x330100: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x330100u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330104: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x330104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x330108: 0x90840014  lbu         $a0, 0x14($a0)
    ctx->pc = 0x330108u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x33010c: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x33010Cu;
    {
        const bool branch_taken_0x33010c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x330110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33010Cu;
        // 0x330110: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33010c) {
            ctx->pc = 0x330160u;
            goto label_330160;
        }
    }
    ctx->pc = 0x330114u;
    // 0x330114: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x330114u;
    {
        const bool branch_taken_0x330114 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x330114) {
            ctx->pc = 0x330148u;
            goto label_330148;
        }
    }
    ctx->pc = 0x33011Cu;
    // 0x33011c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33011Cu;
    {
        const bool branch_taken_0x33011c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x33011c) {
            ctx->pc = 0x330130u;
            goto label_330130;
        }
    }
    ctx->pc = 0x330124u;
    // 0x330124: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x330124u;
    {
        const bool branch_taken_0x330124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x330124) {
            ctx->pc = 0x3301A0u;
            goto label_3301a0;
        }
    }
    ctx->pc = 0x33012Cu;
    // 0x33012c: 0x0  nop
    ctx->pc = 0x33012cu;
    // NOP
label_330130:
    // 0x330130: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x330130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330134: 0xc0ed6c8  jal         func_3B5B20
    ctx->pc = 0x330134u;
    SET_GPR_U32(ctx, 31, 0x33013Cu);
    ctx->pc = 0x330138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330134u;
    // 0x330138: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5B20u, 0x330134u, 0x33013Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33013Cu;
label_33013c:
    // 0x33013c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x33013Cu;
    {
        const bool branch_taken_0x33013c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33013c) {
            ctx->pc = 0x3301A0u;
            goto label_3301a0;
        }
    }
    ctx->pc = 0x330144u;
    // 0x330144: 0x0  nop
    ctx->pc = 0x330144u;
    // NOP
label_330148:
    // 0x330148: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x330148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33014c: 0xc0ed6c8  jal         func_3B5B20
    ctx->pc = 0x33014Cu;
    SET_GPR_U32(ctx, 31, 0x330154u);
    ctx->pc = 0x330150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33014Cu;
    // 0x330150: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5B20u, 0x33014Cu, 0x330154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330154u;
label_330154:
    // 0x330154: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x330154u;
    {
        const bool branch_taken_0x330154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x330154) {
            ctx->pc = 0x3301A0u;
            goto label_3301a0;
        }
    }
    ctx->pc = 0x33015Cu;
    // 0x33015c: 0x0  nop
    ctx->pc = 0x33015cu;
    // NOP
label_330160:
    // 0x330160: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x330160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x330164: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x330164u;
    {
        const bool branch_taken_0x330164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x330164) {
            ctx->pc = 0x330190u;
            goto label_330190;
        }
    }
    ctx->pc = 0x33016Cu;
    // 0x33016c: 0x90430008  lbu         $v1, 0x8($v0)
    ctx->pc = 0x33016cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x330170: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x330170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x330174: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x330174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x330178: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x330178u;
    {
        const bool branch_taken_0x330178 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x33017Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330178u;
        // 0x33017c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330178) {
            ctx->pc = 0x330190u;
            goto label_330190;
        }
    }
    ctx->pc = 0x330180u;
    // 0x330180: 0xc0ed6c8  jal         func_3B5B20
    ctx->pc = 0x330180u;
    SET_GPR_U32(ctx, 31, 0x330188u);
    ctx->pc = 0x330184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330180u;
    // 0x330184: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5B20u, 0x330180u, 0x330188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330188u;
label_330188:
    // 0x330188: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x330188u;
    {
        const bool branch_taken_0x330188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x330188) {
            ctx->pc = 0x3301A0u;
            goto label_3301a0;
        }
    }
    ctx->pc = 0x330190u;
label_330190:
    // 0x330190: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x330190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330194: 0xc0ed6c8  jal         func_3B5B20
    ctx->pc = 0x330194u;
    SET_GPR_U32(ctx, 31, 0x33019Cu);
    ctx->pc = 0x330198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330194u;
    // 0x330198: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5B20u, 0x330194u, 0x33019Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33019Cu;
label_33019c:
    // 0x33019c: 0x0  nop
    ctx->pc = 0x33019cu;
    // NOP
label_3301a0:
    // 0x3301a0: 0xa200001c  sb          $zero, 0x1C($s0)
    ctx->pc = 0x3301a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x3301a4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3301a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3301a8: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x3301a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x3301ac: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3301acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3301b0: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x3301b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x3301b4: 0x10800046  beqz        $a0, . + 4 + (0x46 << 2)
    ctx->pc = 0x3301B4u;
    {
        const bool branch_taken_0x3301b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3301b4) {
            ctx->pc = 0x3302D0u;
            goto label_3302d0;
        }
    }
    ctx->pc = 0x3301BCu;
    // 0x3301bc: 0x86030024  lh          $v1, 0x24($s0)
    ctx->pc = 0x3301bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3301c0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3301C0u;
    {
        const bool branch_taken_0x3301c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3301c0) {
            ctx->pc = 0x3301D8u;
            goto label_3301d8;
        }
    }
    ctx->pc = 0x3301C8u;
    // 0x3301c8: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3301c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3301cc: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x3301CCu;
    {
        const bool branch_taken_0x3301cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3301D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3301CCu;
        // 0x3301d0: 0xa203001c  sb          $v1, 0x1C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 28), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3301cc) {
            ctx->pc = 0x3302D0u;
            goto label_3302d0;
        }
    }
    ctx->pc = 0x3301D4u;
    // 0x3301d4: 0x0  nop
    ctx->pc = 0x3301d4u;
    // NOP
label_3301d8:
    // 0x3301d8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x3301d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x3301dc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3301DCu;
    {
        const bool branch_taken_0x3301dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3301dc) {
            ctx->pc = 0x3301F0u;
            goto label_3301f0;
        }
    }
    ctx->pc = 0x3301E4u;
    // 0x3301e4: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x3301e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x3301e8: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x3301E8u;
    {
        const bool branch_taken_0x3301e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3301ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3301E8u;
        // 0x3301ec: 0xa203001c  sb          $v1, 0x1C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 28), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3301e8) {
            ctx->pc = 0x3302D0u;
            goto label_3302d0;
        }
    }
    ctx->pc = 0x3301F0u;
label_3301f0:
    // 0x3301f0: 0x90630008  lbu         $v1, 0x8($v1)
    ctx->pc = 0x3301f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3301f4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3301f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3301f8: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x3301f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x3301fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3301fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x330200: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x330200u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x330204: 0xa203001c  sb          $v1, 0x1C($s0)
    ctx->pc = 0x330204u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 28), (uint8_t)GPR_U32(ctx, 3));
    // 0x330208: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x330208u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33020c: 0x10660004  beq         $v1, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x33020Cu;
    {
        const bool branch_taken_0x33020c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x33020c) {
            ctx->pc = 0x330220u;
            goto label_330220;
        }
    }
    ctx->pc = 0x330214u;
    // 0x330214: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x330214u;
    {
        const bool branch_taken_0x330214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x330214) {
            ctx->pc = 0x3302A0u;
            goto label_3302a0;
        }
    }
    ctx->pc = 0x33021Cu;
    // 0x33021c: 0x0  nop
    ctx->pc = 0x33021cu;
    // NOP
label_330220:
    // 0x330220: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x330220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x330224: 0x90630008  lbu         $v1, 0x8($v1)
    ctx->pc = 0x330224u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x330228: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x330228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x33022c: 0x14600028  bnez        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x33022Cu;
    {
        const bool branch_taken_0x33022c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x330230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33022Cu;
        // 0x330230: 0x3c010092  lui         $at, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33022c) {
            ctx->pc = 0x3302D0u;
            goto label_3302d0;
        }
    }
    ctx->pc = 0x330234u;
    // 0x330234: 0x3c050092  lui         $a1, 0x92
    ctx->pc = 0x330234u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)146 << 16));
    // 0x330238: 0x8027172e  lb          $a3, 0x172E($at)
    ctx->pc = 0x330238u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 5934)));
    // 0x33023c: 0x24a515bd  addiu       $a1, $a1, 0x15BD
    ctx->pc = 0x33023cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5565));
    // 0x330240: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x330240u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x330244: 0x24841400  addiu       $a0, $a0, 0x1400
    ctx->pc = 0x330244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5120));
    // 0x330248: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x330248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x33024c: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x33024cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x330250: 0x90a70000  lbu         $a3, 0x0($a1)
    ctx->pc = 0x330250u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x330254: 0x80231733  lb          $v1, 0x1733($at)
    ctx->pc = 0x330254u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x921733u));
    // 0x330258: 0x728c0  sll         $a1, $a3, 3
    ctx->pc = 0x330258u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x33025c: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x33025cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x330260: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x330260u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x330264: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x330264u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x330268: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x330268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x33026c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33026cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x330270: 0x8c6301d0  lw          $v1, 0x1D0($v1)
    ctx->pc = 0x330270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 464)));
    // 0x330274: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x330274u;
    {
        const bool branch_taken_0x330274 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x330274) {
            ctx->pc = 0x3302D0u;
            goto label_3302d0;
        }
    }
    ctx->pc = 0x33027Cu;
    // 0x33027c: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x33027cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x330280: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x330280u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x330284: 0xa202001c  sb          $v0, 0x1C($s0)
    ctx->pc = 0x330284u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 28), (uint8_t)GPR_U32(ctx, 2));
    // 0x330288: 0x94650004  lhu         $a1, 0x4($v1)
    ctx->pc = 0x330288u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x33028c: 0xc0bd1d0  jal         func_2F4740
    ctx->pc = 0x33028Cu;
    SET_GPR_U32(ctx, 31, 0x330294u);
    ctx->pc = 0x330290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33028Cu;
    // 0x330290: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4740u, 0x33028Cu, 0x330294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330294u;
label_330294:
    // 0x330294: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x330294u;
    {
        const bool branch_taken_0x330294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330294u;
        // 0x330298: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330294) {
            ctx->pc = 0x3302D0u;
            goto label_3302d0;
        }
    }
    ctx->pc = 0x33029Cu;
    // 0x33029c: 0x0  nop
    ctx->pc = 0x33029cu;
    // NOP
label_3302a0:
    // 0x3302a0: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x3302a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x3302a4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3302A4u;
    {
        const bool branch_taken_0x3302a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3302a4) {
            ctx->pc = 0x3302D0u;
            goto label_3302d0;
        }
    }
    ctx->pc = 0x3302ACu;
    // 0x3302ac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3302acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3302b0: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x3302b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x3302b4: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x3302b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    // 0x3302b8: 0x94450004  lhu         $a1, 0x4($v0)
    ctx->pc = 0x3302b8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3302bc: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3302bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3302c0: 0xc0bd1d0  jal         func_2F4740
    ctx->pc = 0x3302C0u;
    SET_GPR_U32(ctx, 31, 0x3302C8u);
    ctx->pc = 0x3302C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3302C0u;
    // 0x3302c4: 0x30460001  andi        $a2, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4740u, 0x3302C0u, 0x3302C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3302C8u;
label_3302c8:
    // 0x3302c8: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x3302c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x3302cc: 0x0  nop
    ctx->pc = 0x3302ccu;
    // NOP
label_3302d0:
    // 0x3302d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3302d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3302d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3302d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3302d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3302D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3302DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3302D8u;
        // 0x3302dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3302D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3302E0u;
}
