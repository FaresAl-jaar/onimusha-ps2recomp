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

// Function: sub_003D9230
// Address: 0x3d9230 - 0x3d95b8
void sub_003D9230_0x3d9230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D9230_0x3d9230");
#endif

    switch (ctx->pc) {
        case 0x3d92b4u: goto label_3d92b4;
        case 0x3d9474u: goto label_3d9474;
        case 0x3d9564u: goto label_3d9564;
        case 0x3d9598u: goto label_3d9598;
        case 0x3d95a8u: goto label_3d95a8;
        default: break;
    }

    ctx->pc = 0x3d9230u;

    // 0x3d9230: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d9230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d9234: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d9234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3d9238: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d9238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d923c: 0x90832be1  lbu         $v1, 0x2BE1($a0)
    ctx->pc = 0x3d923cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11233)));
    // 0x3d9240: 0x2c61000c  sltiu       $at, $v1, 0xC
    ctx->pc = 0x3d9240u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x3d9244: 0x102000d8  beqz        $at, . + 4 + (0xD8 << 2)
    ctx->pc = 0x3D9244u;
    {
        const bool branch_taken_0x3d9244 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9244u;
        // 0x3d9248: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9244) {
            ctx->pc = 0x3D95A8u;
            goto label_3d95a8;
        }
    }
    ctx->pc = 0x3D924Cu;
    // 0x3d924c: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x3d924cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x3d9250: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3d9250u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3d9254: 0x24844740  addiu       $a0, $a0, 0x4740
    ctx->pc = 0x3d9254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18240));
    // 0x3d9258: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3d9258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3d925c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3d925cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d9260: 0x600008  jr          $v1
    ctx->pc = 0x3D9260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3D9268u: goto label_3d9268;
            case 0x3D92A0u: goto label_3d92a0;
            case 0x3D92F0u: goto label_3d92f0;
            case 0x3D9338u: goto label_3d9338;
            case 0x3D9380u: goto label_3d9380;
            case 0x3D93C8u: goto label_3d93c8;
            case 0x3D9410u: goto label_3d9410;
            case 0x3D9458u: goto label_3d9458;
            case 0x3D94A8u: goto label_3d94a8;
            case 0x3D94E8u: goto label_3d94e8;
            case 0x3D9550u: goto label_3d9550;
            case 0x3D9590u: goto label_3d9590;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9260u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3D9268u;
label_3d9268:
    // 0x3d9268: 0x92042bdb  lbu         $a0, 0x2BDB($s0)
    ctx->pc = 0x3d9268u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11227)));
    // 0x3d926c: 0x240300f2  addiu       $v1, $zero, 0xF2
    ctx->pc = 0x3d926cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 242));
    // 0x3d9270: 0x308400df  andi        $a0, $a0, 0xDF
    ctx->pc = 0x3d9270u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)223);
    // 0x3d9274: 0xa2042bdb  sb          $a0, 0x2BDB($s0)
    ctx->pc = 0x3d9274u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11227), (uint8_t)GPR_U32(ctx, 4));
    // 0x3d9278: 0xa2032be4  sb          $v1, 0x2BE4($s0)
    ctx->pc = 0x3d9278u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11236), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d927c: 0xa2002be5  sb          $zero, 0x2BE5($s0)
    ctx->pc = 0x3d927cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11237), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d9280: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3d9280u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d9284: 0xa2002be3  sb          $zero, 0x2BE3($s0)
    ctx->pc = 0x3d9284u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11235), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d9288: 0xa6002be6  sh          $zero, 0x2BE6($s0)
    ctx->pc = 0x3d9288u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11238), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d928c: 0xa6002bea  sh          $zero, 0x2BEA($s0)
    ctx->pc = 0x3d928cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11242), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d9290: 0xa6002be8  sh          $zero, 0x2BE8($s0)
    ctx->pc = 0x3d9290u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11240), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d9294: 0x92032be1  lbu         $v1, 0x2BE1($s0)
    ctx->pc = 0x3d9294u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11233)));
    // 0x3d9298: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d9298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d929c: 0xa2032be1  sb          $v1, 0x2BE1($s0)
    ctx->pc = 0x3d929cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11233), (uint8_t)GPR_U32(ctx, 3));
