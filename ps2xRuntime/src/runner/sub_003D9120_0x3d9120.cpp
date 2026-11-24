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

// Function: sub_003D9120
// Address: 0x3d9120 - 0x3d922c
void sub_003D9120_0x3d9120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D9120_0x3d9120");
#endif

    switch (ctx->pc) {
        case 0x3d921cu: goto label_3d921c;
        default: break;
    }

    ctx->pc = 0x3d9120u;

    // 0x3d9120: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3d9120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3d9124: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3d9124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3d9128: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d9128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3d912c: 0x90852be1  lbu         $a1, 0x2BE1($a0)
    ctx->pc = 0x3d912cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11233)));
    // 0x3d9130: 0x10a30035  beq         $a1, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x3D9130u;
    {
        const bool branch_taken_0x3d9130 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3D9134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9130u;
        // 0x3d9134: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9130) {
            ctx->pc = 0x3D9208u;
            goto label_3d9208;
        }
    }
    ctx->pc = 0x3D9138u;
    // 0x3d9138: 0x10a60023  beq         $a1, $a2, . + 4 + (0x23 << 2)
    ctx->pc = 0x3D9138u;
    {
        const bool branch_taken_0x3d9138 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x3D913Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9138u;
        // 0x3d913c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9138) {
            ctx->pc = 0x3D91C8u;
            goto label_3d91c8;
        }
    }
    ctx->pc = 0x3D9140u;
    // 0x3d9140: 0x10a30011  beq         $a1, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3D9140u;
    {
        const bool branch_taken_0x3d9140 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d9140) {
            ctx->pc = 0x3D9188u;
            goto label_3d9188;
        }
    }
    ctx->pc = 0x3D9148u;
    // 0x3d9148: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D9148u;
    {
        const bool branch_taken_0x3d9148 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9148) {
            ctx->pc = 0x3D9158u;
            goto label_3d9158;
        }
    }
    ctx->pc = 0x3D9150u;
    // 0x3d9150: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x3D9150u;
    {
        const bool branch_taken_0x3d9150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9150) {
            ctx->pc = 0x3D9220u;
            goto label_3d9220;
        }
    }
    ctx->pc = 0x3D9158u;
label_3d9158:
    // 0x3d9158: 0x240500f4  addiu       $a1, $zero, 0xF4
    ctx->pc = 0x3d9158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
    // 0x3d915c: 0xa0852be4  sb          $a1, 0x2BE4($a0)
    ctx->pc = 0x3d915cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11236), (uint8_t)GPR_U32(ctx, 5));
    // 0x3d9160: 0x24030059  addiu       $v1, $zero, 0x59
    ctx->pc = 0x3d9160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x3d9164: 0xa0862be5  sb          $a2, 0x2BE5($a0)
    ctx->pc = 0x3d9164u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11237), (uint8_t)GPR_U32(ctx, 6));
    // 0x3d9168: 0xa0850780  sb          $a1, 0x780($a0)
    ctx->pc = 0x3d9168u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1920), (uint8_t)GPR_U32(ctx, 5));
    // 0x3d916c: 0xa0802be3  sb          $zero, 0x2BE3($a0)
    ctx->pc = 0x3d916cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11235), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d9170: 0xa4802be6  sh          $zero, 0x2BE6($a0)
    ctx->pc = 0x3d9170u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11238), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d9174: 0xa4802bea  sh          $zero, 0x2BEA($a0)
    ctx->pc = 0x3d9174u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11242), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d9178: 0xa4832be8  sh          $v1, 0x2BE8($a0)
    ctx->pc = 0x3d9178u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11240), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d917c: 0x90832be1  lbu         $v1, 0x2BE1($a0)
    ctx->pc = 0x3d917cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11233)));
    // 0x3d9180: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d9180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d9184: 0xa0832be1  sb          $v1, 0x2BE1($a0)
    ctx->pc = 0x3d9184u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11233), (uint8_t)GPR_U32(ctx, 3));
