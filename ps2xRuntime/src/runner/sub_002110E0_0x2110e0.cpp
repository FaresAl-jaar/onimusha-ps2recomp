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

// Function: sub_002110E0
// Address: 0x2110e0 - 0x2111b8
void sub_002110E0_0x2110e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002110E0_0x2110e0");
#endif

    switch (ctx->pc) {
        case 0x211128u: goto label_211128;
        case 0x211138u: goto label_211138;
        case 0x21114cu: goto label_21114c;
        default: break;
    }

    ctx->pc = 0x2110e0u;

    // 0x2110e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2110e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2110e4: 0x3c020088  lui         $v0, 0x88
    ctx->pc = 0x2110e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)136 << 16));
    // 0x2110e8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2110e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2110ec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2110ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2110f0: 0x2a030801  slti        $v1, $s0, 0x801
    ctx->pc = 0x2110f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2049) ? 1 : 0);
    // 0x2110f4: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x2110f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2110f8: 0xa3800a  movz        $s0, $a1, $v1
    ctx->pc = 0x2110f8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 5));
    // 0x2110fc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2110fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211100: 0x2442fb78  addiu       $v0, $v0, -0x488
    ctx->pc = 0x211100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966136));
    // 0x211104: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x211104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x211108: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21110c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x21110cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211110: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x211110u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211114: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x211114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x211118: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x211118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x21111c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x21111cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x211120: 0xc049522  jal         func_125488
    ctx->pc = 0x211120u;
    SET_GPR_U32(ctx, 31, 0x211128u);
    ctx->pc = 0x211124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211120u;
    // 0x211124: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x211120u, 0x211128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211128u;
label_211128:
    // 0x211128: 0x1a00001c  blez        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x211128u;
    {
        const bool branch_taken_0x211128 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x21112Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211128u;
        // 0x21112c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211128) {
            ctx->pc = 0x21119Cu;
            goto label_21119c;
        }
    }
    ctx->pc = 0x211130u;
    // 0x211130: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x211130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x211134: 0x24538728  addiu       $s3, $v0, -0x78D8
    ctx->pc = 0x211134u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936360));
label_211138:
    // 0x211138: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x211138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21113c: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x21113cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x211140: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x211140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211144: 0xc0832d0  jal         func_20CB40
    ctx->pc = 0x211144u;
    SET_GPR_U32(ctx, 31, 0x21114Cu);
    ctx->pc = 0x211148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211144u;
    // 0x211148: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20CB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20CB40u, 0x211144u, 0x21114Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21114Cu;
label_21114c:
    // 0x21114c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x21114Cu;
    {
        const bool branch_taken_0x21114c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21114Cu;
        // 0x211150: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21114c) {
            ctx->pc = 0x211190u;
            goto label_211190;
        }
    }
    ctx->pc = 0x211154u;
    // 0x211154: 0xae53000c  sw          $s3, 0xC($s2)
    ctx->pc = 0x211154u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 19));
    // 0x211158: 0x92230007  lbu         $v1, 0x7($s1)
    ctx->pc = 0x211158u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
    // 0x21115c: 0xa2430028  sb          $v1, 0x28($s2)
    ctx->pc = 0x21115cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 3));
    // 0x211160: 0x92250009  lbu         $a1, 0x9($s1)
    ctx->pc = 0x211160u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x211164: 0x92230008  lbu         $v1, 0x8($s1)
    ctx->pc = 0x211164u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x211168: 0x9224000a  lbu         $a0, 0xA($s1)
    ctx->pc = 0x211168u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x21116c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x21116cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x211170: 0x9226000b  lbu         $a2, 0xB($s1)
    ctx->pc = 0x211170u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11)));
    // 0x211174: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x211174u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x211178: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x211178u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x21117c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x21117cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x211180: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x211180u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x211184: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x211184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x211188: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x211188u;
    {
        const bool branch_taken_0x211188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21118Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211188u;
        // 0x21118c: 0xae43002c  sw          $v1, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211188) {
            ctx->pc = 0x21119Cu;
            goto label_21119c;
        }
    }
    ctx->pc = 0x211190u;
label_211190:
    // 0x211190: 0x1e00ffe9  bgtz        $s0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x211190u;
    {
        const bool branch_taken_0x211190 = (GPR_S64(ctx, 16) > 0);
        ctx->pc = 0x211194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211190u;
        // 0x211194: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211190) {
            ctx->pc = 0x211138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_211138;
        }
    }
    ctx->pc = 0x211198u;
    // 0x211198: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x211198u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21119c:
    // 0x21119c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x21119cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2111a0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2111a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2111a4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2111a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2111a8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2111a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2111ac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2111acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2111b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2111B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2111B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2111B0u;
        // 0x2111b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2111B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2111B8u;
}