label_3d92a0:
    // 0x3d92a0: 0x92032be3  lbu         $v1, 0x2BE3($s0)
    ctx->pc = 0x3d92a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11235)));
    // 0x3d92a4: 0x106000c0  beqz        $v1, . + 4 + (0xC0 << 2)
    ctx->pc = 0x3D92A4u;
    {
        const bool branch_taken_0x3d92a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D92A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D92A4u;
        // 0x3d92a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d92a4) {
            ctx->pc = 0x3D95A8u;
            goto label_3d95a8;
        }
    }
    ctx->pc = 0x3D92ACu;
    // 0x3d92ac: 0xc0f6c90  jal         func_3DB240
    ctx->pc = 0x3D92ACu;
    SET_GPR_U32(ctx, 31, 0x3D92B4u);
    ctx->pc = 0x3DB240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB240u, 0x3D92ACu, 0x3D92B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D92B4u;
label_3d92b4:
    // 0x3d92b4: 0x240500f3  addiu       $a1, $zero, 0xF3
    ctx->pc = 0x3d92b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 243));
    // 0x3d92b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d92b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d92bc: 0xa2052be4  sb          $a1, 0x2BE4($s0)
    ctx->pc = 0x3d92bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11236), (uint8_t)GPR_U32(ctx, 5));
    // 0x3d92c0: 0x2404001d  addiu       $a0, $zero, 0x1D
    ctx->pc = 0x3d92c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x3d92c4: 0xa2032be5  sb          $v1, 0x2BE5($s0)
    ctx->pc = 0x3d92c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11237), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d92c8: 0xa2050780  sb          $a1, 0x780($s0)
    ctx->pc = 0x3d92c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 5));
    // 0x3d92cc: 0x2403003b  addiu       $v1, $zero, 0x3B
    ctx->pc = 0x3d92ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x3d92d0: 0xa2002be3  sb          $zero, 0x2BE3($s0)
    ctx->pc = 0x3d92d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11235), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d92d4: 0xa6042be6  sh          $a0, 0x2BE6($s0)
    ctx->pc = 0x3d92d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11238), (uint16_t)GPR_U32(ctx, 4));
    // 0x3d92d8: 0xa6002bea  sh          $zero, 0x2BEA($s0)
    ctx->pc = 0x3d92d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11242), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d92dc: 0xa6032be8  sh          $v1, 0x2BE8($s0)
    ctx->pc = 0x3d92dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11240), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d92e0: 0x92032be1  lbu         $v1, 0x2BE1($s0)
    ctx->pc = 0x3d92e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11233)));
    // 0x3d92e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d92e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d92e8: 0xa2032be1  sb          $v1, 0x2BE1($s0)
    ctx->pc = 0x3d92e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11233), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d92ec: 0x0  nop
    ctx->pc = 0x3d92ecu;
    // NOP
label_3d92f0:
    // 0x3d92f0: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x3d92f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x3d92f4: 0xa60307f0  sh          $v1, 0x7F0($s0)
    ctx->pc = 0x3d92f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2032), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d92f8: 0x92032be3  lbu         $v1, 0x2BE3($s0)
    ctx->pc = 0x3d92f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11235)));
    // 0x3d92fc: 0x106000aa  beqz        $v1, . + 4 + (0xAA << 2)
    ctx->pc = 0x3D92FCu;
    {
        const bool branch_taken_0x3d92fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D92FCu;
        // 0x3d9300: 0x240500f4  addiu       $a1, $zero, 0xF4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d92fc) {
            ctx->pc = 0x3D95A8u;
            goto label_3d95a8;
        }
    }
    ctx->pc = 0x3D9304u;
    // 0x3d9304: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d9304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d9308: 0xa2052be4  sb          $a1, 0x2BE4($s0)
    ctx->pc = 0x3d9308u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11236), (uint8_t)GPR_U32(ctx, 5));
    // 0x3d930c: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x3d930cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x3d9310: 0xa2032be5  sb          $v1, 0x2BE5($s0)
    ctx->pc = 0x3d9310u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11237), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d9314: 0xa2050780  sb          $a1, 0x780($s0)
    ctx->pc = 0x3d9314u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 5));
    // 0x3d9318: 0x2403003b  addiu       $v1, $zero, 0x3B
    ctx->pc = 0x3d9318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x3d931c: 0xa2002be3  sb          $zero, 0x2BE3($s0)
    ctx->pc = 0x3d931cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11235), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d9320: 0xa6042be6  sh          $a0, 0x2BE6($s0)
    ctx->pc = 0x3d9320u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11238), (uint16_t)GPR_U32(ctx, 4));
    // 0x3d9324: 0xa6002bea  sh          $zero, 0x2BEA($s0)
    ctx->pc = 0x3d9324u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11242), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d9328: 0xa6032be8  sh          $v1, 0x2BE8($s0)
    ctx->pc = 0x3d9328u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11240), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d932c: 0x92032be1  lbu         $v1, 0x2BE1($s0)
    ctx->pc = 0x3d932cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11233)));
    // 0x3d9330: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d9330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d9334: 0xa2032be1  sb          $v1, 0x2BE1($s0)
    ctx->pc = 0x3d9334u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11233), (uint8_t)GPR_U32(ctx, 3));