label_3d9188:
    // 0x3d9188: 0x90832be3  lbu         $v1, 0x2BE3($a0)
    ctx->pc = 0x3d9188u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11235)));
    // 0x3d918c: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x3D918Cu;
    {
        const bool branch_taken_0x3d918c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D918Cu;
        // 0x3d9190: 0x240600f3  addiu       $a2, $zero, 0xF3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 243));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d918c) {
            ctx->pc = 0x3D9220u;
            goto label_3d9220;
        }
    }
    ctx->pc = 0x3D9194u;
    // 0x3d9194: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x3d9194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x3d9198: 0xa0862be4  sb          $a2, 0x2BE4($a0)
    ctx->pc = 0x3d9198u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11236), (uint8_t)GPR_U32(ctx, 6));
    // 0x3d919c: 0x2403003b  addiu       $v1, $zero, 0x3B
    ctx->pc = 0x3d919cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x3d91a0: 0xa0802be5  sb          $zero, 0x2BE5($a0)
    ctx->pc = 0x3d91a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11237), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d91a4: 0xa0860780  sb          $a2, 0x780($a0)
    ctx->pc = 0x3d91a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1920), (uint8_t)GPR_U32(ctx, 6));
    // 0x3d91a8: 0xa0802be3  sb          $zero, 0x2BE3($a0)
    ctx->pc = 0x3d91a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11235), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d91ac: 0xa4852be6  sh          $a1, 0x2BE6($a0)
    ctx->pc = 0x3d91acu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11238), (uint16_t)GPR_U32(ctx, 5));
    // 0x3d91b0: 0xa4802bea  sh          $zero, 0x2BEA($a0)
    ctx->pc = 0x3d91b0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11242), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d91b4: 0xa4832be8  sh          $v1, 0x2BE8($a0)
    ctx->pc = 0x3d91b4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11240), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d91b8: 0x90832be1  lbu         $v1, 0x2BE1($a0)
    ctx->pc = 0x3d91b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11233)));
    // 0x3d91bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d91bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d91c0: 0xa0832be1  sb          $v1, 0x2BE1($a0)
    ctx->pc = 0x3d91c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11233), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d91c4: 0x0  nop
    ctx->pc = 0x3d91c4u;
    // NOP
label_3d91c8:
    // 0x3d91c8: 0x90832be3  lbu         $v1, 0x2BE3($a0)
    ctx->pc = 0x3d91c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11235)));
    // 0x3d91cc: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3D91CCu;
    {
        const bool branch_taken_0x3d91cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D91D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D91CCu;
        // 0x3d91d0: 0x240600f5  addiu       $a2, $zero, 0xF5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d91cc) {
            ctx->pc = 0x3D9220u;
            goto label_3d9220;
        }
    }
    ctx->pc = 0x3D91D4u;
    // 0x3d91d4: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x3d91d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x3d91d8: 0xa0862be4  sb          $a2, 0x2BE4($a0)
    ctx->pc = 0x3d91d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11236), (uint8_t)GPR_U32(ctx, 6));
    // 0x3d91dc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3d91dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3d91e0: 0xa0802be5  sb          $zero, 0x2BE5($a0)
    ctx->pc = 0x3d91e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11237), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d91e4: 0xa0860780  sb          $a2, 0x780($a0)
    ctx->pc = 0x3d91e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1920), (uint8_t)GPR_U32(ctx, 6));
    // 0x3d91e8: 0xa0802be3  sb          $zero, 0x2BE3($a0)
    ctx->pc = 0x3d91e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11235), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d91ec: 0xa4852be6  sh          $a1, 0x2BE6($a0)
    ctx->pc = 0x3d91ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11238), (uint16_t)GPR_U32(ctx, 5));
    // 0x3d91f0: 0xa4832bea  sh          $v1, 0x2BEA($a0)
    ctx->pc = 0x3d91f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11242), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d91f4: 0xa4802be8  sh          $zero, 0x2BE8($a0)
    ctx->pc = 0x3d91f4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11240), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d91f8: 0x90832be1  lbu         $v1, 0x2BE1($a0)
    ctx->pc = 0x3d91f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11233)));
    // 0x3d91fc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d91fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d9200: 0xa0832be1  sb          $v1, 0x2BE1($a0)
    ctx->pc = 0x3d9200u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11233), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d9204: 0x0  nop
    ctx->pc = 0x3d9204u;
    // NOP
label_3d9208:
    // 0x3d9208: 0x90832be3  lbu         $v1, 0x2BE3($a0)
    ctx->pc = 0x3d9208u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11235)));
    // 0x3d920c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D920Cu;
    {
        const bool branch_taken_0x3d920c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d920c) {
            ctx->pc = 0x3D9220u;
            goto label_3d9220;
        }
    }
    ctx->pc = 0x3D9214u;
    // 0x3d9214: 0xc0f6180  jal         func_3D8600
    ctx->pc = 0x3D9214u;
    SET_GPR_U32(ctx, 31, 0x3D921Cu);
    ctx->pc = 0x3D8600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8600u, 0x3D9214u, 0x3D921Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D921Cu;
label_3d921c:
    // 0x3d921c: 0x0  nop
    ctx->pc = 0x3d921cu;
    // NOP
label_3d9220:
    // 0x3d9220: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d9220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d9224: 0x3e00008  jr          $ra
    ctx->pc = 0x3D9224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D9228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9224u;
        // 0x3d9228: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D922Cu;
}
