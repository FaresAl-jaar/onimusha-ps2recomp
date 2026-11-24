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

// Function: sub_002CC6E0
// Address: 0x2cc6e0 - 0x2cc924
void sub_002CC6E0_0x2cc6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CC6E0_0x2cc6e0");
#endif

    switch (ctx->pc) {
        case 0x2cc908u: goto label_2cc908;
        default: break;
    }

    ctx->pc = 0x2cc6e0u;

    // 0x2cc6e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cc6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cc6e4: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2cc6e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2cc6e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cc6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cc6ec: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x2cc6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2cc6f0: 0x90266c1c  lbu         $a2, 0x6C1C($at)
    ctx->pc = 0x2cc6f0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2cc6f4: 0x38c30001  xori        $v1, $a2, 0x1
    ctx->pc = 0x2cc6f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
    // 0x2cc6f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2cc6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2cc6fc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2cc6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cc700: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2cc700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cc704: 0x10800082  beqz        $a0, . + 4 + (0x82 << 2)
    ctx->pc = 0x2CC704u;
    {
        const bool branch_taken_0x2cc704 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc704) {
            ctx->pc = 0x2CC910u;
            goto label_2cc910;
        }
    }
    ctx->pc = 0x2CC70Cu;
    // 0x2cc70c: 0x8c8729c0  lw          $a3, 0x29C0($a0)
    ctx->pc = 0x2cc70cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
    // 0x2cc710: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x2cc710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x2cc714: 0x8c8429c8  lw          $a0, 0x29C8($a0)
    ctx->pc = 0x2cc714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10696)));
    // 0x2cc718: 0x8ce50024  lw          $a1, 0x24($a3)
    ctx->pc = 0x2cc718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x2cc71c: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x2cc71cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x2cc720: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2cc720u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2cc724: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2cc724u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2cc728: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2cc728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2cc72c: 0x10600078  beqz        $v1, . + 4 + (0x78 << 2)
    ctx->pc = 0x2CC72Cu;
    {
        const bool branch_taken_0x2cc72c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc72c) {
            ctx->pc = 0x2CC910u;
            goto label_2cc910;
        }
    }
    ctx->pc = 0x2CC734u;
    // 0x2cc734: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x2cc734u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2cc738: 0x10600075  beqz        $v1, . + 4 + (0x75 << 2)
    ctx->pc = 0x2CC738u;
    {
        const bool branch_taken_0x2cc738 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC738u;
        // 0x2cc73c: 0x24c30001  addiu       $v1, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc738) {
            ctx->pc = 0x2CC910u;
            goto label_2cc910;
        }
    }
    ctx->pc = 0x2CC740u;
    // 0x2cc740: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2cc740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2cc744: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2cc744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2cc748: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2cc748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cc74c: 0xa0236c1c  sb          $v1, 0x6C1C($at)
    ctx->pc = 0x2cc74cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8D6C1Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8D6C1Cu, _value); } while (0);
    // 0x2cc750: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2cc750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2cc754: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x2cc754u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2cc758: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2cc758u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2cc75c: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x2cc75cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x2cc760: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2cc760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cc764: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2cc764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cc768: 0xac2395b4  sw          $v1, -0x6A4C($at)
    ctx->pc = 0x2cc768u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8095B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8095B4u, _value); } while (0);
    // 0x2cc76c: 0x90630640  lbu         $v1, 0x640($v1)
    ctx->pc = 0x2cc76cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1600)));
    // 0x2cc770: 0x1465000f  bne         $v1, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x2CC770u;
    {
        const bool branch_taken_0x2cc770 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x2cc770) {
            ctx->pc = 0x2CC7B0u;
            goto label_2cc7b0;
        }
    }
    ctx->pc = 0x2CC778u;
    // 0x2cc778: 0x38830001  xori        $v1, $a0, 0x1
    ctx->pc = 0x2cc778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x2cc77c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2cc77cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2cc780: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2cc780u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2cc784: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2cc784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cc788: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2cc788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cc78c: 0xa0650640  sb          $a1, 0x640($v1)
    ctx->pc = 0x2cc78cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1600), (uint8_t)GPR_U32(ctx, 5));
    // 0x2cc790: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x2cc790u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
    // 0x2cc794: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2cc794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2cc798: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2cc798u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2cc79c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cc79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cc7a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2cc7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cc7a4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2CC7A4u;
    {
        const bool branch_taken_0x2cc7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC7A4u;
        // 0x2cc7a8: 0xa0400641  sb          $zero, 0x641($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1601), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc7a4) {
            ctx->pc = 0x2CC7E8u;
            goto label_2cc7e8;
        }
    }
    ctx->pc = 0x2CC7ACu;
    // 0x2cc7ac: 0x0  nop
    ctx->pc = 0x2cc7acu;
    // NOP