label_3d9338:
    // 0x3d9338: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x3d9338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x3d933c: 0xa60307f0  sh          $v1, 0x7F0($s0)
    ctx->pc = 0x3d933cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2032), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d9340: 0x92032be3  lbu         $v1, 0x2BE3($s0)
    ctx->pc = 0x3d9340u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11235)));
    // 0x3d9344: 0x10600098  beqz        $v1, . + 4 + (0x98 << 2)
    ctx->pc = 0x3D9344u;
    {
        const bool branch_taken_0x3d9344 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9344u;
        // 0x3d9348: 0x240500f3  addiu       $a1, $zero, 0xF3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 243));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9344) {
            ctx->pc = 0x3D95A8u;
            goto label_3d95a8;
        }
    }
    ctx->pc = 0x3D934Cu;
    // 0x3d934c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d934cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d9350: 0xa2052be4  sb          $a1, 0x2BE4($s0)
    ctx->pc = 0x3d9350u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11236), (uint8_t)GPR_U32(ctx, 5));
    // 0x3d9354: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x3d9354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x3d9358: 0xa2032be5  sb          $v1, 0x2BE5($s0)
    ctx->pc = 0x3d9358u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11237), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d935c: 0xa2050780  sb          $a1, 0x780($s0)
    ctx->pc = 0x3d935cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 5));
    // 0x3d9360: 0x2403003b  addiu       $v1, $zero, 0x3B
    ctx->pc = 0x3d9360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x3d9364: 0xa2002be3  sb          $zero, 0x2BE3($s0)
    ctx->pc = 0x3d9364u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11235), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d9368: 0xa6042be6  sh          $a0, 0x2BE6($s0)
    ctx->pc = 0x3d9368u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11238), (uint16_t)GPR_U32(ctx, 4));
    // 0x3d936c: 0xa6002bea  sh          $zero, 0x2BEA($s0)
    ctx->pc = 0x3d936cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11242), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d9370: 0xa6032be8  sh          $v1, 0x2BE8($s0)
    ctx->pc = 0x3d9370u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11240), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d9374: 0x92032be1  lbu         $v1, 0x2BE1($s0)
    ctx->pc = 0x3d9374u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11233)));
    // 0x3d9378: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d9378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d937c: 0xa2032be1  sb          $v1, 0x2BE1($s0)
    ctx->pc = 0x3d937cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11233), (uint8_t)GPR_U32(ctx, 3));
