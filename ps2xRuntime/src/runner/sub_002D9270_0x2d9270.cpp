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

// Function: sub_002D9270
// Address: 0x2d9270 - 0x2d93e4
void sub_002D9270_0x2d9270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9270_0x2d9270");
#endif

    switch (ctx->pc) {
        case 0x2d935cu: goto label_2d935c;
        case 0x2d938cu: goto label_2d938c;
        case 0x2d93bcu: goto label_2d93bc;
        default: break;
    }

    ctx->pc = 0x2d9270u;

    // 0x2d9270: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d9270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d9274: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d9274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d9278: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d9278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d927c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d927cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d9280: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d9280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d9284: 0xac8007a0  sw          $zero, 0x7A0($a0)
    ctx->pc = 0x2d9284u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1952), GPR_U32(ctx, 0));
    // 0x2d9288: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d9288u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d928c: 0xac8007a4  sw          $zero, 0x7A4($a0)
    ctx->pc = 0x2d928cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1956), GPR_U32(ctx, 0));
    // 0x2d9290: 0xac8007a8  sw          $zero, 0x7A8($a0)
    ctx->pc = 0x2d9290u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1960), GPR_U32(ctx, 0));
    // 0x2d9294: 0x90840821  lbu         $a0, 0x821($a0)
    ctx->pc = 0x2d9294u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x2d9298: 0x1083001d  beq         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2D9298u;
    {
        const bool branch_taken_0x2d9298 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d9298) {
            ctx->pc = 0x2D9310u;
            goto label_2d9310;
        }
    }
    ctx->pc = 0x2D92A0u;
    // 0x2d92a0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D92A0u;
    {
        const bool branch_taken_0x2d92a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d92a0) {
            ctx->pc = 0x2D92B0u;
            goto label_2d92b0;
        }
    }
    ctx->pc = 0x2D92A8u;
    // 0x2d92a8: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x2D92A8u;
    {
        const bool branch_taken_0x2d92a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d92a8) {
            ctx->pc = 0x2D93A0u;
            goto label_2d93a0;
        }
    }
    ctx->pc = 0x2D92B0u;
label_2d92b0:
    // 0x2d92b0: 0x9203083b  lbu         $v1, 0x83B($s0)
    ctx->pc = 0x2d92b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2107)));
    // 0x2d92b4: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2d92b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2d92b8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D92B8u;
    {
        const bool branch_taken_0x2d92b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d92b8) {
            ctx->pc = 0x2D92E0u;
            goto label_2d92e0;
        }
    }
    ctx->pc = 0x2D92C0u;
    // 0x2d92c0: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x2d92c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d92c4: 0x2404009d  addiu       $a0, $zero, 0x9D
    ctx->pc = 0x2d92c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
    // 0x2d92c8: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x2d92c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d92cc: 0x3c038004  lui         $v1, 0x8004
    ctx->pc = 0x2d92ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32772 << 16));
    // 0x2d92d0: 0xa60407f2  sh          $a0, 0x7F2($s0)
    ctx->pc = 0x2d92d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x2d92d4: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x2d92d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d92d8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2D92D8u;
    {
        const bool branch_taken_0x2d92d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D92DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D92D8u;
        // 0x2d92dc: 0xae0307ec  sw          $v1, 0x7EC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d92d8) {
            ctx->pc = 0x2D9300u;
            goto label_2d9300;
        }
    }
    ctx->pc = 0x2D92E0u;
label_2d92e0:
    // 0x2d92e0: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x2d92e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d92e4: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x2d92e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d92e8: 0x24030095  addiu       $v1, $zero, 0x95
    ctx->pc = 0x2d92e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
    // 0x2d92ec: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x2d92ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d92f0: 0x3c038004  lui         $v1, 0x8004
    ctx->pc = 0x2d92f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32772 << 16));
    // 0x2d92f4: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x2d92f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d92f8: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x2d92f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x2d92fc: 0x0  nop
    ctx->pc = 0x2d92fcu;
    // NOP