label_2cc7b0:
    // 0x2cc7b0: 0x38830001  xori        $v1, $a0, 0x1
    ctx->pc = 0x2cc7b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x2cc7b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2cc7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2cc7b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2cc7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cc7bc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2cc7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cc7c0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2cc7c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2cc7c4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2cc7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cc7c8: 0xa0640640  sb          $a0, 0x640($v1)
    ctx->pc = 0x2cc7c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1600), (uint8_t)GPR_U32(ctx, 4));
    // 0x2cc7cc: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x2cc7ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2cc7d0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2cc7d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2cc7d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2cc7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2cc7d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cc7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cc7dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2cc7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cc7e0: 0xa0450641  sb          $a1, 0x641($v0)
    ctx->pc = 0x2cc7e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1601), (uint8_t)GPR_U32(ctx, 5));
    // 0x2cc7e4: 0x0  nop
    ctx->pc = 0x2cc7e4u;
    // NOP
label_2cc7e8:
    // 0x2cc7e8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2cc7e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2cc7ec: 0x90286c1c  lbu         $t0, 0x6C1C($at)
    ctx->pc = 0x2cc7ecu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2cc7f0: 0x3c033f99  lui         $v1, 0x3F99
    ctx->pc = 0x2cc7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16281 << 16));
    // 0x2cc7f4: 0x3466999a  ori         $a2, $v1, 0x999A
    ctx->pc = 0x2cc7f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2cc7f8: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x2cc7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2cc7fc: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x2cc7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x2cc800: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2cc800u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cc804: 0x3465cccd  ori         $a1, $v1, 0xCCCD
    ctx->pc = 0x2cc804u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2cc808: 0x2407fff7  addiu       $a3, $zero, -0x9
    ctx->pc = 0x2cc808u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x2cc80c: 0x27848a54  addiu       $a0, $gp, -0x75AC
    ctx->pc = 0x2cc80cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937172));
    // 0x2cc810: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2cc810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2cc814: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x2cc814u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2cc818: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2cc818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2cc81c: 0x484021  addu        $t0, $v0, $t0
    ctx->pc = 0x2cc81cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2cc820: 0x8d080000  lw          $t0, 0x0($t0)
    ctx->pc = 0x2cc820u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2cc824: 0xa1090640  sb          $t1, 0x640($t0)
    ctx->pc = 0x2cc824u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1600), (uint8_t)GPR_U32(ctx, 9));
    // 0x2cc828: 0x90286c1c  lbu         $t0, 0x6C1C($at)
    ctx->pc = 0x2cc828u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2cc82c: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x2cc82cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2cc830: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2cc830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2cc834: 0x484021  addu        $t0, $v0, $t0
    ctx->pc = 0x2cc834u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2cc838: 0x8d080000  lw          $t0, 0x0($t0)
    ctx->pc = 0x2cc838u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2cc83c: 0xa1000641  sb          $zero, 0x641($t0)
    ctx->pc = 0x2cc83cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1601), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cc840: 0x90286c1c  lbu         $t0, 0x6C1C($at)
    ctx->pc = 0x2cc840u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2cc844: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x2cc844u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2cc848: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2cc848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2cc84c: 0x484021  addu        $t0, $v0, $t0
    ctx->pc = 0x2cc84cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2cc850: 0x8d090000  lw          $t1, 0x0($t0)
    ctx->pc = 0x2cc850u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2cc854: 0x8d2800e0  lw          $t0, 0xE0($t1)
    ctx->pc = 0x2cc854u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 224)));
    // 0x2cc858: 0x1073824  and         $a3, $t0, $a3
    ctx->pc = 0x2cc858u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
    // 0x2cc85c: 0xad2700e0  sw          $a3, 0xE0($t1)
    ctx->pc = 0x2cc85cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 224), GPR_U32(ctx, 7));
    // 0x2cc860: 0x90276c1c  lbu         $a3, 0x6C1C($at)
    ctx->pc = 0x2cc860u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
    // 0x2cc864: 0x38e70001  xori        $a3, $a3, 0x1
    ctx->pc = 0x2cc864u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)1);
    // 0x2cc868: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2cc868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2cc86c: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x2cc86cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2cc870: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x2cc870u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2cc874: 0x8ce80000  lw          $t0, 0x0($a3)
    ctx->pc = 0x2cc874u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2cc878: 0x8d0700e0  lw          $a3, 0xE0($t0)
    ctx->pc = 0x2cc878u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 224)));
    // 0x2cc87c: 0x34e70008  ori         $a3, $a3, 0x8
    ctx->pc = 0x2cc87cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
    // 0x2cc880: 0xad0700e0  sw          $a3, 0xE0($t0)
    ctx->pc = 0x2cc880u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 224), GPR_U32(ctx, 7));
    // 0x2cc884: 0x90276c1c  lbu         $a3, 0x6C1C($at)
    ctx->pc = 0x2cc884u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
    // 0x2cc888: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x2cc888u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2cc88c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2cc88cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2cc890: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x2cc890u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2cc894: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x2cc894u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2cc898: 0xace600e8  sw          $a2, 0xE8($a3)
    ctx->pc = 0x2cc898u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 232), GPR_U32(ctx, 6));
    // 0x2cc89c: 0xace606c0  sw          $a2, 0x6C0($a3)
    ctx->pc = 0x2cc89cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1728), GPR_U32(ctx, 6));
    // 0x2cc8a0: 0x90266c1c  lbu         $a2, 0x6C1C($at)
    ctx->pc = 0x2cc8a0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2cc8a4: 0x38c60001  xori        $a2, $a2, 0x1
    ctx->pc = 0x2cc8a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
    // 0x2cc8a8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2cc8a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2cc8ac: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2cc8acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2cc8b0: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x2cc8b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2cc8b4: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x2cc8b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2cc8b8: 0xacc500e8  sw          $a1, 0xE8($a2)
    ctx->pc = 0x2cc8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 232), GPR_U32(ctx, 5));
    // 0x2cc8bc: 0xacc506c0  sw          $a1, 0x6C0($a2)
    ctx->pc = 0x2cc8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1728), GPR_U32(ctx, 5));
    // 0x2cc8c0: 0x90266c1c  lbu         $a2, 0x6C1C($at)
    ctx->pc = 0x2cc8c0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
    // 0x2cc8c4: 0x862821  addu        $a1, $a0, $a2
    ctx->pc = 0x2cc8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2cc8c8: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x2cc8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2cc8cc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2cc8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2cc8d0: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x2cc8d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2cc8d4: 0xa3848a6c  sb          $a0, -0x7594($gp)
    ctx->pc = 0x2cc8d4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937196), (uint8_t)GPR_U32(ctx, 4));
    // 0x2cc8d8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2cc8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cc8dc: 0x90a4065c  lbu         $a0, 0x65C($a1)
    ctx->pc = 0x2cc8dcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1628)));
    // 0x2cc8e0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CC8E0u;
    {
        const bool branch_taken_0x2cc8e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2CC8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC8E0u;
        // 0x2cc8e4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc8e0) {
            ctx->pc = 0x2CC8F0u;
            goto label_2cc8f0;
        }
    }
    ctx->pc = 0x2CC8E8u;
    // 0x2cc8e8: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CC8E8u;
    {
        const bool branch_taken_0x2cc8e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2cc8e8) {
            ctx->pc = 0x2CC8F8u;
            goto label_2cc8f8;
        }
    }
    ctx->pc = 0x2CC8F0u;