label_3d9380:
    // 0x3d9380: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x3d9380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x3d9384: 0xa60307f0  sh          $v1, 0x7F0($s0)
    ctx->pc = 0x3d9384u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2032), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d9388: 0x92032be3  lbu         $v1, 0x2BE3($s0)
    ctx->pc = 0x3d9388u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11235)));
    // 0x3d938c: 0x10600086  beqz        $v1, . + 4 + (0x86 << 2)
    ctx->pc = 0x3D938Cu;
    {
        const bool branch_taken_0x3d938c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D938Cu;
        // 0x3d9390: 0x240500f4  addiu       $a1, $zero, 0xF4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d938c) {
            ctx->pc = 0x3D95A8u;
            goto label_3d95a8;
        }
    }
    ctx->pc = 0x3D9394u;
    // 0x3d9394: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d9394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d9398: 0xa2052be4  sb          $a1, 0x2BE4($s0)
    ctx->pc = 0x3d9398u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11236), (uint8_t)GPR_U32(ctx, 5));
    // 0x3d939c: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x3d939cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x3d93a0: 0xa2032be5  sb          $v1, 0x2BE5($s0)
    ctx->pc = 0x3d93a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11237), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d93a4: 0xa2050780  sb          $a1, 0x780($s0)
    ctx->pc = 0x3d93a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 5));
    // 0x3d93a8: 0x2403003b  addiu       $v1, $zero, 0x3B
    ctx->pc = 0x3d93a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x3d93ac: 0xa2002be3  sb          $zero, 0x2BE3($s0)
    ctx->pc = 0x3d93acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11235), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d93b0: 0xa6042be6  sh          $a0, 0x2BE6($s0)
    ctx->pc = 0x3d93b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11238), (uint16_t)GPR_U32(ctx, 4));
    // 0x3d93b4: 0xa6002bea  sh          $zero, 0x2BEA($s0)
    ctx->pc = 0x3d93b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11242), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d93b8: 0xa6032be8  sh          $v1, 0x2BE8($s0)
    ctx->pc = 0x3d93b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11240), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d93bc: 0x92032be1  lbu         $v1, 0x2BE1($s0)
    ctx->pc = 0x3d93bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11233)));
    // 0x3d93c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d93c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d93c4: 0xa2032be1  sb          $v1, 0x2BE1($s0)
    ctx->pc = 0x3d93c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11233), (uint8_t)GPR_U32(ctx, 3));
label_3d93c8:
    // 0x3d93c8: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x3d93c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x3d93cc: 0xa60307f0  sh          $v1, 0x7F0($s0)
    ctx->pc = 0x3d93ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2032), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d93d0: 0x92032be3  lbu         $v1, 0x2BE3($s0)
    ctx->pc = 0x3d93d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11235)));
    // 0x3d93d4: 0x10600074  beqz        $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x3D93D4u;
    {
        const bool branch_taken_0x3d93d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D93D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D93D4u;
        // 0x3d93d8: 0x240500f3  addiu       $a1, $zero, 0xF3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 243));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d93d4) {
            ctx->pc = 0x3D95A8u;
            goto label_3d95a8;
        }
    }
    ctx->pc = 0x3D93DCu;
    // 0x3d93dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d93dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d93e0: 0xa2052be4  sb          $a1, 0x2BE4($s0)
    ctx->pc = 0x3d93e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11236), (uint8_t)GPR_U32(ctx, 5));
    // 0x3d93e4: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x3d93e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x3d93e8: 0xa2032be5  sb          $v1, 0x2BE5($s0)
    ctx->pc = 0x3d93e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11237), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d93ec: 0xa2050780  sb          $a1, 0x780($s0)
    ctx->pc = 0x3d93ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 5));
    // 0x3d93f0: 0x2403003b  addiu       $v1, $zero, 0x3B
    ctx->pc = 0x3d93f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x3d93f4: 0xa2002be3  sb          $zero, 0x2BE3($s0)
    ctx->pc = 0x3d93f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11235), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d93f8: 0xa6042be6  sh          $a0, 0x2BE6($s0)
    ctx->pc = 0x3d93f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11238), (uint16_t)GPR_U32(ctx, 4));
    // 0x3d93fc: 0xa6002bea  sh          $zero, 0x2BEA($s0)
    ctx->pc = 0x3d93fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11242), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d9400: 0xa6032be8  sh          $v1, 0x2BE8($s0)
    ctx->pc = 0x3d9400u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11240), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d9404: 0x92032be1  lbu         $v1, 0x2BE1($s0)
    ctx->pc = 0x3d9404u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11233)));
    // 0x3d9408: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d9408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d940c: 0xa2032be1  sb          $v1, 0x2BE1($s0)
    ctx->pc = 0x3d940cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11233), (uint8_t)GPR_U32(ctx, 3));