label_2d9300:
    // 0x2d9300: 0xa600082c  sh          $zero, 0x82C($s0)
    ctx->pc = 0x2d9300u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2092), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d9304: 0xa600082a  sh          $zero, 0x82A($s0)
    ctx->pc = 0x2d9304u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2090), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d9308: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d9308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d930c: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x2d930cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_2d9310:
    // 0x2d9310: 0x9603082c  lhu         $v1, 0x82C($s0)
    ctx->pc = 0x2d9310u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2092)));
    // 0x2d9314: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d9314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d9318: 0xa603082c  sh          $v1, 0x82C($s0)
    ctx->pc = 0x2d9318u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2092), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d931c: 0x9603082a  lhu         $v1, 0x82A($s0)
    ctx->pc = 0x2d931cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2090)));
    // 0x2d9320: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2D9320u;
    {
        const bool branch_taken_0x2d9320 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d9320) {
            ctx->pc = 0x2D9390u;
            goto label_2d9390;
        }
    }
    ctx->pc = 0x2D9328u;
    // 0x2d9328: 0x920307d6  lbu         $v1, 0x7D6($s0)
    ctx->pc = 0x2d9328u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2006)));
    // 0x2d932c: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2D932Cu;
    {
        const bool branch_taken_0x2d932c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d932c) {
            ctx->pc = 0x2D9390u;
            goto label_2d9390;
        }
    }
    ctx->pc = 0x2D9334u;
    // 0x2d9334: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2d9334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2d9338: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2d9338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d933c: 0x24426620  addiu       $v0, $v0, 0x6620
    ctx->pc = 0x2d933cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26144));
    // 0x2d9340: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2d9340u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x4E6620u));
    // 0x2d9344: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d9344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d9348: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x2d9348u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x2d934c: 0xa602082a  sh          $v0, 0x82A($s0)
    ctx->pc = 0x2d934cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2090), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d9350: 0x8e110054  lw          $s1, 0x54($s0)
    ctx->pc = 0x2d9350u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2d9354: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x2D9354u;
    SET_GPR_U32(ctx, 31, 0x2D935Cu);
    ctx->pc = 0x2D9358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9354u;
    // 0x2d9358: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x2D9354u, 0x2D935Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D935Cu;
label_2d935c:
    // 0x2d935c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d935cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9360: 0x962300c8  lhu         $v1, 0xC8($s1)
    ctx->pc = 0x2d9360u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 200)));
    // 0x2d9364: 0x962200c4  lhu         $v0, 0xC4($s1)
    ctx->pc = 0x2d9364u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x2d9368: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2d9368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d936c: 0x920508e8  lbu         $a1, 0x8E8($s0)
    ctx->pc = 0x2d936cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x2d9370: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2d9370u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9374: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2d9374u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9378: 0x27a90030  addiu       $t1, $sp, 0x30
    ctx->pc = 0x2d9378u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d937c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2d937cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d9380: 0x2543c  dsll32      $t2, $v0, 16
    ctx->pc = 0x2d9380u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d9384: 0xc0a90f4  jal         func_2A43D0
    ctx->pc = 0x2D9384u;
    SET_GPR_U32(ctx, 31, 0x2D938Cu);
    ctx->pc = 0x2D9388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9384u;
    // 0x2d9388: 0xa543f  dsra32      $t2, $t2, 16 (Delay Slot)
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A43D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A43D0u, 0x2D9384u, 0x2D938Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D938Cu;
label_2d938c:
    // 0x2d938c: 0xae022978  sw          $v0, 0x2978($s0)
    ctx->pc = 0x2d938cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10616), GPR_U32(ctx, 2));
label_2d9390:
    // 0x2d9390: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x2d9390u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x2d9394: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D9394u;
    {
        const bool branch_taken_0x2d9394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9394u;
        // 0x2d9398: 0x2403009a  addiu       $v1, $zero, 0x9A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9394) {
            ctx->pc = 0x2D93A0u;
            goto label_2d93a0;
        }
    }
    ctx->pc = 0x2D939Cu;
    // 0x2d939c: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x2d939cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_2d93a0:
    // 0x2d93a0: 0x920307d6  lbu         $v1, 0x7D6($s0)
    ctx->pc = 0x2d93a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2006)));
    // 0x2d93a4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D93A4u;
    {
        const bool branch_taken_0x2d93a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d93a4) {
            ctx->pc = 0x2D93C8u;
            goto label_2d93c8;
        }
    }
    ctx->pc = 0x2D93ACu;
    // 0x2d93ac: 0x9602082c  lhu         $v0, 0x82C($s0)
    ctx->pc = 0x2d93acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2092)));
    // 0x2d93b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d93b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d93b4: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x2D93B4u;
    SET_GPR_U32(ctx, 31, 0x2D93BCu);
    ctx->pc = 0x2D93B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D93B4u;
    // 0x2d93b8: 0x22903  sra         $a1, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x2D93B4u, 0x2D93BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D93BCu;
label_2d93bc:
    // 0x2d93bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D93BCu;
    {
        const bool branch_taken_0x2d93bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D93C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D93BCu;
        // 0x2d93c0: 0xa60207f0  sh          $v0, 0x7F0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2032), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d93bc) {
            ctx->pc = 0x2D93D0u;
            goto label_2d93d0;
        }
    }
    ctx->pc = 0x2D93C4u;
    // 0x2d93c4: 0x0  nop
    ctx->pc = 0x2d93c4u;
    // NOP
label_2d93c8:
    // 0x2d93c8: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x2d93c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d93cc: 0xa60307f0  sh          $v1, 0x7F0($s0)
    ctx->pc = 0x2d93ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2032), (uint16_t)GPR_U32(ctx, 3));
label_2d93d0:
    // 0x2d93d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d93d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d93d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d93d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d93d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d93d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d93dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D93DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D93E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D93DCu;
        // 0x2d93e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D93DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D93E4u;
}