label_2cc8f0:
    // 0x2cc8f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cc8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cc8f4: 0xa0a20780  sb          $v0, 0x780($a1)
    ctx->pc = 0x2cc8f4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1920), (uint8_t)GPR_U32(ctx, 2));
label_2cc8f8:
    // 0x2cc8f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cc8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cc8fc: 0xa3828c88  sb          $v0, -0x7378($gp)
    ctx->pc = 0x2cc8fcu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937736), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cc900: 0xc0ec6f4  jal         func_3B1BD0
    ctx->pc = 0x2CC900u;
    SET_GPR_U32(ctx, 31, 0x2CC908u);
    ctx->pc = 0x2CC904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC900u;
    // 0x2cc904: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1BD0u, 0x2CC900u, 0x2CC908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC908u;
label_2cc908:
    // 0x2cc908: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CC908u;
    {
        const bool branch_taken_0x2cc908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC908u;
        // 0x2cc90c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc908) {
            ctx->pc = 0x2CC918u;
            goto label_2cc918;
        }
    }
    ctx->pc = 0x2CC910u;
label_2cc910:
    // 0x2cc910: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cc910u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc914: 0x0  nop
    ctx->pc = 0x2cc914u;
    // NOP
label_2cc918:
    // 0x2cc918: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cc918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cc91c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC91Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC91Cu;
        // 0x2cc920: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC91Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC924u;
}