label_3d9410:
    // 0x3d9410: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x3d9410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x3d9414: 0xa60307f0  sh          $v1, 0x7F0($s0)
    ctx->pc = 0x3d9414u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2032), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d9418: 0x92032be3  lbu         $v1, 0x2BE3($s0)
    ctx->pc = 0x3d9418u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11235)));
    // 0x3d941c: 0x10600062  beqz        $v1, . + 4 + (0x62 << 2)
    ctx->pc = 0x3D941Cu;
    {
        const bool branch_taken_0x3d941c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D941Cu;
        // 0x3d9420: 0x240500f4  addiu       $a1, $zero, 0xF4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d941c) {
            ctx->pc = 0x3D95A8u;
            goto label_3d95a8;
        }
    }
    ctx->pc = 0x3D9424u;
    // 0x3d9424: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d9424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d9428: 0xa2052be4  sb          $a1, 0x2BE4($s0)
    ctx->pc = 0x3d9428u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11236), (uint8_t)GPR_U32(ctx, 5));
    // 0x3d942c: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x3d942cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x3d9430: 0xa2032be5  sb          $v1, 0x2BE5($s0)
    ctx->pc = 0x3d9430u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11237), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d9434: 0xa2050780  sb          $a1, 0x780($s0)
    ctx->pc = 0x3d9434u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 5));
    // 0x3d9438: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x3d9438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3d943c: 0xa2002be3  sb          $zero, 0x2BE3($s0)
    ctx->pc = 0x3d943cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11235), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d9440: 0xa6042be6  sh          $a0, 0x2BE6($s0)
    ctx->pc = 0x3d9440u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11238), (uint16_t)GPR_U32(ctx, 4));
    // 0x3d9444: 0xa6002bea  sh          $zero, 0x2BEA($s0)
    ctx->pc = 0x3d9444u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11242), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d9448: 0xa6032be8  sh          $v1, 0x2BE8($s0)
    ctx->pc = 0x3d9448u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11240), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d944c: 0x92032be1  lbu         $v1, 0x2BE1($s0)
    ctx->pc = 0x3d944cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11233)));
    // 0x3d9450: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d9450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d9454: 0xa2032be1  sb          $v1, 0x2BE1($s0)
    ctx->pc = 0x3d9454u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11233), (uint8_t)GPR_U32(ctx, 3));
label_3d9458:
    // 0x3d9458: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x3d9458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x3d945c: 0xa60307f0  sh          $v1, 0x7F0($s0)
    ctx->pc = 0x3d945cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2032), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d9460: 0x92032be3  lbu         $v1, 0x2BE3($s0)
    ctx->pc = 0x3d9460u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11235)));
    // 0x3d9464: 0x10600050  beqz        $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x3D9464u;
    {
        const bool branch_taken_0x3d9464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9464u;
        // 0x3d9468: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9464) {
            ctx->pc = 0x3D95A8u;
            goto label_3d95a8;
        }
    }
    ctx->pc = 0x3D946Cu;
    // 0x3d946c: 0xc0f6cac  jal         func_3DB2B0
    ctx->pc = 0x3D946Cu;
    SET_GPR_U32(ctx, 31, 0x3D9474u);
    ctx->pc = 0x3DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB2B0u, 0x3D946Cu, 0x3D9474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9474u;
label_3d9474:
    // 0x3d9474: 0x240500fd  addiu       $a1, $zero, 0xFD
    ctx->pc = 0x3d9474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
    // 0x3d9478: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3d9478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3d947c: 0xa2052be4  sb          $a1, 0x2BE4($s0)
    ctx->pc = 0x3d947cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11236), (uint8_t)GPR_U32(ctx, 5));
    // 0x3d9480: 0x24030037  addiu       $v1, $zero, 0x37
    ctx->pc = 0x3d9480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x3d9484: 0xa2042be5  sb          $a0, 0x2BE5($s0)
    ctx->pc = 0x3d9484u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11237), (uint8_t)GPR_U32(ctx, 4));
    // 0x3d9488: 0xa2050780  sb          $a1, 0x780($s0)
    ctx->pc = 0x3d9488u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 5));
    // 0x3d948c: 0xa2002be3  sb          $zero, 0x2BE3($s0)
    ctx->pc = 0x3d948cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11235), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d9490: 0xa6002be6  sh          $zero, 0x2BE6($s0)
    ctx->pc = 0x3d9490u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11238), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d9494: 0xa6032bea  sh          $v1, 0x2BEA($s0)
    ctx->pc = 0x3d9494u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11242), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d9498: 0xa6002be8  sh          $zero, 0x2BE8($s0)
    ctx->pc = 0x3d9498u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11240), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d949c: 0x92032be1  lbu         $v1, 0x2BE1($s0)
    ctx->pc = 0x3d949cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11233)));
    // 0x3d94a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d94a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d94a4: 0xa2032be1  sb          $v1, 0x2BE1($s0)
    ctx->pc = 0x3d94a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11233), (uint8_t)GPR_U32(ctx, 3));
label_3d94a8:
    // 0x3d94a8: 0x92032be3  lbu         $v1, 0x2BE3($s0)
    ctx->pc = 0x3d94a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11235)));
    // 0x3d94ac: 0x1060003e  beqz        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x3D94ACu;
    {
        const bool branch_taken_0x3d94ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D94B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D94ACu;
        // 0x3d94b0: 0x240500f8  addiu       $a1, $zero, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d94ac) {
            ctx->pc = 0x3D95A8u;
            goto label_3d95a8;
        }
    }
    ctx->pc = 0x3D94B4u;
    // 0x3d94b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d94b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d94b8: 0xa2052be4  sb          $a1, 0x2BE4($s0)
    ctx->pc = 0x3d94b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11236), (uint8_t)GPR_U32(ctx, 5));
    // 0x3d94bc: 0x24040072  addiu       $a0, $zero, 0x72
    ctx->pc = 0x3d94bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x3d94c0: 0xa2032be5  sb          $v1, 0x2BE5($s0)
    ctx->pc = 0x3d94c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11237), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d94c4: 0xa2050780  sb          $a1, 0x780($s0)
    ctx->pc = 0x3d94c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 5));
    // 0x3d94c8: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x3d94c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x3d94cc: 0xa2002be3  sb          $zero, 0x2BE3($s0)
    ctx->pc = 0x3d94ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11235), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d94d0: 0xa6042be6  sh          $a0, 0x2BE6($s0)
    ctx->pc = 0x3d94d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11238), (uint16_t)GPR_U32(ctx, 4));
    // 0x3d94d4: 0xa6032bea  sh          $v1, 0x2BEA($s0)
    ctx->pc = 0x3d94d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11242), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d94d8: 0xa6002be8  sh          $zero, 0x2BE8($s0)
    ctx->pc = 0x3d94d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11240), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d94dc: 0x92032be1  lbu         $v1, 0x2BE1($s0)
    ctx->pc = 0x3d94dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11233)));
    // 0x3d94e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d94e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d94e4: 0xa2032be1  sb          $v1, 0x2BE1($s0)
    ctx->pc = 0x3d94e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11233), (uint8_t)GPR_U32(ctx, 3));
label_3d94e8:
    // 0x3d94e8: 0x92032be3  lbu         $v1, 0x2BE3($s0)
    ctx->pc = 0x3d94e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11235)));
    // 0x3d94ec: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3D94ECu;
    {
        const bool branch_taken_0x3d94ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d94ec) {
            ctx->pc = 0x3D9518u;
            goto label_3d9518;
        }
    }
    ctx->pc = 0x3D94F4u;
    // 0x3d94f4: 0x8e0306ac  lw          $v1, 0x6AC($s0)
    ctx->pc = 0x3d94f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1708)));
    // 0x3d94f8: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x3d94f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x3d94fc: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x3D94FCu;
    {
        const bool branch_taken_0x3d94fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d94fc) {
            ctx->pc = 0x3D95A8u;
            goto label_3d95a8;
        }
    }
    ctx->pc = 0x3D9504u;
    // 0x3d9504: 0x92032bdb  lbu         $v1, 0x2BDB($s0)
    ctx->pc = 0x3d9504u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11227)));
    // 0x3d9508: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x3d9508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x3d950c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x3D950Cu;
    {
        const bool branch_taken_0x3d950c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D950Cu;
        // 0x3d9510: 0xa2032bdb  sb          $v1, 0x2BDB($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11227), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d950c) {
            ctx->pc = 0x3D95A8u;
            goto label_3d95a8;
        }
    }
    ctx->pc = 0x3D9514u;
    // 0x3d9514: 0x0  nop
    ctx->pc = 0x3d9514u;
    // NOP
label_3d9518:
    // 0x3d9518: 0x92042bdb  lbu         $a0, 0x2BDB($s0)
    ctx->pc = 0x3d9518u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11227)));
    // 0x3d951c: 0x240300f6  addiu       $v1, $zero, 0xF6
    ctx->pc = 0x3d951cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
    // 0x3d9520: 0x30840020  andi        $a0, $a0, 0x20
    ctx->pc = 0x3d9520u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
    // 0x3d9524: 0xa2032be4  sb          $v1, 0x2BE4($s0)
    ctx->pc = 0x3d9524u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11236), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d9528: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x3d9528u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3d952c: 0xa2042be5  sb          $a0, 0x2BE5($s0)
    ctx->pc = 0x3d952cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11237), (uint8_t)GPR_U32(ctx, 4));
    // 0x3d9530: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3d9530u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d9534: 0xa2002be3  sb          $zero, 0x2BE3($s0)
    ctx->pc = 0x3d9534u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11235), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d9538: 0xa6002be6  sh          $zero, 0x2BE6($s0)
    ctx->pc = 0x3d9538u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11238), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d953c: 0xa6002bea  sh          $zero, 0x2BEA($s0)
    ctx->pc = 0x3d953cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11242), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d9540: 0xa6002be8  sh          $zero, 0x2BE8($s0)
    ctx->pc = 0x3d9540u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11240), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d9544: 0x92032be1  lbu         $v1, 0x2BE1($s0)
    ctx->pc = 0x3d9544u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11233)));
    // 0x3d9548: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d9548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d954c: 0xa2032be1  sb          $v1, 0x2BE1($s0)
    ctx->pc = 0x3d954cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11233), (uint8_t)GPR_U32(ctx, 3));
label_3d9550:
    // 0x3d9550: 0x92032be3  lbu         $v1, 0x2BE3($s0)
    ctx->pc = 0x3d9550u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11235)));
    // 0x3d9554: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3D9554u;
    {
        const bool branch_taken_0x3d9554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9554u;
        // 0x3d9558: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9554) {
            ctx->pc = 0x3D95A8u;
            goto label_3d95a8;
        }
    }
    ctx->pc = 0x3D955Cu;
    // 0x3d955c: 0xc0f6dd0  jal         func_3DB740
    ctx->pc = 0x3D955Cu;
    SET_GPR_U32(ctx, 31, 0x3D9564u);
    ctx->pc = 0x3D9560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D955Cu;
    // 0x3d9560: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB740u, 0x3D955Cu, 0x3D9564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9564u;
label_3d9564:
    // 0x3d9564: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d9564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d9568: 0xa2022be4  sb          $v0, 0x2BE4($s0)
    ctx->pc = 0x3d9568u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11236), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d956c: 0xa2002be5  sb          $zero, 0x2BE5($s0)
    ctx->pc = 0x3d956cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11237), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d9570: 0xa2020780  sb          $v0, 0x780($s0)
    ctx->pc = 0x3d9570u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d9574: 0xa2002be3  sb          $zero, 0x2BE3($s0)
    ctx->pc = 0x3d9574u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11235), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d9578: 0xa6002be6  sh          $zero, 0x2BE6($s0)
    ctx->pc = 0x3d9578u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11238), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d957c: 0xa6002bea  sh          $zero, 0x2BEA($s0)
    ctx->pc = 0x3d957cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11242), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d9580: 0xa6002be8  sh          $zero, 0x2BE8($s0)
    ctx->pc = 0x3d9580u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11240), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d9584: 0x92022be1  lbu         $v0, 0x2BE1($s0)
    ctx->pc = 0x3d9584u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11233)));
    // 0x3d9588: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d9588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3d958c: 0xa2022be1  sb          $v0, 0x2BE1($s0)
    ctx->pc = 0x3d958cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11233), (uint8_t)GPR_U32(ctx, 2));
label_3d9590:
    // 0x3d9590: 0xc0f6e08  jal         func_3DB820
    ctx->pc = 0x3D9590u;
    SET_GPR_U32(ctx, 31, 0x3D9598u);
    ctx->pc = 0x3D9594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9590u;
    // 0x3d9594: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB820u, 0x3D9590u, 0x3D9598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9598u;
label_3d9598:
    // 0x3d9598: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D9598u;
    {
        const bool branch_taken_0x3d9598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9598u;
        // 0x3d959c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9598) {
            ctx->pc = 0x3D95A8u;
            goto label_3d95a8;
        }
    }
    ctx->pc = 0x3D95A0u;
    // 0x3d95a0: 0xc0f6180  jal         func_3D8600
    ctx->pc = 0x3D95A0u;
    SET_GPR_U32(ctx, 31, 0x3D95A8u);
    ctx->pc = 0x3D8600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8600u, 0x3D95A0u, 0x3D95A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D95A8u;
label_3d95a8:
    // 0x3d95a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d95a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d95ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d95acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d95b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3D95B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D95B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D95B0u;
        // 0x3d95b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D95B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D95B8u;
}
